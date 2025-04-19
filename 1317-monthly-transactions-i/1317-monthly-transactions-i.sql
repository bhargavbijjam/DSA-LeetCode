# Write your MySQL query statement below
select DATE_FORMAT(trans_date,"%Y-%m") as month,
country,count(*) as trans_count,
count(CASE WHEN state="approved" THEN 1 END) as approved_count,
sum(amount) as trans_total_amount,
IFNULL(sum(CASE WHEN state="approved" THEN amount END),0) as approved_total_amount
from transactions 
group by month,country
