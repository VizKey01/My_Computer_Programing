Select t.name
	, avg(f.total_stats) as avgstats
	, count(Distinct f.name) as friendnum
from trainer t
join lateral (
	Select trainerid, name, sum(hp + attack + defense) as total_stats
	From friend
	Group by trainerid, name
)f on f.trainerid = t.id

Group by t.name
order by avgstats DESC
;

-- use lateral for subquery --
-- Distinct for distinct repeated values --

Select t.name
	, avg(hp + attack + defense) as avgstats
	, count( t.id) as friendnum
from trainer t
inner join friend f on f.trainerid = t.id
Group by t.name
order by avgstats DESC
;