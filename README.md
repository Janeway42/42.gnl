# **42.get_next_line**


Run:
----
- one file at a time
  - **gcc -Wall -Wextra -Werror -D BUFFER_SIZE=n get_next_line.c get_next_line_utils.c**
  - **./a.out file**    *(where file is a text file to be read)*

- a line at a time from consecutive files
  - **gcc -Wall -Wextra -Werror -D BUFFER_SIZE=n get_next_line_bonus.c get_next_line_utils_bonus.c**
  - **./a.out file1 file2 ... fileN**    *(where file1, file 2, ..., fileN is are text files to be read consecutively one line at a time)*

  *(BUFFER_SIZE to be defined by the user when compiling.)*

-------------------------------------------------------------------

[42 The Network](https://www.42network.org/) Assignment:
-----------
Programm a function that returns a line read from a file descriptor with the prototype:
    char *get_next_line(int fd);

- [GNL](https://harm-smits.github.io/42docs/projects/get_next_line)
- [File descriptors](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)

Requirements:
-------------

- Repeated calls to the get_next_line() function should read the text file pointed to by the file descriptor, one line at a time.
- Function returns the line that was read (including the \n character). NULL if nothing was read.
- The header file get_next_line.h must contain at least the prototype of the get_next_line() function.
- Helper functions must be found in get_next_line_utils.c file.

-------------------------------------------------------------------

Code format: 
------------
The code must be written in accordance to the 42 set of norms.  
These include for example a maximum of 25 lines per function, at most 80 columns per line, comments included and a maximum of five functions per file. 

