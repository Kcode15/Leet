# Write your MySQL query statement below
Select P.project_id,round(avg(experience_years),2) as average_years from Project p
left join Employee E on P.employee_id = E.employee_id
group by p.project_id;