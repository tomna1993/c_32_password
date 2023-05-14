# c_32_password

## DESCRIPTION

The user is prompted for a password, which will then be validated using a function `check`. If the password is at least 10 characters long and contains at least one upper case letter, one lower case letter, a number, and a symbol (meaning a printable character that’s not a letter or number, such as ‘!’, ‘$’ and ‘#’), the function should return `true`. If not it should return `false`.

### IMPLEMENTATION DETAILS

The function will iterate through the password that’s supplied to it as an argument. Since you have to find at least one lower case letter, one upper case letter, one number and one symbol, we may want to create a boolean variable for each and set each to `false` before we iterate through the string. If we then find a number, for instance we can set that boolean to `true`. If all booleans are `true` at the end of the function, it means all criteria are met, and we would return `true`.

```bash
./password
Enter your password: hello
Your password needs at least one uppercase letter, lowercase letter, number and symbol!

Enter your password: h3ll(
Your password needs at least one uppercase letter, lowercase letter, number and symbol!

./password
Enter your password: h3LL0!
Your password is valid!
```

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
