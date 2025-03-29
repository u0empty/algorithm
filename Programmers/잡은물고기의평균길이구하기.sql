SELECT ROUND(AVG(LENGTH), 2) AVERAGE_LENGTH
FROM (
    SELECT COALESCE(LENGTH, 10) LENGTH
    FROM FISH_INFO
) DATA