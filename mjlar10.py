def greater(l):
	count=0
	count1=0
	for i in range(0,3):
		if int(l[3])>int(l[i]):
			count=count+1
		if int(l[4])>int(l[i]):
			count1=count1+1
	val=list()
 	val.append(count)
	val.append(count1)
 	return val	 
def ans(l):
#	print l
	s=greater(l)
#	print s
	p=sorted([int(l[0]),int(l[1]),int(l[2])])
#	print p
	if (s[0]==2 and s[1]==2):
		for i in range(int(p[1])+1,53):
			if  l.count(str(i))==0:
				return i
		return 0	
	elif(s[0]==2 and s[1]==3):
		for i in range(int(p[1])+1,53):
			if  l.count(str(i))==0:
				return i
		return 0	
	elif(s[0]==3 and s[1]==2):
		for i in range(int(p[1])+1,53):
			if  l.count(str(i))==0:
				return i
		return 0	
	elif(s[0]==3 and s[1]==3):
		for i in range(1,53):
#			print l.count(i)
			if l.count(str(i))==0:
				return i
		return 0	
	elif(s[0]==3 and s[1]==1):
		for i in range(int(p[2])+1,53):
			if  l.count(str(i))==0:
				return i
		return 0	
	elif(s[0]==1 and s[1]==3):
		for i in range(int(p[2])+1,53):
			if  l.count(str(i))==0:
				return i
		return 0	
	elif(s[0]==3 and s[1]==0):
		for i in range(int(p[2])+1,53):
			if l.count(str(i))==0:
				return i
		return 0	
	elif(s[0]==0 and s[1]==3):
		for i in range(int(p[2])+1,53):
			if l.count(str(i))==0:
				return i
		return 0	
	else:
		return -1
c = raw_input()
l=c.split()
value=ans(l)
if(not (int(l[0]) == 0 and int(l[1])==0 and int(l[2])==0 and int(l[3])==0 and int(l[4])==0)): 
	if (value==0) :
		print "-1"
	else:
		print value

while(not (int(l[0]) == 0 and int(l[1])==0 and int(l[2])==0 and int(l[3])==0 and int(l[4])==0)):
	c=raw_input()
	l=list()
	l=c.split()
	value=ans(l)
	if(not (int(l[0]) == 0 and int(l[1])==0 and int(l[2])==0 and int(l[3])==0 and int(l[4])==0)): 
		if (value==0) :
			print "-1"
		else:
			print value

