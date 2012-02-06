import re

infile = open ('num.txt', 'r')
outfile = open('output2.txt', 'w')
column = 1 

for line in infile:
     if not re.match('#', line):     


          line = line.strip()
          sline = line.split()
          outfile.write(sline[column] + '\n')

infile.close()
outfile.close()
