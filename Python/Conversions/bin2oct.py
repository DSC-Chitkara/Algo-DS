#author github:jcert


def bin2oct(bin_string):
  try:
    return format(int(bin_string,2),'o')
  except:
    raise Exception("not a binary number")


def oct2bin(oct_string):
  try:
    return format(int(oct_string,8),'b')
  except:
    raise Exception("not a binary number")
  

#tests
print('5252'==bin2oct('101010101010'))
print('7777'==bin2oct('111111111111'))
print('7700'==bin2oct('111111000000'))

print('111'==oct2bin('7'))
print('1000'==oct2bin('10'))
print('111111'==oct2bin('77'))

