VERSION 5.00
Begin {C62A69F0-16DC-11CE-9E98-00AA00574A4F} UserForm1 
   Caption         =   "UserForm1"
   ClientHeight    =   3015
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   4560
   OleObjectBlob   =   "UserForm1.frx":0000
   StartUpPosition =   1  'CenterOwner
End
Attribute VB_Name = "UserForm1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Public Sub CommandButton1_Click()
Dim strName As String

'input box with title - refer Image Title
strName = InputBox("Enter your Sheet Name!", "Input Box")
Sheets.Add After:=Sheets(Sheets.Count)

'change name
Sheets(Sheets.Count).Name = strName

'add needed column
Worksheets(Sheets.Count).Activate
Range("A1") = "Device"
Range("B1") = "Register"
Range("C1") = "Register Length [Byte]"
Range("D1") = "MSB"
Range("E1") = "LSB"
Range("F1") = "Bit Name"
Range("G1") = "Short Description"
Range("H1") = "Default"
Range("A1:H1").Borders(xlEdgeBottom).LineStyle = XlLineStyle.xlDouble

Range("J1") = "Opcode"
Range("K1") = "[hex]"
Range("L1") = "Description"
Range("J1:L1").Borders(xlEdgeBottom).LineStyle = XlLineStyle.xlDouble

UserForm_Initialize
End Sub

Public Sub CommandButton2_Click()
' Generate Header Files

' determination of parameter
Dim Col_Dev As Integer
Dim Col_Reg As Integer
Dim Col_RegLen As Integer
Dim Col_MSB As Integer
Dim Col_LSB As Integer
Dim Col_BitNam As Integer
Dim Col_ShortDescr As Integer
Dim Col_Def As Integer

' Determine max length of column
Dim MaxLen_Col_Dev As Integer
Dim MaxLen_Col_Reg As Integer
Dim MaxLen_Col_RegLen As Integer
Dim MaxLen_Col_MSB As Integer
Dim MaxLen_Col_LSB As Integer
Dim MaxLen_Col_BitNam As Integer
Dim MaxLen_Col_ShortDescr As Integer
Dim MaxLen_Col_Def As Integer
Dim TempInteger As Integer

Dim Row As Integer
Dim FirstRow As Integer
Dim LastRow As Integer
Dim Index As Integer
Dim BitSize As Double

Dim id As Double
Dim ii As Integer

Dim Device As String
Dim Register As String
Dim RegisterLength As Integer
Dim MSB As Double
Dim LSB As Double
Dim BitName As String
Dim ShortDescription As String
Dim Default As String
Dim DefaultValue As String
Dim TempString As String


Dim Pos As String 'Position
Dim PosLine As String 'Position Line
Dim Mask As String 'Mask
Dim MaskLine As String 'Mask Line
Dim Def As String 'Definition
Dim DefLine As String 'Definition Line

Dim PosSpace As String 'Position
Dim PosLineSpace As String 'Position Line
Dim MaskSpace As String 'Mask
Dim MaskLineSpace As String 'Mask Line
Dim DefSpace As String 'Definition
Dim DefLineSpace As String 'Definition Line


Dim DecodedMask As Double

Dim MyFile As String
Dim MyFile2 As String
Dim MyFileExt As String
Dim MyFileExt2 As String
Dim MyIncFileExt As String
Dim MyIncFileExt2 As String

Dim MyPath As String


On Error GoTo ErrorHandler

' Activation of used Sheet
Worksheets(ComboBox1.Value).Activate

' determine the used column for
Col_Dev = 1
Col_Reg = 2
Col_RegLen = 3
Col_MSB = 4
Col_LSB = 5
Col_BitNam = 6
Col_ShortDescr = 7
Col_Def = 8

MaxLen_Col_Dev = MyMaxLength(1)
MaxLen_Col_Reg = MyMaxLength(2)
MaxLen_Col_RegLen = MyMaxLength(3)
MaxLen_Col_MSB = MyMaxLength(4)
MaxLen_Col_LSB = MyMaxLength(5)
MaxLen_Col_BitNam = MyMaxLength(6)
MaxLen_Col_ShortDescr = MyMaxLength(7)
MaxLen_Col_Def = MyMaxLength(8)

