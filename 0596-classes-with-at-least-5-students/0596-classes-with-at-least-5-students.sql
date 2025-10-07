# Write your MySQL query statement below
Select class from Courses
group by class having count(student)>=5;