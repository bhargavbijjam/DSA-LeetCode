# Write your MySQL query statement below
select a.id from weather as a
Left JOIN
weather as b
ON a.id <> b.id
where (a.temperature > b.temperature) and datediff(a.recordDate,b.recordDate) = 1