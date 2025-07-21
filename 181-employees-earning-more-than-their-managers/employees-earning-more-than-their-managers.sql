# Write your MySQL query statement below
SELECT e.name as employee from Employee as e join Employee e2 on e.managerId=e2.Id and e.salary>e2.salary;
