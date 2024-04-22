# C_again
Relearning C
Youtube C kurs link

https://www.youtube.com/playlist?list=PL5FRnzOULdYfzyeoaKFJmfeHJvwIwqK0a

git add .
git commit -m "test commit"
git push


ls (view directory)

ls -a (show hidden files)



cd (enter directory)

cd .. (go back 1 directory)



cp file.txt folder/newname.txt (copy and rename file to location)

mv file.txt ../ (move file out 1 directory)



man ls (learn more about ls)



mkdir folder (make new folder called "folder")



cat file.txt (read "file.txt" in terminal output)

touch file.txt (create new file)

cat > newfile.txt (also creates new file)

rm file.txt (delete file / folder)



ping tu.berlin (ping towards a server)



apt install vim (download vim, without admin priv)

sudo apt install vim (download vim, with admin priv)



sudo apt install code (apt doesn't have this package)

snap install code (alternatively find in ubuntu software app)

sudo apt install clang (download c language compiler)



clear (clear terminal view)



file.c (c language file)

file.h (header file)



nano programm.c (open nano terminal text editor and create file)

^X ist Ctrl-X



vim programm.c (open vim terminal tet editor and create file)

esc (press escape to enter view mode)

:w (to save file)

:q (to quit file)

:q! (to quit file without saving)



code . (ope code in this opened folder)



install C/C++ Extension Pack



#include<stdio.h> (standard input output library)



clang file.c -o file (compile code to executable, nothing after name)

./file (to run code)





Arbeitsspeicher (Computer memory)

Like a row of small similarily sized memory blocks

Often Addressed: ..., 0x1000, 0x1001, 0x1002, 0x1003, 0x1004, ...

Will save content on a particular memory address, and we can recall memory to get saved content

Recalling memory addresses is unfeasable, hence we will give them names like "h_score"



printf

%d (placeholder for decimal number)

%f (float value with decimal places)



fg "%vim"



If I call an int with no given value, it will return whatever is stored in that address

It can be a number like 0 or an old saved value or it may be system dependent

That is not good

We will therefore have to initialized (int name = 1) to actually get a usable stable value

Now when we call on the address it will give us a value of 1

After defining a variable no need to redefine it again



int (whole number - integer 4, 814, -90) (2,147,483,647 to -2,147,483,648) (min 2 Bytes)

unsigned int (positive whole number 19, 93, 235) (0 to 4,294,967,295) (min 2 Bytes)

long int (Longer integer) (9,223,372,036,854,775,808 to -9,223,372,036,854,775,807) (min 4 Bytes)

float (gleichkommazahl - floating point number with comma) (3.4028235E+38 to -3.4028235E-38) (4 Bytes)

double (high-precision floating-point data or numbers with comma) (1.79769313486231570e+308d to 2.2250738585072014E-308) (8 Bytes)

char (zeichen - characters) (a, !, \n) (1 Bytes)





signed char ≤ short int ≤ int ≤ long int ≤ long long int

(„≤“ bedeutet dabei, dass der rechts stehende Typ alle Werte des links stehenden Typs aufnehmen kann.)



if you use unsigned int = -10, it will return a buss error since it cannot be a negative number





Arrays

Imagine we are shopping and have a receipt, name of item, price of item

Placing a [] behind the name changes it into an array

float all_prices_1[] = {3.40, 6.40, 7.40, 8.42};

We now have 4 items with 4 different prices

when calling the array, the order starts from the number 0, not 1

to call the 1st item on the list, all_prices_1[0]

to call the 2nd item on the list, all_prices_1[1], and so on

An address is called, a name is given to the address, a value is saved on the address

An array order always goes from 0, 1, 2, 3... and onwards

The 1st item in an array is 0 distance from the beginning of the array

The 2nd item in an array is 1 distance from the beginning of the array, and so on

If we call all_prices_1[10], we will be reading from outside our defined values, and will get weird results. It is important to take that into account when writing code, especially with an unknown initial number since the compiler will not pick it up as an error

When using, int i = 7, all_prices_1[i], it is better to define i with unsigned int or size_t, since we should not use negative numbers in arrays





while(index>=0 && index<length){} both statements have to be true



A     B       A && B (if both are true)

False False   False

False True    False

True  False   False

True  True    True



A     B       A || B (if one is true)

False False   False

False True    True

True  False   True

True  True    True



if(i !=0){} (if i is not 0, then enter if statement)

if(!(i==0)){} (if i is 0, then does not enter if statement)

if(0){} (value is 0, does not enter if statement)

if(i=0){} (value is 0, does not enter if statement)



























