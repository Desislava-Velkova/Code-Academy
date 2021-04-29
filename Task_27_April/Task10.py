class Student:
    
    def __init__(self,name=0, marks=0):
        self.name = name
        self.marks = marks
        
    def print_info(self):
        print("\nStudent name:", self.name)
        print("Student marks:", self.marks)
        
    def change_info(self, name, marks):
        self.name = name
        self.marks = marks


stud1 = Student('John', 5)
stud1.print_info()

stud2 = Student('Anna', 6)
stud2.print_info()

    #replacing info
stud1.name = 'Daniel'
stud1.marks = 5
stud1.print_info()

stud1.name = 'Maria'
stud1.marks = 25
stud1.print_info()

    #replacing info using method 'change' from the class
stud1.change_info('Karl', 7)
stud1.print_info()

stud2.change_info('Karolin', 6)
stud2.print_info()




