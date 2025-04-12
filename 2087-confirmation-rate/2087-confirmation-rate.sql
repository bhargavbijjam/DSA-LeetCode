# Write your MySQL query statement below
select s.user_id,
round((count(
    CASE
    WHEN action = "confirmed" THEN 1
    END
)/count(*)),2) as confirmation_rate
 from signups s
LEFT JOIN confirmations c ON s.user_id = c.user_id
group by s.user_id