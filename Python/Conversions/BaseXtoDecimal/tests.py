from BaseXtoDecimal import convert


#Test For Base 2

if(convert('111000',2) == 56):
    print("Passed For Base 2")
else:
    print("Failed For Base 2")


#Test For Base 8
    
if(convert('56477',8) == 23871):
    print("Passed For Base 8")
else:
    print("Failed For Base 8")


#Test For Base 10
    
if(convert('124536',10) == 124536):
    print("Passed For Base 10")
else:
    print("Failed For Base 10")


#Test For Base 16
    
if(convert('5D3F',16) == 23871):
    print("Passed For Base 16")
else:
    print("Failes For Base 16")
