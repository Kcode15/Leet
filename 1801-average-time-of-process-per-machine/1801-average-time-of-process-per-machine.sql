# Write your MySQL query statement below
Select a1.machine_id, round(avg(a2.timestamp-a1.timestamp),3) as processing_time
from Activity a1
Join Activity a2 
on a1.machine_id=a2.machine_id and a1.process_id = a2.process_id 
and a1.activity_type = 'start' and a2.activity_type = 'end'
group by machine_id;