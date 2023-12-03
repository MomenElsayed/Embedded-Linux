<h2>1-List the user commands and redirect the output to /tmp/commands.list</h2>

![Screenshot from 2023-12-03 14-45-17](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/f786c14e-b52c-4614-a029-35bc41328b9a)
![Screenshot from 2023-12-03 14-46-08](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/9de22ec4-2ba8-4bd4-95b7-828477a392b6)

<h2>2-Edit in your profile to display date at login and change your prompt permanently</h2>

![Screenshot from 2023-12-03 15-13-30](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/634a525e-c54e-4023-b10e-8db41b90cd39)
![Screenshot from 2023-12-03 15-14-45](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/f0e00c60-a3d1-4aef-8fd7-dd943814f04f)

<h2>3-What is the command to count the word in a file or number of file in directory?</h2>
<h3> `wc` file-name </h3>
<h3>Displays the number of lines, words, and characters in a file.</h3>

![Screenshot from 2023-12-03 15-29-50](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/d84b02ac-9aa6-4c8a-a324-6e5f0562419f)

<h2>4-What happens if you execute:
a. cat filename1 | cat filename2
b. ls | rm
c. ls /etc/passwd | wc –l </h2>
<h3>a. It shows the contents of the second file "filename2"</h3>

![Screenshot from 2023-12-03 15-38-39](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/4fce2957-b40e-4409-aa17-6b9d1c4ff4e6)

<h3>b. It will list all files in the directory then remove them all</h3>
<h3>c. It doesn't work correctly but after a modification it can show the number of lines in passwd "no. of users"</h3>

![Screenshot from 2023-12-03 15-46-03](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/4e48765e-89b7-4adc-9e62-a4bd18f50d6d)

<h2>5-Write a command to search for all files on the system that, its name is “.profile”.</h2>

![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/7335ef73-0918-4866-aa05-d588b4c52a09)

<h2>6-List the inode numbers of /, /etc, /etc/hosts</h2>

![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/b6ea4134-a4c4-4684-b6aa-4457f68ada0a)

<h2>7-Create a symbolic link of /etc/passwd in /boot</h2>

![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/0d8a3451-baf6-4f50-ba7d-1997507e243a)

<h2>8-Create a hard link of /etc/passwd in /boot. Could you? Why?</h2>
<h3>It worked fine it is only requiered to delte the file with same name from the previous question</h3>

![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/903ac671-884c-404c-94d8-6c6db8372a2a)

<h2>9-Echo \ it will jump to the next line, and will print >
Notice the prompt ”>” what is that? and how can you change it from “>” to “:”.</h2>
<h3>the > is the secondary prompt, and it's indicating that the command is not yet complete.
        
PS1 (Prompt String 1):
This variable defines the primary prompt, which is displayed before each command is entered.
Common escape sequences include \u (username), \h (hostname), \w (current working directory), and more.

PS2 (Prompt String 2):
This variable defines the secondary prompt, which is displayed when a command is continued on a new line (e.g., after typing a backslash \ at the end of a line).</h3>

![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/276de55a-ce66-44a3-af25-1a51d76e92d3)
![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/06c3a08d-99de-4241-b4ab-e0ecd586257a)




