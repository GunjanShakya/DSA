# Write your MySQL query statement below
SELECT name as Customers
from customers
where not exists (select id
from Orders
where customerId=customers.id)