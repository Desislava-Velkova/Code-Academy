"""
	Write a function to check the validity of list of passwords.
	Following are the criteria for checking the password:
		1. At least 2 letters between [a-z]
		2. At least 3 number between [0-9]
		3. At least 1 letter between [A-Z]
		4. Minimum length of transaction password: 8
		5. Maximum length of transaction password: 15
	
	The program should read a list of passwords and will check them according to the above criteria.
	Password that match the criteria are to be printed, each separated by a comma.
"""

import string

import customExceptions
	
	
def Authentication(password):
	lower = 0
	upper = 0
	digit = 0
	length = len(password)
	
	for i in password:
		if i  in string.ascii_lowercase: 
			lower = lower + 1
		
		elif i in string.ascii_uppercase:
			upper = upper + 1
			
		elif i.isdigit():
			digit = digit + 1
	
	try:
		if lower < 2:
			raise customExceptions.LowerCaseEx(lower)
		if upper < 1:
			raise customExceptions.UpperCaseEx(upper)
		if digit < 3:
			raise customExceptions.DigitEx(digit)
		if length < 8 or length > 15:
			raise customExceptions.LengthEx(length)
		
	except customExceptions.LowerCaseEx as ex:
		print("For password \"%s\"" %password)
		print(ex.message())
		
	except customExceptions.UpperCaseEx as ex:
		print("For password \"%s\"" %password)
		print(ex.message())
		
	except customExceptions.DigitEx as ex:
		print("For password \"%s\"" %password)
		print(ex.message())	
		
	except customExceptions.LengthEx as ex:
		print("For password \"%s\"" %password)
		print(ex.message())
		
	else:
		print("password \"\"",password ,"\"\" is correct!\n")
		return True



def CheckPassword(passwords):
	correctPass = []
	
	for element in passwords:
		if Authentication(element):
			correctPass.append(element)
			
	print("\n\nFrom the provide input, the correct passwords are:",correctPass)



passwords = []
inputData = ""

while True:
	inputData = input("Please enter a password\n\t If you wan't to end the input press (n/N)\n")
	passwords.append(inputData)
	
	if inputData == 'n' or inputData == 'N':
		print("\n")
		break
	
CheckPassword(passwords)
	
	
	
	