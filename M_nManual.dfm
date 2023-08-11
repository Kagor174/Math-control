object FormM_nManual: TFormM_nManual
  Left = 0
  Top = 0
  Caption = #1052#1072#1089#1089#1072' '#1088#1072#1079#1086#1074#1086#1081' '#1087#1088#1086#1073#1099' '#1087#1088#1080' '#1084#1072#1085#1091#1072#1083#1100#1085#1086#1084' '#1086#1090#1073#1086#1088#1077
  ClientHeight = 250
  ClientWidth = 400
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 20
    Top = 19
    Width = 218
    Height = 15
    Caption = #1054#1073#1098#1077#1084#1085#1072#1103' '#1087#1083#1086#1090#1085#1086#1089#1090#1100' '#1084#1072#1090#1077#1088#1080#1072#1083#1072', '#1090'/'#1084'^3'
  end
  object Label2: TLabel
    Left = 20
    Top = 67
    Width = 218
    Height = 30
    Caption = #1053#1086#1084#1080#1085#1072#1083#1100#1085#1099#1081' '#1085#1072#1076#1088#1077#1096#1077#1090#1085#1099#1081' '#1088#1072#1079#1084#1077#1088' '#1095#1072#1089#1090#1080#1094' '#1084#1072#1090#1077#1088#1080#1072#1083#1072', '#1084#1084
    WordWrap = True
  end
  object Label3: TLabel
    Left = 20
    Top = 179
    Width = 223
    Height = 15
    Caption = #1052#1080#1085#1080#1084#1072#1083#1100#1085#1072#1103' '#1084#1072#1089#1089#1072' '#1088#1072#1079#1086#1074#1086#1081' '#1087#1088#1086#1073#1099', '#1082#1075':'
  end
  object p: TEdit
    Left = 256
    Top = 16
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object d: TEdit
    Left = 256
    Top = 74
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object m_n: TEdit
    Left = 56
    Top = 208
    Width = 121
    Height = 23
    ReadOnly = True
    TabOrder = 2
  end
  object Button1: TButton
    Left = 280
    Top = 175
    Width = 75
    Height = 25
    Caption = #1042#1099#1089#1095#1080#1090#1072#1090#1100
    TabOrder = 3
    OnClick = Button1Click
  end
end
