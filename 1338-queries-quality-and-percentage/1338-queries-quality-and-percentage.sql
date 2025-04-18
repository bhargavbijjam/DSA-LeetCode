# Write your MySQL query statement below
select query_name,ROUND(AVG(rating/position),2) as quality,
ROUND(((count(CASE WHEN rating < 3 THEN 1 END)/count(*))*100),2) as poor_query_percentage 
from queries
group by query_name
order by quality desc
