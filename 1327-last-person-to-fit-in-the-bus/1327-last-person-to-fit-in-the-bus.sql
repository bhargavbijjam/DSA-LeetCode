# Write your MySQL query statement below
select person_name from (select *,sum(weight) OVER (order by turn) as cummulative_weight from Queue) as temp
where cummulative_weight <= 1000 
order by turn desc limit 1
