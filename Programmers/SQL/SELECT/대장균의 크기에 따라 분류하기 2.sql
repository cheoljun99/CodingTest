-- 코드를 작성해주세요

SELECT A.ID, CASE
WHEN A.R <= A.MAXID *0.25 THEN 'CRITICAL'
WHEN A.R >A.MAXID * 0.25 AND A.R <=A.MAXID * 0.50 THEN 'HIGH' 
WHEN A.R >A.MAXID * 0.50 AND A.R <=A.MAXID * 0.75 THEN 'MEDIUM'
WHEN A.R >A.MAXID * 0.75 AND A.R <=A.MAXID * 1.00 THEN 'LOW'
END AS COLONY_NAME
FROM(
SELECT ID,
ROW_NUMBER() OVER (ORDER BY SIZE_OF_COLONY DESC) AS R,
MAX(ID) OVER () AS MAXID
FROM ECOLI_DATA
) A
ORDER BY A.ID ASC