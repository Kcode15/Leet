# Write your MySQL query statement below
Select Eu.unique_id,E.name from Employees E left outer join EmployeeUNI Eu on E.id = Eu.id;