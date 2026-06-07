# Write your MySQL query statement below
select a.name as employee from Employee a 
left join 
employee m 
on a.managerId = m.id
where a.salary > m.salary;