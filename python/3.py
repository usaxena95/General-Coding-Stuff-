import re
import sys
import glob
name = raw_input('What is name\n')
print 'Hi,%s.' %(name)
my_l = ['a', 'b' , 'c']
for i,name in enumerate(my_l):
	print "iteration %i is %s" % (i,name)
par,bab=(1,1)
while bab < 100:
	print '%d bab' % bab
	par,bab = (bab,par+bab)
def greet(name):
	print 'hello',name
greet('Jack')
for t_str in ['555-1212','ILL']:
	if re.match(r'^\d{3}-\d{4}$',t_str):
		print t_str,'valid'
	else:
		print t_str,'invalid'
prices = {'apple' : 0.40, 'banana' : 0.50}
my_p = {
	'apple':1,
	'banana' : 6}
g_bill = sum(prices[fruit]*my_p[fruit]
			 for fruit in my_p)
print 'I owe groceri $%.2f' % g_bill
try:
	total= sum(int (arg) for arg in sys.argv[1: ])
	print 'sum =', total
except ValueError:
	print 'Please supple int'
py = glob.glob('*.py')
for fn in sorted(py):
	print '   ------',fn
	for line in open(fn):
		print '    ' + line.rstrip()
	print

