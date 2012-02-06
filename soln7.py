def PE48(limit, m):
    sum = 0
    while limit:
        sum += pow(limit, limit, 10**m)
        limit -= 1
    return sum % 10**m
 
print "Answer to PE48 = ",PE48(11, 10)
