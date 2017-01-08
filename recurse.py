def move(n,current,target,empty):
	if(n==1):
		print "move disk %d from %d to %d" %(n,current,target)
		return;
	
	move(n-1,current,empty,target)
	print "move disk %d from %d to %d" %(n,current,target)
	move(n-1,empty,target,current)
	

move(3,1,2,3)