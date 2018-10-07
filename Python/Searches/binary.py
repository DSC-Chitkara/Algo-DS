



def binary_search(array, target):
  #the list should be sorted, in increasing order, otherwise it will fail
  #from the 'array' this function find the first 'target' index
  #return the index if it finds the element, otherwise it returns -1
  min_i = 0
  max_i = len(array)
  
  while(abs(max_i-min_i)>0):
    mid = int((max_i+min_i)/2)
    if(array[mid] == target):
      return mid
    elif(array[mid]>target):
      max_i = mid
    else:
      min_i = mid+1
  return -1 



  
#test cases
print( -1==binary_search(list(range(1,10))+list(range(20,30)), 15))
print( 5==binary_search(range(1,10), 6))
print( 8==binary_search(range(1,10), 9))
print( -1==binary_search(range(1,10), 33))
