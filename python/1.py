def testArgLists_1(*args, **kwargs):
	print 'args:', args
    print 'kwargs:', kwargs
            
testArgLists_1('aaa', 'bbb', arg1='ccc', arg2='ddd')

def testArgLists_2(arg0, *args, **kwargs):
    print 'arg0: "%s"' % arg0
    print 'args:', args
    print 'kwargs:', kwargs
            
print '=' * 40
testArgLists_2('a first argument', 'aaa', 'bbb', arg1='ccc', arg2='ddd')
