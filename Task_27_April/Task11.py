class Person:
    def __init__(self,name=0, age=0, school=0):
        self.name = name
        self.age = age
        

class Student(Person):
    
    def __init__(self, name=0, age=0, marks=0, school=0):
        Person.__init__(self, name, age)
        self.marks = marks
        self.school = school
        
    def print_info(self):
        print("\nStudent name:", self.name)
        print("Student age:", self.age)
        print("Student marks:", self.marks)
        print("School:", self.school)
        

stud1 = Student('Anna', 28, 15, 'Some Random School')
stud1.print_info()