#  program to display the multiplication table for a given integer.


n=int(input("enter the digit for table:"))
print("The table of ",n,"is :")
for i in range(1,11):
    print(n," * ",i,"=",n*i)