' Start with first valid row
Row = 2
FirstRow = Row


' Select Folder
With Application.FileDialog(msoFileDialogFolderPicker)
    .AllowMultiSelect = False
    .Title = "Choose Folder..."
    .Show
    MyPath = .SelectedItems(1)
End With

' Definition of file name(s)
MyFileExt = "_Bit_Definition.h"
MyFileExt2 = "_CFG_Macros.h"
MyIncFileExt = "_BIT_DEFINITION_H_"
MyIncFileExt2 = "_CFG_MACROS_H_"


MyFile = MyPath & "\" & Cells(Row, Col_Dev) & MyFileExt
MyFile2 = MyPath & "\" & Cells(Row, Col_Dev) & MyFileExt2


Open MyFile For Output As #1
Open MyFile2 For Output As #2

' Start writing into File
Print #1, "/*"
Print #1, " * " & Cells(Row, Col_Dev) & MyFileExt
Print #1, " *"
Print #1, " *  Created on: " & Format(Date, "dd.mm.yyyy")
Print #1, " *      Author: ScioSense Support Team"
Print #1, " */"
Print #1, ""
Print #1, "#ifndef INC_" & Cells(Row, Col_Dev) & MyIncFileExt
Print #1, "#define INC_" & Cells(Row, Col_Dev) & MyIncFileExt
Print #1, ""
Print #1, "/******************************************************************************/"
Print #1, "/*                                                                            */"
Print #1, "/*                        " & Worksheets(ComboBox1.Value).Name & "                   */"
Print #1, "/*                                                                            */"
Print #1, "/******************************************************************************/"

Print #2, "/*"
Print #2, " * " & Cells(Row, Col_Dev) & MyFileExt2
Print #2, " *"
Print #2, " *  Created on: " & Format(Date, "dd.mm.yyyy")
Print #2, " *      Author: ScioSense Support Team"
Print #2, " */"
Print #2, ""
Print #2, "#ifndef INC_" & Cells(Row, Col_Dev) & MyIncFileExt2
Print #2, "#define INC_" & Cells(Row, Col_Dev) & MyIncFileExt2
Print #2, ""
Print #2, "/* Exported macros -----------------------------------------------------------*/"
Print #2, "/** @defgroup " & Device & "_Exported_Macros " & Device & " Exported Macros"""
Print #2, "  * @{"
Print #2, "  */"


' do something up to the last row
Do While Not IsEmpty(Cells(Row, 1))

' update used parameter
Device = Cells(Row, Col_Dev)
Register = Cells(Row, Col_Reg)
RegisterLength = Cells(Row, Col_RegLen)
MSB = Cells(Row, Col_MSB)
LSB = Cells(Row, Col_LSB)
BitName = Cells(Row, Col_BitNam)
ShortDescription = Cells(Row, Col_ShortDescr)
Default = Cells(Row, Col_Def)
DefaultValue = MyHex2Dec(Default)

If Row = FirstRow Then
    Print #1, ""
    Print #1, "/*******************  Bit definition for " & Device & "_" & Register & " register  ********************/"

    Print #2, ""
    Print #2, "/** @defgroup " & Device & "_" & Register & " register"
    Print #2, "* @{"
    Print #2, "*/"
End If

BitSize = MSB - LSB + 1

' Current Row
' Dev _ Reg _ BitName
Def = Device & "_" & Register & "_" & BitName
TempInteger = MaxLen_Col_Dev + MaxLen_Col_Reg + MaxLen_Col_BitNam + 2 + 4
DefSpace = Def & MyAddSpace(Def, TempInteger)
Pos = Def & "_Pos"
PosSpace = Pos & MyAddSpace(Def, TempInteger)
Mask = Def & "_Msk"
MaskSpace = Mask & MyAddSpace(Def, TempInteger)


DecodedMask = MyPower(2, (BitSize)) - 1

'Space(maxLength - Len(x))
'MyAddSpace(Text, maxLength)

' #define Device + Register + BitName + _Pos           (LSB)
PosLine = "#define " & PosSpace & vbTab & "(" & LSB & "U)"   ' U: Unsigned

