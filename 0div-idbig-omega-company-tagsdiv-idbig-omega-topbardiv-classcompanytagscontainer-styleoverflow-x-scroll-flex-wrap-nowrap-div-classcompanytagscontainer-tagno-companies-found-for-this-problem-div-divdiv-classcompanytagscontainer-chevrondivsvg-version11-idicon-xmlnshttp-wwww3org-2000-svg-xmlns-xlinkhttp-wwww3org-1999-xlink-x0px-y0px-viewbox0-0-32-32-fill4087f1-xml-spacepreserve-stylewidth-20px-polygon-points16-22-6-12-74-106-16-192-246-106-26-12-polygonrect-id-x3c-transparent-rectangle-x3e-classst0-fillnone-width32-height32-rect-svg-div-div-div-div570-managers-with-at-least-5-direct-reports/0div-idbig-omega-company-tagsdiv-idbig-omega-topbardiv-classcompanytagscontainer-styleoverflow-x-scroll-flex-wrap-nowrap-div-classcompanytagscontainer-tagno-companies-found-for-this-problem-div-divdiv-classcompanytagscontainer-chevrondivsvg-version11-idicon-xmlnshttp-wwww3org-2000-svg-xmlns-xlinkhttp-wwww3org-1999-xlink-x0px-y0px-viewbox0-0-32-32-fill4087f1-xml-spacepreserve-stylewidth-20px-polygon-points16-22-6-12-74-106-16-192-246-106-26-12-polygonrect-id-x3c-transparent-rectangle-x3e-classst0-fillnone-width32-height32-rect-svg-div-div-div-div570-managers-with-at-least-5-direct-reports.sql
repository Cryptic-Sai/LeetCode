# Write your MySQL query statement below
select A.name 
from Employee A 
join Employee B 
on A.id = B.managerId
group by B.managerId
having count(B.managerId)>=5

# Select m.name
# from employee as e
# inner join employee as m
# on e.managerId=m.id