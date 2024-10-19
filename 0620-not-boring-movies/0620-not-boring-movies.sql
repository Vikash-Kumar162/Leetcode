# Write your MySQL query statement below
SELECT id, movie, description, rating FROM Cinema WHERE id % 2 != 0  AND description != 'boring' ORDER BY rating DESC;

-- select id, movie, description, rating from Cinema where id % 2 <> 0 and description <> 'boring' order by rating desc;