' #define Device + Register + BitName + _Msk           (0x + DecodedMask + << Device + Register + BitName + _Pos)
MaskLine = "#define " & MaskSpace & vbTab & "(0x" & Right$("00000000" & Hex$(DecodedMask), MyRound(BitSize)) & "UL << " & Pos & ")"  ' UL: Unsigned Long


' #define Device + Register + BitName
DefLine = "#define " & DefSpace & vbTab & vbTab & Mask

' print witout any comments
Print #1, PosLine
' print with /*!< 0x00000000 */
Print #1, MaskLine & vbTab & vbTab & "/*!< 0x" & Right$("00000000" & Hex$(DecodedMask * MyPower(2, LSB)), RegisterLength * 2) & " */"

If BitSize = 1 Then
    ' IF bitsize = 1 Then Print with short description /*!< _____________ */
    Print #1, DefLine _
    & vbTab & vbTab & vbTab & vbTab & vbTab _
    & "/*!< " & ShortDescription & " */"
Else
    ' IF bitsize > 1 Then Print with short description /*!< Bitname[MSB:LSB]_____________ */
    Print #1, DefLine _
    & vbTab & vbTab & vbTab & vbTab & vbTab _
    & "/*!< " & BitName & "[" & MSB & ":" & LSB & "]" & ShortDescription & " */"
End If


' if bitsize > 1
If BitSize > 1 Then
    For id = 0 To BitSize - 1
        Print #1, "#define " & Def & "_" & id _
        & MyAddSpace(Def, TempInteger) & vbTab & vbTab & "(0x" & Right$("00000000" & Hex$(MyPower(2, id)), RegisterLength * 2) & " << " & Pos & ")" & vbTab
    Next id
End If


' entering values into CFG_Setting ASCII file
' using for next loops from zero to bit size
' NOTE: This takes very loop time
'For id = 0 To MyPower(2, BitSize) - 1
'    If (id < 10) Then
'        TempString = "#define " & Def & "_Value" & id & Space(1) _
'        & MyAddSpace(Def, TempInteger) & vbTab & "(0x" & Right$("00000000" & Hex$(id), RegisterLength * 2) & " << " & Pos & ")" & vbTab
'    Else
'        TempString = "#define " & Def & "_Value" & id _
'        & MyAddSpace(Def, TempInteger) & vbTab & "(0x" & Right$("00000000" & Hex$(id), RegisterLength * 2) & " << " & Pos & ")" & vbTab
'    End If
'    ' adding default value at the end (WorksheetFunction.Hex2Dec(Default))
'    If (id = DefaultValue) Then
'        TempString = TempString & "/*!< Default = 0x" & Default & " */"
'    End If
'
'    Print #2, TempString
'Next id
' -------------------------------------------


' entering values into CFG_Setting ASCII file
' creating defgroup for each register
id = DefaultValue
TempString = "#define " & Def & "_SET(__Val__)" _
& MyAddSpace(Def, TempInteger) & vbTab & "(((__Val__) << " & Pos & ") & " & Mask & ")" & vbTab & vbTab

' adding default value at the end (WorksheetFunction.Hex2Dec(Default))
TempString = TempString & "/*!< Default = 0x" & Default & " */"

Print #2, TempString
' -------------------------------------------



Row = Row + 1

' if new configuration register is printed
If Not (Cells(Row, Col_Reg) = Cells(Row - 1, Col_Reg)) Then
    FirstRow = Row
    
    Print #2, "/**"
    Print #2, "* @}"
    Print #2, "*/"
End If


Loop

'last lines in ASCII files before closing

Print #1, ""
Print #1, ""
Print #1, "#endif /* INC_" & Device & MyIncFileExt & " */"


Print #2, ""
Print #2, "/**"
Print #2, "* @}"
Print #2, "*/"
Print #2, ""
Print #2, ""
Print #2, "#endif /* INC_" & Device & MyIncFileExt2 & " */"

Close #1
Close #2

MsgBox ("it is done!")

Exit Sub

ErrorHandler:
Close #1
Close #2

    'MsgBox ("Out of Range - All Sheets are scanned")

End Sub

Function MyPower(Number As Double, Exponent As Double) As Double

    MyPower = Number ^ Exponent

End Function

