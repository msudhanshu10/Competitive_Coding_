class Employee:
    raise_amt=1.06#class variable
    no_of_inst=0
    def __init__(self,first,last,pay): #constructor
        self.first=first#instance variable
        self.last=last#instance variable
        self.pay=pay
        self.email=self.first+'.'+self.last+'@gmail.com'
        Employee.no_of_inst+=1


    def fullname(self): #instance method take object as an automatic arguement
        #print(self.first)
        return(self.first+self.last)

    def applyRaise(self):
        print(self.pay*self.raise_amt)

    @classmethod#decorator
    def set_raise_amt(cls,amt):#class method which takes class name as an automatic argument
        cls.raise_amt=amt

    @classmethod#alternative constructor
    def fromString(cls,emp_str):
        first,last,pay=emp_str.split('-')
        return cls(first,last,pay)

    @staticmethod
    def is_workday(day):#static method dont take instance or class name as an automatic arguement.
        if day=='Sunday' or day=='Saturday':
            return 'NO!'
        else:
            return 'YES. Go to work'

class Developer(Employee):#subclass that inherits from the employee class
    raise_amt=1.10#this raise_amt is only for the developer class
    def __init__(self,first,last,pay,prog_lang):
        Employee.__init__(self,first,last,pay)#super().__init__(first,last,pay)#this is the use of inheritance where we actually using functionality of the Employee class without rewriting the code.
        self.prog_lang=prog_lang

class Manager(Employee):
    
    def __init__(self,first,last,pay,employees):
        super().__init__(first,last,pay)
        self.employees=employees

    def add_emp(self,emp):
        if emp not in self.employees:
            self.employees.append(emp)
        
    def remove_emp(self,emp):
        if emp in self.employees:
            self.employees.remove(emp)

    def print_emps(self):
        for emp in self.employees:
            prirnt('---->',emp)





    
    

dev1=Developer('Sudhanshu','Mishra',67000,'Python')#instance creation. First it will look for the init method in the Developer class. When it is not gonna find it, walk up the inheritance.
'''dev2=Developer('Vasu','Mishra',75000)#instance creation
dev3=Developer('Siddthartha','Mishra','100000')'''

mgr1=Manager('Sudhanshu','Mishra',67000,[dev1])
print(mgr1.email)
print(mgr1.employees)



#print(help(Developer))

#isinstance(<instance_name>,<Class_name>)
#issubclass(<subclass_name>,<Class name>)



'''emp1_str='John-Doe-70000'
emp2_str='Steve-Murphy-89000'




print(emp1)#prints memoryu location of these instances. Instances hold address
print(emp2)


Employee.set_raise_amt(1.06)#Always use class name to use your class method. Class name is automatically passed as an arguement.
emp1.set_raise_amt(1.05)#However, you can use the instance of the class as well to do the same.

new_emp_1=Employee.fromString(emp1_str)
new_emp_2=Employee.fromString(emp2_str)

print(new_emp_1.email)
print(new_emp_2.email)


print(Employee.is_workday("Monday"))'''


