# Write your MySQL query statement below
select d.name as Department,e.name as Employee,Salary from employee e
INNER JOIN department d ON e.departmentId = d.id and (e.departmentId,salary) IN (
select departmentId,max(salary) from employee group by departmentId 
)