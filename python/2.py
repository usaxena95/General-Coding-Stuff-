def test(msg,count):
	for idx in range(count):
		print '%s %d' % (msg,idx)

test('Test #', 4)
val= (test, 'A label:', 5)
val[0](val[1],val[2])
