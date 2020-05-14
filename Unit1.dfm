object Form1: TForm1
  Left = 192
  Top = 125
  Width = 924
  Height = 480
  Caption = 'Tic Tac Toe v2.0'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Field1: TImage
    Left = 56
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field1Click
  end
  object Field2: TImage
    Left = 152
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field2Click
  end
  object Field3: TImage
    Left = 248
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field3Click
  end
  object Field4: TImage
    Left = 56
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field4Click
  end
  object Field5: TImage
    Left = 152
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field5Click
  end
  object Field6: TImage
    Left = 248
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field6Click
  end
  object Field7: TImage
    Left = 56
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field7Click
  end
  object Field8: TImage
    Left = 152
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field8Click
  end
  object Field9: TImage
    Left = 248
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field9Click
  end
  object Turn: TLabel
    Left = 496
    Top = 112
    Width = 76
    Height = 37
    Caption = 'Turn:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Player_turn: TImage
    Left = 576
    Top = 112
    Width = 30
    Height = 30
  end
  object Label1: TLabel
    Left = 504
    Top = 224
    Width = 83
    Height = 37
    Cursor = crHandPoint
    Caption = 'Again'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
end
