#  program to check whether number is Pallindrome number or not


def is_palindrome(number):
    str_num = str(number)
    return str_num == str_num[::-1]

# Take input from the user
number = int(input("Enter a number: "))
if is_palindrome(number):
    print(f"{number} is a palindrome number.")
else:
    print(f"{number} is not a palindrome number.")
