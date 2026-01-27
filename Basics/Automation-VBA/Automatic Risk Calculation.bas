Sub RiskAudit()
    ' Variables must be defined. No ambiguity.
    Dim cell As Range
    Dim threshold As Double
    threshold = -0.05 ' 5% loss is the limit
    
    ' Loop through the selected range
    For Each cell In Selection
        If IsNumeric(cell.Value) And cell.Value <> "" Then
            If cell.Value <= threshold Then
                ' High Risk detected: Highlight Red
                cell.Interior.Color = RGB(255, 0, 0)
                cell.Font.Color = RGB(255, 255, 255)
            Else
                ' Safe: Clear formatting
                cell.Interior.ColorIndex = xlNone
                cell.Font.ColorIndex = xlAutomatic
            End If
        End If
    Next cell
    
    MsgBox "Audit Complete. Risks Isolated.", vbInformation, "System Update"
End Sub