Function MyRound(Number As Double) As Double
    Dim Divisor As Double
    Dim Remainder As Double
    
    Disivor = Number / 4
    Remainder = Number Mod 4
    
    If Remainder > 0 Then
        MyRound = Disivor + 1
    Else
        MyRound = Disivor
    End If

End Function

Function MyMaxLength(Column As Integer) As Integer
    Dim c As Range
    Dim l, m As Integer
    Dim maxRow As Integer
    
    maxRow = MyCountRows(Column)
    
    ' unused work around
    'Dim LR As Long
    'ActiveSheet.Cells(2, Column).Select
    'LR = Selection.Resize(Selection.Rows.Count + maxRow - 2, _
    '    Selection.Columns.Count).Select
    
    'for loop is used to determine the max length of entered string
    For Each c In Range(Cells(2, Column), Cells(maxRow, Column))
        l = WorksheetFunction.Max(l, Len(c))
    Next c
    
    MyMaxLength = l
    'MsgBox ("column " & Column & " = " & l)
End Function

Function MyCountRows(Column As Integer) As Integer
    MyCountRows = WorksheetFunction.CountA(Columns(Column))
End Function

Function MyAddSpace(text As String, maxLen As Integer) As String
    If (maxLen - Len(text)) < 1 Then
        'MsgBox ((maxLen - Len(text)))
    End If
    
    MyAddSpace = Space(maxLen - Len(text))
End Function

Function MyHex2Dec(HexString As String) As Integer
    Dim DecValue As Integer
    HexString = Right$(HexString, Len(HexString) - 2)
    MyHex2Dec = WorksheetFunction.Hex2Dec(HexString)
    'MsgBox (MyHex2Dec)
End Function

Public Sub CommandButton3_Click()
' Generate Coding

' determination of parameter
Dim Col_Dev As Integer
Dim Col_Reg As Integer
Dim Col_RegLen As Integer
Dim Col_MSB As Integer
Dim Col_LSB As Integer
Dim Col_BitNam As Integer
Dim Col_ShortDescr As Integer
Dim Col_Def As Integer

Dim Col_Opc As Integer
Dim Col_OpcHex As Integer
Dim Col_OpcDescr As Integer

' Determine max length of column
Dim MaxLen_Col_Dev As Integer
Dim MaxLen_Col_Reg As Integer
Dim MaxLen_Col_RegLen As Integer
Dim MaxLen_Col_MSB As Integer
Dim MaxLen_Col_LSB As Integer
Dim MaxLen_Col_BitNam As Integer
Dim MaxLen_Col_ShortDescr As Integer
Dim MaxLen_Col_Def As Integer

Dim MaxLen_Col_Opc As Integer
Dim MaxLen_Col_OpcHex As Integer
Dim MaxLen_Col_OpcDescr As Integer

Dim TempInteger As Integer

Dim Row As Integer
Dim FirstRow As Integer
Dim LastRow As Integer
Dim Index As Integer
Dim BitSize As Double

Dim id As Double
Dim ii As Integer

Dim Device As String
Dim Register As String
Dim RegisterLength As Integer
Dim MSB As Double
Dim LSB As Double
Dim BitName As String
Dim ShortDescription As String
Dim Default As String
Dim DefaultValue As String
Dim TempString As String

Dim TempIDX As Integer
Dim TempIDXLast As Integer

Dim Pos As String 'Position
Dim PosLine As String 'Position Line
Dim Mask As String 'Mask
Dim MaskLine As String 'Mask Line
Dim Def As String 'Definition
Dim DefLine As String 'Definition Line

Dim PosSpace As String 'Position
Dim PosLineSpace As String 'Position Line
Dim MaskSpace As String 'Mask
Dim MaskLineSpace As String 'Mask Line
Dim DefSpace As String 'Definition
Dim DefLineSpace As String 'Definition Line


Dim DecodedMask As Double

Dim MyCFile As String
Dim MyFile2 As String
Dim MyCFileExt As String
Dim MyFileExt2 As String
Dim MyCIncFileExt As String
Dim MyIncFileExt2 As String

Dim MyPath As String


On Error GoTo ErrorHandler

' Activation of used Sheet
Worksheets(ComboBox1.Value).Activate

