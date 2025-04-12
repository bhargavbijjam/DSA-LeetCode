# Write your MySQL query statement below
select name from employee where id IN (select e2.id from employee e1
LEFT JOIN employee e2 ON e1.managerId = e2.id
group by e2.id
having count(e2.id)>=5)
