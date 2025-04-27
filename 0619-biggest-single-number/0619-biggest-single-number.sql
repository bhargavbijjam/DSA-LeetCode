# Write your MySQL query statement below
select max(num) as num from myNumbers
where num IN (select num from mynumbers 
group by num
having count(num)=1)