' determine the used column for
Col_Dev = 1
Col_Reg = 2
Col_RegLen = 3
Col_MSB = 4
Col_LSB = 5
Col_BitNam = 6
Col_ShortDescr = 7
Col_Def = 8

Col_Opc = 10
Col_OpcHex = 11
Col_OpcDescr = 12

MaxLen_Col_Dev = MyMaxLength(1)
MaxLen_Col_Reg = MyMaxLength(2)
MaxLen_Col_RegLen = MyMaxLength(3)
MaxLen_Col_MSB = MyMaxLength(4)
MaxLen_Col_LSB = MyMaxLength(5)
MaxLen_Col_BitNam = MyMaxLength(6)
MaxLen_Col_ShortDescr = MyMaxLength(7)
MaxLen_Col_Def = MyMaxLength(8)

MaxLen_Col_Opc = MyMaxLength(10)
MaxLen_Col_OpcHex = MyMaxLength(11)
MaxLen_Col_OpcDescr = MyMaxLength(12)

' Start with first valid row
Row = 2
FirstRow = Row


' Select Folder
With Application.FileDialog(msoFileDialogFolderPicker)
    .AllowMultiSelect = False
    .Title = "Choose Folder..."
    .Show
    MyPath = .SelectedItems(1)
End With

' Definition of file name(s)
MyCFileExt = "_Coding.h"
'MyCFileExt2 = "_CFG_Macros.h"
MyCIncFileExt = "_CODING_H_"
'MyCIncFileExt2 = "_CFG_MACROS_H_"


MyCFile = MyPath & "\" & Cells(Row, Col_Dev) & MyCFileExt
'MyFile2 = MyPath & "\" & Cells(Row, Col_Dev) & MyFileExt2


Open MyCFile For Output As #1
'Open MyFile2 For Output As #2

' Start writing into File
'Print #1, "/*"
'Print #1, " * " & Cells(Row, Col_Dev) & MyFileExt
'Print #1, " *"
'Print #1, " *  Created on: " & Format(Date, "dd.mm.yyyy")
'Print #1, " *      Author: ScioSense Support Team"
'Print #1, " */"
'Print #1, ""
'Print #1, "#ifndef INC_" & Cells(Row, Col_Dev) & MyIncFileExt
'Print #1, "#define INC_" & Cells(Row, Col_Dev) & MyIncFileExt
'Print #1, ""
'Print #1, "/******************************************************************************/"
'Print #1, "/*                                                                            */"
'Print #1, "/*                        " & Worksheets(ComboBox1.Value).Name & "                   */"
'Print #1, "/*                                                                            */"
'Print #1, "/******************************************************************************/"

Print #1, "/*"
Print #1, " * " & Cells(Row, Col_Dev) & MyCFileExt
Print #1, " *"
Print #1, " *  Created on: " & Format(Date, "dd.mm.yyyy")
Print #1, " *      Author: ScioSense Support Team"
Print #1, " */"
Print #1, ""
Print #1, "/* Define to prevent recursive inclusion -------------------------------------*/"
Print #1, "#ifndef INC_" & Cells(Row, Col_Dev) & MyCIncFileExt
Print #1, "#define INC_" & Cells(Row, Col_Dev) & MyCIncFileExt
Print #1, ""
Print #1, "/* Includes ------------------------------------------------------------------*/"
Print #1, "#include " & Chr$(34) & Cells(Row, Col_Dev) & "_Bit_Definition.h" & Chr$(34)
Print #1, "#include " & Chr$(34) & Cells(Row, Col_Dev) & "_CFG_Macros.h" & Chr$(34)
Print #1, ""
Print #1, "/* Exported types ------------------------------------------------------------*/"
Print #1, "/** @defgroup " & Cells(Row, Col_Dev) & "_Exported_Types " & Cells(Row, Col_Dev) & " Exported Types"
Print #1, "  * @{"
Print #1, "  */"
Print #1, ""

'"/******************************************************************************/"
TempIDX = 0

Row = 2

Dim Def_CFG_Declaration As String
Dim Def_CFG_ArraySize As String

' do something up to the last row
Do While Not IsEmpty(Cells(Row, 1))

