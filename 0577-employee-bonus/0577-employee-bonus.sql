# Write your MySQL query statement below
select a.name,b.bonus from employee as a
LEFT JOIN
Bonus as b
ON (a.empId = b.empId)
where b.bonus<1000 or b.bonus IS NULL
order by bonus