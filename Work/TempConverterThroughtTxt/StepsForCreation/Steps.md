## Variable/Pointer Declaration

- Declare your 2 file pointers (one for the provided temps_F txt file and one for the temps_C txt file that will be made through the program)

- set the tempF file pointer equal to a statement that opens the "temps_F.txt" file and sets it to read mode
- set the tempC file pointer equal to a statement that targets the "temps_C.txt" file (which should automatically be made when the final code is run) and sets it to write mode

- declare the double variables needed for the program 
    - 2 arrays set to 10 empty spaces (one for the F temps | one for the C temps) (10 empty spaces since there are 10 temperatures you're working with)
    - 2 for the sum of all C and F temps
    - 2 for the C and F averages

## For Loop to read, convert, and write each temperature | also to add all the F and C temps to one variable

- Open the for loop with these parameters:
    - a new integer set equal to 0 (I'll be calling it i standing for integer)
    - a conditional that passes if i is <= 9
    - a command that adds 1 to i if the conditional is passed 
    - (each parameter separated by semicolens in the for parameter parenthesis)

#### In the For Loop:

- a line with fscanf command that scans a temperature from file pointed variable temps_F and assigns it to your fahrenheit array in position i (when the loop is running, i is replaced with a proper position between 0 and 9 (including 0 and 9) since there are 10 temps)
- a line with the fahrenheit to celcius conversion being set equal to the celcius temperatures array in position i
- a line with fprintf command to write the new celcius temperature from your array position i into the temps_C file pointed variable
- a line to add the temp in f from array position i to your f tempurature sum variable
- a line to add the temp in c from array position i to your c tempurature sum variable

- thats it inside the for loop, don't forget to close it with the closing brace

## Last part calculating the average of each temperature and printing it onto the terminal

- divide your f temp sum variable by 10 (since there are 10 temperatures total) and set it equal to your f temp average variable
- do the same for your celcius temp sum setting it equal to your celcius temp average variable

- use printf to print the average fahrenheit temp onto the screen
- do the same to print the avg c temp onto the screen

- Thats it! 
    - make sure not to forget the closing brace at the end closing the int main function if it's not already there.
