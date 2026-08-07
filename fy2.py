# class Student:
#     def __init__(self,name,marks,age):
#         self.name=name
#         self.mark=marks
#         self.age=age
#         print("adding new srtudent in database")

# s1=Student("manjiri",98,19)
# print(s1.name,s1.mark,s1.age)

       
# s1=Student("khushi",98,19)
# print(s1.name,s1.mark,s1.age)

       
# class Student():
#     college="indira college"
#     def __init__(self,name,age,marks):
#         self.name=name
#         self.age=age
#         self.marks=marks
#         print("adding student data in database:")
        

#     def avg(self):
#         sum=0
#         for val in self.marks:
#             sum+=val
#         print("you'r avg is:",sum/3)

    


# s1=Student("manjiri",19,[87,98,76])
# print(s1.name,s1.age,s1.marks)

# print(s1.college)
# s1.avg()


# class balance:
#     def __init__(self,account_no,balance):

#         self.acc=account_no 
#         self.bal=balance


#     def credit(self,amount):
#         self.bal+=amount
#     print("rs",amount,"was credit")


#     def debit(self,amount):
#         self.bal-=amount
#     print("rs", amount ,"was debit")

            
# acc1=balance(1234,1000)     
# print(acc1.acc)     
# print(acc1.balance)   
# @staticmethod
# student= {}

# for i in range(3):
#     name=input("enetr the name:")
#     marks=input("enetr the marks:")

#     student[name]=marks
# print("student marks")
# for name,marks in student.items():
#     print(name,":",marks)
# list=[]
# for i in range(3):
#     num=int(input("enter the random no"))
#     list.append(num)
#     print(list)
# class employee:
#     def __init__(self,role,department,salary):
#         self.role=role,
#         self.department=department,
#         self.salary=salary 

#     def showdetails(self):
#         print("role=",self.role)   
#         print("department=",self.department)
#         print("salary=",self.salary)

# class engineer(employee):
#     def __init__(self,name,age):
#         self.name=name,
#         self.age=age
#         super().__init__("engineer","IT","'50000")

# engg1=engineer("manjiri",21)      
# engg1.showdetails()  
        
# student=["manjiri","khushi","aditi","janvi",]
# print(student[1:2])
# print(student)
      

# n=int (input("enetr the value of n:"))
# i=1
# while i<=10:
#     print(n*i)
#     i+=1

# num=[1,2,4,5,6,8,3,5]
# idx=0
# while idx<len(num):
#     print(num[idx])
#     idx+=1
# print(num)
# num=[1,2,4,5,6,8,3,5]
# i=0
# x=9
# while i<len(num):
#     if(num[i]==x):
#         print("no is found")
#         i+=1
#     # else:
#     #     ("print no is not found")    
  

# num=int (input("enter the number:"))

# rev =0
# while num>0:
#     digit=num%10
#     rev=rev *10+digit
#     num=num//10

# print('reverse number is:',rev)

# num=int(input("enetr the number:"))
# original=num
# rev=0

# while num>0:
#     digit =num%10
#     rev=rev*10+digit
#     num=num//10
# if original ==rev:
#         print("palimdrome:")
# else:
#         print("not palimdrome")


# num=int(input("enetr the number:"))
# count=0
# while num>0:
#     count+=1
#     num=num//10
# print("total digit:",count)


# arr=[10,20,30,40,50]
# total = 0
# for i in arr:
#     total+=i
#     print("sum=",total)

# n=int (input("enter the num"))
# a=0
# b=1
# for i in range(n):
#     print(a,end=" ")
#     c = a+b
#     a = b
#     b = c 

# arr=[10,20,76,43,98]

# largest = arr[0]
# second = arr[0]

# for i in arr:
#     if i > largest:
#         largest = i

# for i in arr:
#     if i>second and i !=largest:
#         second =i
# print("largestes=",largest)
# print("secoundlargest=",second)


def avg(list1):
    result=0
    for number in (list1):
        result+=number

    return(result/len(list1))

print(avg([1,2,3,4,5]))