# Write your MySQL query statement below
select unique_id,name from Employees E left join EmployeeUNI as EU on E.id=EU.id;