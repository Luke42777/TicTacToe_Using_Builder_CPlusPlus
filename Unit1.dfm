object Form1: TForm1
  Left = 192
  Top = 125
  Width = 541
  Height = 361
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSizeToolWin
  Caption = 'Tic Tac Toe v2.0'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -32
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = Info
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 37
  object Field1: TImage
    Left = 24
    Top = 8
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field1Click
  end
  object Field2: TImage
    Left = 120
    Top = 8
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field2Click
  end
  object Field3: TImage
    Left = 216
    Top = 8
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field3Click
  end
  object Field4: TImage
    Left = 24
    Top = 104
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field4Click
  end
  object Field5: TImage
    Left = 120
    Top = 104
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field5Click
  end
  object Field6: TImage
    Left = 216
    Top = 104
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field6Click
  end
  object Field7: TImage
    Left = 24
    Top = 200
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field7Click
  end
  object Field8: TImage
    Left = 120
    Top = 200
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field8Click
  end
  object Field9: TImage
    Left = 216
    Top = 200
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Field9Click
  end
  object Turn: TLabel
    Left = 352
    Top = 80
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
    Left = 448
    Top = 80
    Width = 30
    Height = 30
  end
  object Button1: TButton
    Left = 336
    Top = 152
    Width = 169
    Height = 65
    Caption = 'Play Again'
    TabOrder = 0
    OnClick = FormCreate
  end
  object Info: TMainMenu
    Left = 464
    Top = 8
    object Info1: TMenuItem
      Caption = 'Info'
      object QRcodetoGitHub1: TMenuItem
        Caption = 'QR code to GitHub'
        OnClick = QRcodetoGitHub1Click
      end
      object VisitprojectGithubpage1: TMenuItem
        Caption = 'Visit project Github page'
        OnClick = VisitprojectGithubpage1Click
      end
    end
  end
end
