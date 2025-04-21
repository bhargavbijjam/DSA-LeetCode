# Write your MySQL query statement below
select ROUND(count(CASE WHEN order_date = customer_pref_delivery_date THEN 1 END)/count(*),4)*100 as immediate_percentage
from delivery
where (customer_id,order_date) IN (select customer_id,min(order_date) from delivery group by customer_id)

