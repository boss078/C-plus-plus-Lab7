object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 229
  ClientWidth = 585
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object InformationGroup: TGroupBox
    Left = 8
    Top = 120
    Width = 209
    Height = 103
    Caption = 'Information'
    TabOrder = 0
    object InfoView: TListBox
      Left = 10
      Top = 19
      Width = 190
      Height = 73
      ItemHeight = 13
      TabOrder = 0
    end
  end
  object Control: TGroupBox
    Left = 223
    Top = 8
    Width = 211
    Height = 215
    Caption = 'Control'
    TabOrder = 1
    object KeyEdit: TLabeledEdit
      Left = 16
      Top = 32
      Width = 177
      Height = 21
      EditLabel.Width = 18
      EditLabel.Height = 13
      EditLabel.Caption = 'Key'
      TabOrder = 0
    end
    object Find: TButton
      Left = 16
      Top = 72
      Width = 81
      Height = 25
      Caption = 'Find'
      TabOrder = 1
      OnClick = FindClick
    end
    object Delete: TButton
      Left = 103
      Top = 72
      Width = 81
      Height = 25
      Caption = 'Delete'
      TabOrder = 2
      OnClick = DeleteClick
    end
    object KeyHash: TEdit
      Left = 16
      Top = 131
      Width = 81
      Height = 21
      TabOrder = 3
      TextHint = 'Type key here'
    end
    object TestHash: TButton
      Left = 16
      Top = 168
      Width = 81
      Height = 25
      Caption = 'TestHash'
      TabOrder = 4
      OnClick = TestHashClick
    end
    object SolveMyTask: TButton
      Left = 111
      Top = 126
      Width = 82
      Height = 75
      Caption = 'Solve My Task!'
      TabOrder = 5
      OnClick = SolveMyTaskClick
    end
  end
  object AddGroup: TGroupBox
    Left = 440
    Top = 8
    Width = 137
    Height = 215
    Caption = 'Add'
    TabOrder = 2
    object KeyAdd: TLabeledEdit
      Left = 16
      Top = 32
      Width = 105
      Height = 21
      EditLabel.Width = 18
      EditLabel.Height = 13
      EditLabel.Caption = 'Key'
      TabOrder = 0
    end
    object InfoAdd: TLabeledEdit
      Left = 16
      Top = 75
      Width = 105
      Height = 21
      EditLabel.Width = 20
      EditLabel.Height = 13
      EditLabel.Caption = 'Info'
      TabOrder = 1
    end
    object Add: TButton
      Left = 16
      Top = 176
      Width = 105
      Height = 25
      Caption = 'Add'
      TabOrder = 2
      OnClick = AddClick
    end
  end
  object KeysGroup: TGroupBox
    Left = 8
    Top = 8
    Width = 209
    Height = 106
    Caption = 'Keys'
    TabOrder = 3
    object Keys: TListBox
      Left = 10
      Top = 22
      Width = 190
      Height = 75
      ItemHeight = 13
      TabOrder = 0
    end
  end
end
