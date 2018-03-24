AWK COMMANDS
		
1)Write an awk command to delete all the blank lines/spaces from a file
//cat awk.txt
Hello this is a beautiful day 
Such a sunny day 






Sunshine

//awk 'NF' awk.txt
Hello this is a beautiful day 
Such a sunny day 
Sunshine


2)Print only the odd numbers of a file
//awk 'NR%2==1' emp.lst 

Sam         125683     Network Engineer       45000
Jack        122787       M.D                  30000


3)Write an awk command to print the last field without knowing the number of fields of a file
//awk -F "|" '{print $NF}' emp.lst

150000
50000
45000
300000
1500000


4)Write the equivalent awk command for "head -n 5 filename"
//head -n 5 emp.lst

John              110110         Manager               150000
Jacob             12390         Software Developer     50000
Sam               125683        Network Engineer       45000
Jack              122787          M.D                  300000
Tom               125376          C.E.0                1500000


//awk -F "|" 'NR==1,NR==5{print $0}' emp.lst

John              110110         Manager               150000
Jacob             12390         Software Developer     50000
Sam               125683        Network Engineer       45000
Jack              122787          M.D                  300000
Tom               125376          C.E.0                1500000



5)Write the equivalent awk command for "sed -n '5,10p' filename"
//sed -n '5,10p' emp.lst

John              110110         Manager               150000
Employee Name    Employee ID    Designation           Salary
Jacob             12390         Software Developer     50000
Sam               125683        Network Engineer       45000
Jack              122787          M.D                  300000
Tom               125376         C.E.0                 1500000

//awk -F "|" 'NR==5,NR==10{print $0}' emp.lst

John              110110         Manager               150000
Employee Name    Employee ID    Designation           Salary
Jacob             12390         Software Developer     50000
Sam               125683        Network Engineer       45000
Jack              122787          M.D                  300000
Tom               125376         C.E.0                 1500000

6)Write the equivalent awk command for "tail +20 emp"
//tail +3 emp.lst

Sam               125683        Network Engineer       45000
Jack              122787          M.D                  300000
Tom               125376         C.E.0                 1500000


//awk -F "|" 'NR==3,NR==$NF{print $0}' emp.lst

Sam               125683        Network Engineer       45000
Jack              122787          M.D                  300000
Tom 125376 C.E.0 1500000
