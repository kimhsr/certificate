sum = 10
def fun1():
  sum = 20
  print(sum)

def fun2():
  global sum
  sum = 30

print(sum)
fun1()
print(sum)
fun2()
print(sum)