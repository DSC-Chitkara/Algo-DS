print "enter hexadecimal number"
hexadecimal_input=raw_input()

convertor="0X"+hexadecimal_input
decimal=int(convertor,0)
print "number converted to decimal",decimal

decimal=str(decimal)
reverse= decimal[::-1]
print "number reversed",int(reverse)

"""
Test cases:
1 hexadecimal=BC35F2 decimal=12334578
2 hexadecimal=16BE  decimal=5822
"""
