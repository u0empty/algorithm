SELECT COUNT(ID) AS COUNT
FROM ECOLI_DATA
WHERE
    SUBSTRING(LPAD(RIGHT(CONV(GENOTYPE, 10, 2), 3), 3, '0'), 2, 1) = '0'
    AND
    (
        SUBSTRING(LPAD(RIGHT(CONV(GENOTYPE, 10, 2), 3), 3, '0'), 1, 1) = '1'
        OR
        SUBSTRING(LPAD(RIGHT(CONV(GENOTYPE, 10, 2), 3), 3, '0'), 3, 1) = '1'
    )