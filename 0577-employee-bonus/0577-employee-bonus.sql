# Write your MySQL query statement below
SELECT e.name,b.bonus 
FROM Employee e LEFT JOIN Bonus b ON
e.empId=b.empId WHERE
bonus<1000 OR bonus is NULL;
