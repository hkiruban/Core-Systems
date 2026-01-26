-- You have a table called Stock_Market. It has the following columns: date, ticker, open_price, close_price, and volume.
-- Write a query to find the date and close_price for 'NVDA' where the volume was greater than 1,000,000.

//Solution:
SELECT date, close_price 
FROM Stock_Market 
WHERE ticker = 'NVDA' 
  AND volume > 1000000;
