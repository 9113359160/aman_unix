Display the information details of employee whose designation is MANAGER/manager
A)  grep -i "MANAGER" DETAILS.csv
Display whose name starts with the letter c/C
A) cut -d, -f 1 DETAILS.csv| grep -i "c"
Replace Manager with Director in the "Designation" field
A) sed 's/MANAGER/DIRECTOR/g' DETAILS.csv
Allow a search for different formats in a name [for example, Kishan]
A) grep -e "KISHAN" -e "KISHAN" -e "KISHAN" DETAILS.txt

Q2)To replace "Manager" with "Director"
 
//sed  's\Manager\Director\g;' emp.lst

Result:
Employee Name    Employee ID    Designation           Salary
John              110110         Director               150000
Jacob             12390         Software Developer     50000
Sam               125683        Network Engineer       45000
Jack              122787          M.D                  300000
Tom               125376        C.E.0                  1500000
Q3) To search for names that start with "J"

//cat test2.txt
Employee Name    Employee ID    Designation           Salary
John              110110         Director               150000
Jacob             12390         Software Developer     50000
Sam               125683        Network Engineer       45000
Jack              122787          M.D                  300000
Tom               125376        C.E.0                  1500000

//$grep -i ^j emp.lst
John              110110         Director               150000
Jacob             12390         Software Developer      50000
Jack              122787          M.D                   300000
 
Q4)Find a regular expression for the below file:

//cat test
Aggarwal
Agarwal
Agrawal
Aggrawal
aggarwal
agarwal
aggrawal
agrawal
 
//grep [aA][gg]g*[ar][ra]wal test

Result:
Aggarwal
Agarwal
Agrawal
Aggrawal
aggarwal
agarwal
aggrawal
agrawal
