#  Basic salary of an employee is input through the keyboard. The DA is 25% of the basic salary while the HRA is15% of the basic salary.
#  Provident Fund is deducted at the rate of 10% of the gross salary (BS+DA+HRA).Program to calculate the Net Salary.


Salary=int(input("Enter the basic salary of the employeee :"))
DA=Salary*0.25
HRA=Salary*0.15
gross_salary=Salary+DA+HRA
PF=gross_salary*0.10
net_salary=gross_salary-PF
print("The DA of employee is :",DA)
print("The HRA of employee is :",HRA)
print("The gross salary of employee is :",gross_salary)
print("The provident fund  of employee is :",PF)
print("The net salary of employee is :",net_salary)