' if new configuration register is printed
If Not (Cells(Row, Col_Reg) = Cells(Row - 1, Col_Reg)) Then
    TempIDX = TempIDX + 1
End If
Row = Row + 1
Loop

Row = 2

Print #1, "/* Private defines -----------------------------------------------------------*/"
Print #1, "/** @defgroup " & Cells(Row, Col_Dev) & "_Private_Constants " & Cells(Row, Col_Dev) & " Private Constants"
Print #1, "  * @{"
Print #1, "  */"

Def_CFG_Declaration = "__" & Cells(Row, Col_Dev) & "_CFG_Declaration"
Def_CFG_ArraySize = "__" & Cells(Row, Col_Dev) & "_CFG_Array_Size"

If Cells(Row, Col_RegLen) > 8 Then
    Print #1, "#define " & Def_CFG_Declaration & vbTab & "uint32_t"
Else
    Print #1, "#define " & Def_CFG_Declaration & vbTab & "uint8_t"
End If

Print #1, "#define " & Def_CFG_ArraySize & vbTab & vbTab & TempIDX & vbTab & vbTab & "/* Addresses from CR[0] up to CR[" & (TempIDX - 1) & "] */"

Print #1, "/**"
Print #1, "* @}"
Print #1, "*/"

'"/******************************************************************************/"
' ENUM State Type Def
Row = 2

Dim Delim As String
Delim = ","
Dim EndRow As Integer
EndRow = MyCountRows(10)

Print #1, "/**"
Print #1, "  * @brief  " & Cells(Row, Col_Dev) & " Opcode definition"
Print #1, "  */"

Print #1, "typedef enum _" & Cells(Row, Col_Dev) & "_OpcodeTypeDef"
Print #1, "{"
Print #1, vbTab & "/* Opcode = Hex / Description */"

' do something up to the last row
Do While Not IsEmpty(Cells(Row, 10))

If (Row = EndRow) Then
    Delim = " "
End If

Print #1, vbTab & Cells(Row, Col_Opc) & MyAddSpace(Cells(Row, Col_Opc), MaxLen_Col_Opc) & " = " & Cells(Row, Col_OpcHex) & "U" & Delim & "    /*!< " & Cells(Row, Col_OpcDescr) & MyAddSpace(Cells(Row, Col_OpcDescr), MaxLen_Col_OpcDescr) & " */"

Row = Row + 1
Loop

Print #1, "} " & Cells(Row, Col_Dev) & "_OpcodeTypeDef;"
Print #1, ""

'"/******************************************************************************/"
' ENUM State Type Def
Row = 2

Print #1, "/**"
Print #1, "  * @brief  " & Cells(Row, Col_Dev) & " State structure definition"
Print #1, "  */"
  
Print #1, "typedef enum _" & Cells(Row, Col_Dev) & "_StateTypeDef"
Print #1, "{"
Print #1, vbTab & Cells(Row, Col_Dev) & "_STATE_RESET      = 0x00U,    /*!< Device not Initialized                           */"
Print #1, vbTab & Cells(Row, Col_Dev) & "_STATE_READY      = 0x01U,    /*!< Device Configured, Initialized and ready for use */"
Print #1, vbTab & Cells(Row, Col_Dev) & "_STATE_BUSY       = 0x02U,    /*!< an internal process is ongoing                   */"
Print #1, vbTab & Cells(Row, Col_Dev) & "_STATE_INTN       = 0x03U,    /*!< Device interrupt state                           */"
Print #1, vbTab & Cells(Row, Col_Dev) & "_STATE_ERROR      = 0x04U     /*!< Device error state                               */"
Print #1, "} " & Cells(Row, Col_Dev) & "_StateTypeDef;"
Print #1, ""

'"/******************************************************************************/"
TempIDX = 0

Row = 2
FirstRow = Row

Print #1, "/* Exported types ------------------------------------------------------------*/"
Print #1, "/** @defgroup " & Cells(Row, Col_Dev) & "_Exported_Types " & Cells(Row, Col_Dev) & " Exported Types"
Print #1, "  * @{"
Print #1, "  */"

' do something up to the last row
Do While Not IsEmpty(Cells(Row, 1))

