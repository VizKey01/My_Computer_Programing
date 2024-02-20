Select 
	  name, sum(t.reward) as totalreward
from friend f
join tasks t on t.friendid = f.id  
group by f.name
Order by totalreward DESC
LIMIT 5
;