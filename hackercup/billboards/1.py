s=raw_input()
h,w,c=s.split(None,2)
h=int(h)
w=int(w)
l=len(c)
#print l
if h>w:
	temp=h
	h=w
	w=temp
print h,w
