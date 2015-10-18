object mainFrom: TmainFrom
  Left = 0
  Top = 0
  Caption = 'calcularot'
  ClientHeight = 292
  ClientWidth = 284
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GB_Layout0: TGroupBox
    Left = 0
    Top = 0
    Width = 284
    Height = 292
    Margins.Left = 0
    Margins.Top = 0
    Margins.Right = 0
    Margins.Bottom = 0
    Align = alClient
    TabOrder = 0
    object GB_Layout_edits: TGroupBox
      AlignWithMargins = True
      Left = 5
      Top = 15
      Width = 274
      Height = 66
      Margins.Top = 0
      Align = alTop
      TabOrder = 0
      object E_illustrateDoes: TEdit
        Left = 2
        Top = 15
        Width = 270
        Height = 21
        Align = alTop
        BiDiMode = bdRightToLeft
        ParentBiDiMode = False
        TabOrder = 0
        Text = '0'
        StyleElements = [seFont, seClient]
      end
      object E_inputValue: TEdit
        Left = 2
        Top = 36
        Width = 270
        Height = 21
        Align = alTop
        BiDiMode = bdRightToLeft
        ParentBiDiMode = False
        TabOrder = 1
        Text = '0'
        StyleElements = [seFont, seClient]
      end
    end
    object GB_buttonLayout: TGroupBox
      AlignWithMargins = True
      Left = 5
      Top = 84
      Width = 274
      Height = 203
      Margins.Top = 0
      Align = alClient
      TabOrder = 1
    end
  end
  object mainActions: TActionList
    Left = 136
    Top = 152
    object btnGeneration: TAction
    end
    object historySaving: TAction
      Caption = 'historySaving'
    end
  end
  object btnActionsMain: TActionList
    Left = 144
    Top = 200
    object act_keyOne: TAction
      Caption = 'act_keyOne'
    end
    object act_keyTwo: TAction
      Caption = 'act_keyTwo'
    end
    object act_keyTree: TAction
      Caption = 'act_keyTree'
    end
    object act_keyFour: TAction
      Caption = 'act_keyFour'
    end
    object act_keyFive: TAction
      Caption = 'act_keyFive'
    end
    object act_keySix: TAction
      Caption = 'act_keySix'
    end
    object act_keySeven: TAction
      Caption = 'act_keySeven'
    end
    object act_keyEight: TAction
      Caption = 'act_keyEight'
    end
    object act_keyNine: TAction
      Caption = 'act_keyNine'
    end
    object act_keyZiro: TAction
      Caption = 'act_keyZiro'
    end
    object act_keyBAckspace: TAction
      Caption = 'act_keyBAckspace'
    end
    object act_keyClear: TAction
      Caption = 'act_keyClear'
    end
    object act_keyClearAll: TAction
      Caption = 'act_keyClearAll'
    end
    object act_keySqrt: TAction
      Caption = 'act_keySqrt'
    end
    object act_keyDifference: TAction
      Caption = 'act_keyDifference'
    end
    object act_keyMultiplication: TAction
      Caption = 'act_keyMultiplication'
    end
    object act_keySubstraction: TAction
      Caption = 'act_keySubstraction'
    end
    object act_keySumm: TAction
      Caption = 'act_keySumm'
    end
  end
end
