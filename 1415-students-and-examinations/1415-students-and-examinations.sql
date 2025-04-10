# Write your MySQL query statement below
select 
s.student_id,s.student_name,su.subject_name,count(e.subject_name) as attended_exams
from (students s
CROSS JOIN subjects su)
LEFT JOIN examinations e ON s.student_id = e.student_id and su.subject_name = e.subject_name
group by s.student_id,su.subject_name
order by s.student_id,su.subject_name