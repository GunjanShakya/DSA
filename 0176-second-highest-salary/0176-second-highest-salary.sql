# Write your MySQL query statement below
Select (Select MAX(salary) from Employee   
where salary NOT IN (Select MAX(salary) from Employee)) AS SecondHighestSalary; 