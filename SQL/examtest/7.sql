Select name, hp
From friend
where hp in (
	select distinct hp 
	from friend
	Order by  hp DESC 
	Limit 5
)
Order by hp DESC 

;