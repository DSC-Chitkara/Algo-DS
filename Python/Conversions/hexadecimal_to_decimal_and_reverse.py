print "enter hexadecimal number"
hexadecimal_input=raw_input()

convertor="0X"+hexadecimal_input
decimal=int(convertor,0)
print "number converted to decimal",decimal

decimal=str(decimal)
reverse= decimal[::-1]
print "number reversed",int(reverse)

