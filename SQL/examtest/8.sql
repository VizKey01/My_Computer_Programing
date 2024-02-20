Select type, count(Distinct name) as typecount
from friend 
Where type like '%i%'
Group by type
;