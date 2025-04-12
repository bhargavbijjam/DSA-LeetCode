# Write your MySQL query statement below
select p.product_id,
IFNULL(round(SUM(us.units * p.price)/SUM(us.units),2),0) as average_price
 from prices p 
LEFT JOIN unitssold us on p.product_id = us.product_id
where purchase_date BETWEEN start_date and end_date or purchase_date IS NULL
group by 
p.product_id