string = input("7문자 이상 문자열을 입력하시오 : ")
m = string[0:3] + string[-3:]
n = string[0:3] + string[8:]
print(m)
print(n)