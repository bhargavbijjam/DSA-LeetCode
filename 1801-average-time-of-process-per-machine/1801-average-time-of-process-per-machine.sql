# Write your MySQL query statement below
select a.machine_id,ROUND(AVG(b.timestamp - a.timestamp),3) as processing_time from activity as a 
INNER JOIN 
activity as b
where (a.activity_type="start" and b.activity_type="end") and (a.machine_id = b.machine_id) and (a.process_id = b.process_id)
group by machine_id