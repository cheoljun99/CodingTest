-- 코드를 작성해주세요

SELECT C.ID, C.FISH_NAME, C.LENGTH
FROM (SELECT A.ID,B.FISH_NAME,A.LENGTH
FROM FISH_INFO A
INNER JOIN FISH_NAME_INFO B ON A.FISH_TYPE = B.FISH_TYPE) C
INNER JOIN (SELECT B.FISH_NAME AS MAXNAME,MAX(A.LENGTH) AS MAXLENGTH
FROM FISH_INFO A
INNER JOIN FISH_NAME_INFO B ON A.FISH_TYPE = B.FISH_TYPE
GROUP BY B.FISH_NAME) D ON C.FISH_NAME = D.MAXNAME
WHERE C.FISH_NAME = D.MAXNAME AND C.LENGTH = D.MAXLENGTH