' update used parameter
Device = Cells(Row, Col_Dev)
Register = Cells(Row, Col_Reg)
RegisterLength = Cells(Row, Col_RegLen)
MSB = Cells(Row, Col_MSB)
LSB = Cells(Row, Col_LSB)
BitName = Cells(Row, Col_BitNam)
ShortDescription = Cells(Row, Col_ShortDescr)
Default = Cells(Row, Col_Def)
DefaultValue = MyHex2Dec(Default)

If Row = FirstRow Then
    Print #1, "/**"
    Print #1, "  * @brief  Configuration CR[" & TempIDX & "] Structure definition"
    Print #1, "  */"
    Print #1, "typedef struct {"
End If

BitSize = MSB - LSB + 1

If BitSize > 8 Then
    Print #1, vbTab & "uint32_t " & BitName & ";" & MyAddSpace(BitName, MaxLen_Col_BitNam) & vbTab & "/*!< " & ShortDescription & " */"
Else
    Print #1, vbTab & "uint8_t " & BitName & ";" & MyAddSpace(BitName, MaxLen_Col_BitNam) & vbTab & "/*!< " & ShortDescription & " */"
End If

Row = Row + 1

' if new configuration register is printed
If Not (Cells(Row, Col_Reg) = Cells(Row - 1, Col_Reg)) Then
    FirstRow = Row
    
    Print #1, "} " & Device & "_CR" & TempIDX & "TypeDef;"
    Print #1, ""
    
    TempIDX = TempIDX + 1
End If

Loop

'"/******************************************************************************/"
TempIDXLast = TempIDX - 1
TempIDX = 0

Print #1, ""
Print #1, "/**"
Print #1, "  * @brief  Configuration Structure definition"
Print #1, "  */"
Print #1, "typedef struct {"

For TempIDX = 0 To TempIDXLast
    Print #1, vbTab & Device & "_CR" & TempIDX & "TypeDef CR" & TempIDX & ";"
Next TempIDX

Print #1, ""
Print #1, vbTab & "/* additional parameter, more than one register long"
Print #1, vbTab & " * custom content */"
Print #1, ""
Print #1, vbTab & "//uint32_t refclk_division;"
Print #1, "} " & Device & "_ParamTypeDef;"

Print #1, "/**"
Print #1, "* @}"
Print #1, "*/"

'"/******************************************************************************/"

Print #1, ""
Print #1, "/**"
Print #1, "  * @brief  Initialization Structure definition"
Print #1, "  */"
Print #1, "typedef struct {"
Print #1, vbTab & Def_CFG_Declaration & " CR[" & Def_CFG_ArraySize & "]"
Print #1, ""
Print #1, vbTab & Device & "_ParamTypeDef Param;"
Print #1, ""
Print #1, vbTab & "/* place for custom content */"
Print #1, vbTab & " * e.g. further registers */"
Print #1, ""
Print #1, vbTab & Device & "_StateTypeDef State;"
Print #1, ""
Print #1, "} " & Device & "_InitTypeDef;"

Print #1, "/**"
Print #1, "* @}"
Print #1, "*/"

'"/******************************************************************************/"

TempIDX = 0

Print #1, ""
Print #1, "/* Private function prototypes -----------------------------------------------*/"
Print #1, "/** @defgroup " & Device & "_Private_Functions " & Device & " Private Functions"
Print #1, "  * @{"
Print #1, "  */"

Print #1, "/**"
Print #1, "  * @brief  Handle parameter update."
Print #1, "  * @param  init pointer to a " & Device & "_InitTypeDef structure that contains"
Print #1, "  *               the configuration information for the specified device."
Print #1, "  * @retval None"
Print #1, "  */"
Print #1, "void " & Device & "_Update_Param(" & Device & "_InitTypeDef* init)  {"
Print #1, vbTab & "/* Read all content from CR[] and write into every parameter"
Print #1, vbTab & " * Update for each configuration register */"

Row = 2
FirstRow = Row

' do something up to the last row
Do While Not IsEmpty(Cells(Row, 1))

If FirstRow = Row Then
    ' do something before each register
    Print #1, vbTab & "/* Parameter of CR[" & TempIDX & "] */"
End If

