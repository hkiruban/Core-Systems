-- Query to find high-value, high-volume trades
-- Target: Price > 150 AND Volume > 10,000

SELECT ticker, price, volume
FROM MarketData
WHERE price > 150 
  AND volume > 10000;
