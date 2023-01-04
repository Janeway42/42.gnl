# get_next_line
Read a line at a time from a text file

Run:
----
- one file at a time
  - **gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c**
  - **./a.out file**    *(where file is a text file to be read)*

- a line at a time from consecutive files
  - **gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c**
  - **./a.out file1 file2 ... fileN**    *(where file1, file 2, ..., fileN is are text files to be read consecutively one line at a time)*

Usefull info:
---
- [GNL](https://harm-smits.github.io/42docs/projects/get_next_line)
- [File descriptors](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)
