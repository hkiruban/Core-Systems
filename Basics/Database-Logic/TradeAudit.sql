-- Phase I: Basic Selection and Filtering
SELECT 
    TradeID, 
    AssetTicker, 
    EntryPrice, 
    ExitPrice, 
    ((ExitPrice - EntryPrice) / EntryPrice) * 100 AS PercentChange
FROM 
    GlobalTrades
WHERE 
    ((ExitPrice - EntryPrice) / EntryPrice) <= -0.05
ORDER BY 
    PercentChange ASC;