' update used parameter
Device = Cells(Row, Col_Dev)
Register = Cells(Row, Col_Reg)
RegisterLength = Cells(Row, Col_RegLen)
MSB = Cells(Row, Col_MSB)
LSB = Cells(Row, Col_LSB)
BitName = Cells(Row, Col_BitNam)
ShortDescription = Cells(Row, Col_ShortDescr)
Default = Cells(Row, Col_Def)
DefaultValue = MyHex2Dec(Default)

' Current Row
' Dev _ Reg _ BitName
Def = Device & "_" & Register & "_" & BitName
TempInteger = MaxLen_Col_Dev + MaxLen_Col_Reg + MaxLen_Col_BitNam + 2 + 4
DefSpace = Def & MyAddSpace(Def, TempInteger)
Pos = Def & "_Pos"
PosSpace = Pos & MyAddSpace(Def, TempInteger)
Mask = Def & "_Msk"
MaskSpace = Mask & MyAddSpace(Def, TempInteger)

'init->Param.CR0.PIN_ENA_STOP1 = ( (init->CR[0]) &= AS6500_CFG0_PIN_ENA_STOP1_Msk ) >> AS6500_CFG0_PIN_ENA_STOP1_Pos;

Print #1, vbTab & "init->Param.CR" & TempIDX & "." & BitName & " = ( (init->CR[" & TempIDX & "]) &= " & Mask & " ) >> " & Pos & ";"

Row = Row + 1

' if new configuration register is printed
If Not (Cells(Row, Col_Reg) = Cells(Row - 1, Col_Reg)) Then
    ' do something after each register
    FirstRow = Row
    TempIDX = TempIDX + 1
End If

Loop

Print #1, "}"

Print #1, "/**"
Print #1, "* @}"
Print #1, "*/"

'"/******************************************************************************/"

Print #1, ""
Print #1, "/**"
Print #1, "  * @brief  Handle initialization of configuration."
Print #1, "  * @param  init pointer to a " & Device & "_InitTypeDef structure that contains"
Print #1, "  *               the configuration information for the specified device."
Print #1, "  * @param  array pointer to declareted configuration register for the specified device."
Print #1, "  * @retval None"
Print #1, "  */"
Print #1, "void " & Device & "_Init_CFG(" & Device & "_InitTypeDef* init, " & Def_CFG_Declaration & "* array)  {"
Print #1, vbTab & "uint8_t idx;"

Print #1, vbTab & "/* Update content of CR for external usage */"
Print #1, vbTab & "for (idx = 0; idx <= __CFG_Array_Size; idx++) {"
Print #1, vbTab & vbTab & "init->CR[idx] = array[idx];"
Print #1, vbTab & "}"
Print #1, ""
Print #1, vbTab & "/* Update Parameter */"
Print #1, vbTab & Device & "_Update_Param(init);"
Print #1, ""
Print #1, "}"

Print #1, "/**"
Print #1, "* @}"
Print #1, "*/"

'"/******************************************************************************/"


'"/******************************************************************************/"


'last lines in ASCII files before closing
Print #1, ""
Print #1, "/**"
Print #1, "* @}"
Print #1, "*/"
Print #1, ""
Print #1, ""
Print #1, "#endif /* INC_" & Device & MyCIncFileExt & " */"


Close #1

MsgBox ("Coding is done!")

Exit Sub

ErrorHandler:
Close #1

    'MsgBox ("Out of Range - All Sheets are scanned")


End Sub

Private Sub UserForm_Click()

End Sub

Private Sub UserForm_Initialize()
Dim x As Integer

With UserForm1
' 0: Manuell;
' 1: Fenstermitte
' 2: Bildschirmmitte
' 3: Windows-Standard
.StartUpPosition = 1 '0 'links oben
.Top = 0
.Left = 0
End With

ComboBox1.Clear

' Definition of first sheet
x = 2

On Error GoTo ErrorHandler

Do While Not IsEmpty(Sheets(x).Name)
    ComboBox1.AddItem Sheets(x).Name
    x = x + 1
Loop

'TextBox1.Value = ComboBox1.Value & "_Config_Register.txt"

Exit Sub

ErrorHandler:
    'MsgBox ("Out of Range - All Sheets are scanned")
End Sub
