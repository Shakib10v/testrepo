#!/usr/bin/python3.5
var1= 'hello world'
var2="python programming"
print "var1[0]:",var1[0]
print "var2[1:5]",var2[1:5]
print "updated string:",var1[:6]+"shakib"

if 's' in 'shakib':
  print "yes"
else:
  print "no"

print r'let\'s python'
print 'let\'s python'
print "let's python"
print r'\\'
print r"\\"
print "my name is %s and weight is %d kg! and %f is a floating point" %('shakib',60,5.2e2)
str="this is string example ..wow!!"
print str.endswith('string')
print str.endswith('s')
print str.endswith("exam",0,19)


