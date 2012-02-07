import re
foo = raw_input()
ifoo=int(foo)
for i in range (ifoo) :
	goo=raw_input()
	igoo=int(goo)
	string = raw_input()
	y=re.search('[a-z]+',string)
	if y == None :
		print string
	else:
		x = re.split('\s[a-z]+\s',string)
		m = re.split('[" "]',string)
#		print m
		if len(x) > 1 :
			print x[1] + " " + str(y.group(0)) + " " + x[0]
		elif re.search('[a-z]',string[0])!=None :
			if(len(m) != 1):
				z=re.split('[a-z]+\s',string,1)
				print  z[1] + " " + str(y.group(0)) 
			else:
				print string
		else :
			f=re.split('[a-z]+',string,1)
		 	g=  str(y.group(0)) + " " + f[0] 
			print g.rstrip()	
	
