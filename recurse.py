def move(n,current,target,empty):
	if(n==1):
		print "from %d to %d" %(current, target)
		return;
	
	move(n-1,current,empty,target)
	move(1,current,target,empty)
	move(n-1,empty,target,current)
	

move(4,1,2,3)