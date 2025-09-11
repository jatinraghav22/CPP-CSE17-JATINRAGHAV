#  program to find factorial of number


n=int(input("Enter te number to find the factorial :"))
factorial=1
for i in range(1,n+1):
    factorial=factorial*i
print("The factorial is :",factorial)
    
