# Write your MySQL query statement belows
select a.employee_id,a.name,count(distinct(b.employee_id)) as reports_count,ROUND(avg(b.age),0) as average_age from employees a
JOIN employees b ON a.employee_id = b.reports_to
group by a.employee_id