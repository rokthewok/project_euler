
maximum = 1
start = 1

for n in range(1,1000000):
	value = n
	count = 1
	while value != 1:
		if value % 2 == 0:
			value = value / 2
			count = count + 1
		else:
			value = 3 * value + 1
			count = count + 1

	if count > maximum:
		maximum = count
		start = n
		print( "value {0} had length {1}\n".format( n, count ) )

print( "The starting value with the longest run is {0}, with length {1}".format( start, maximum ) )
