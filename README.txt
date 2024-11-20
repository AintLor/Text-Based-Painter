FAQs

1. The canvas is composed of two 2d arrays, the 1st 2d array represents the character in a specific position. The first 2-Dimensional Array looks like this: 

int charData[3][3] =  { {176,219,176}, {176,219,219}, {219,176,176} };

charData contains the integer values of each characters in every position in the canvas.

Question: If the array is of integer type, then how does it get converted into a string like we see on the canvas?

Answer: If we run printf("%c",176); , it will print the ASCII character number 176. To generate the canvas, I used for loops to generate every single character on the canvas, let's say I used the variables a,b for iterations, so printf("%c",charData[a][b]); will repeat 576 times, which is 24x24, and it will use whatever value is in charData[a][b] for the format specifier "%c" in printf.

So if charData[0][0] = 176, then printf("%c",charData[0][0]); is the same as printf("%c",176); , which will print the ASCII character 176.

The second 2d array is for colors, which is also of integer type. We use the same technique for printing the charData array. The only difference is that we use a separate array for the ANSI color names (yung mga names ng colors na nakadefine sa ANSI_colors.h). 

int colorData[3][3] = { {0,21,78}, {81,79,3}, {44,45,56} }; 

In ANSI_colors.h, you will see an array named numtocolor[85], it is a 1-Dimensional Array, containing the ANSI color names.

Question: Why use a separate integer array for colors? Why not just insert the values or names of ANSI colors like RED1, GRAY3, WHITE1...etc directly in the printf()?

Answer: The integer array are basically just the indexes/indices of the array numtocolor[85]. For example, RED1 is the same as numtocolor[0], which is also the same as numtocolor[colorData[0][0]]. So why use a separate array to represent these colors as integers? Because it will be easier to store color data as integers than strings, this makes the data convertible, which is useful in file handling. ANSI color names are actually a character pointer. For example, NORMAL is equivalent to something like "\x1b[30m", which is a string.

IN C language, strings are treated as array of characters, and arrays are also pointers to their first element. So if you have a string "cute", it is the same as {'c', 'u', 't', 'e', '\0'}, where the last character ('\0') is called the null character. It tells the C compiler to terminate or stop reading the string when the null character is reached.

Also, understand that arrays are pointers to their first element, so when you have:

int count[3] = {1,2,3};

int num = count;

when you print the variable num, you'll get 1, which is the first element of array count. 

int colorData[3][3] = { {0,85,21}, {3,9,8}, {82,79,81} }; 

colorData[0][0] = 0, then printf("%s%c%s",numtocolor[colorData[0][0]],219,NORMAL); is the same as printf("%s%c%s",RED1,219,NORMAL); which will print the ASCII Character 219 in color red.

How File Handling Works:

EXPORT
1. Get the values of charData and colorData and combine them into a single, 1 dimensional string array.
2. Using fprintf(), store all the values of the 1d string array into the file.

Note: When you open the save file (.tbp), you will notice that it is just a bunch of numbers, it is because I saved it in that format. It is an alternating 3-digit and 2-digit numbers, the 3 digit numbers are either 219 or 176, and the 2-digit numbers range from 0-84, those are the characters and colors for every specific position in the canvas.

IMPORT
1. Using fgets(), get all the strings in the save file and store it in a temporary array
2. Using strtol(), convert each values in the string array to integers
3. Now that we have the integer values for characters and colors, we can now store them back to charData and colorData arrays.

How the Cursor Works

Actually, the cursor does not actually move, the gotoxy function just places it in a specific position depending on x and y values. The x and y values are modified depending on the keys pressed by the user.

For example, if a user presses W, the y position of the cursor will be incremented. Increment means we'll add 1 to the current value of the variable. Increment can be expressed in three ways: y++, y = y + 1 or the shorthand expression y += 1. That's the same technique I used for the remaining ASD keys.

Question: How does the program stay persistent?

Answer: I used recursion to keep the program showing to the user. Recursion is just a function calling itself, similar to a loop.

