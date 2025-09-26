# Write your MySQL query statement below
Select name,bonus from Employee E left outer join Bonus b on E.empId=b.empId where bonus<1000 or bonus is NULL;