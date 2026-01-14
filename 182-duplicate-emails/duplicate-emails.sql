# Write your MySQL query statement below
select email from(select email, count(*) as cnt from person group by email) as t where t.cnt>1;