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
    OnExecute = mainActionsExecute
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
    object act_keyBackspace: TAction
      Caption = #172
      OnExecute = act_keyBackspaceExecute
    end
    object act_keyClearValue: TAction
      Caption = 'CV'
      OnExecute = act_keyClearValueExecute
    end
    object act_keyClearAll: TAction
      Caption = 'C'
      OnExecute = act_keyClearAllExecute
    end
    object act_keySqrt: TAction
      Caption = #8730
      OnExecute = act_keySqrtExecute
    end
    object act_keySeven: TAction
      Caption = '7'
      OnExecute = act_keySevenExecute
    end
    object act_keyEight: TAction
      Caption = '8'
      OnExecute = act_keyEightExecute
    end
    object act_keyNine: TAction
      Caption = '9'
      OnExecute = act_keyNineExecute
    end
    object act_keyDifference: TAction
      Caption = '/'
    end
    object act_keyPercent: TAction
      Caption = 'act_keyPercent'
    end
    object act_keyFour: TAction
      Caption = '4'
      OnExecute = act_keyFourExecute
    end
    object act_keyFive: TAction
      Caption = '5'
      OnExecute = act_keyFiveExecute
    end
    object act_keySix: TAction
      Caption = '6'
      OnExecute = act_keySixExecute
    end
    object act_keyMultiplication: TAction
      Caption = '*'
    end
    object act_keyOne: TAction
      Caption = '1'
      OnExecute = act_keyOneExecute
    end
    object act_keyTwo: TAction
      Caption = '2'
      OnExecute = act_keyTwoExecute
    end
    object act_keyTree: TAction
      Caption = '3'
      OnExecute = act_keyTreeExecute
    end
    object act_keySubstraction: TAction
      Caption = '-'
    end
    object act_keyEqual: TAction
      Caption = '='
    end
    object act_keyZiro: TAction
      Caption = '0'
    end
    object act_keyDecimalDot: TAction
      Caption = '.'
    end
    object act_keySumm: TAction
      Caption = '+'
    end
  end
end
