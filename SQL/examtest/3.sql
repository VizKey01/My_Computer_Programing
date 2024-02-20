-- Select 
-- 	f.name, f.hp
-- 	, sum(f.attack + attackpower) as totalattack
-- 	, sum(f.defense + w.defense) as totaldefense
-- -- Select *
-- from friend f
-- join weapon w on w.type = f.type
-- group by f.name, f.hp
-- Order by totalattack
-- ;

select friend.name,friend.attack+weapon.attackpower as totalattack,
friend.defense+weapon.defense as totaldefense 
from weapon 
inner join friendequip on weapon.id = friendequip.weaponid
inner join friend on friend.id = friendequip.friendid
order by totalattack desc;