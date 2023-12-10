# Linux Administration Day 6 Solutions
This readme contains solutions to Day 6 questions related to Linux administration tasks.
## 1. Create a folder called myteam in your home directory and change its permissions to read only for the owner.
![Screenshot from 2023-12-10 17-15-47](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/283a60b7-8c70-4c64-b60a-eb3747d6e4d6)
## 2. Log out and log in by another user 
## 3. Try to access (by cd command) the folder (myteam) 
![Screenshot from 2023-12-10 17-27-49](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/be6ee47b-29e5-4dbe-8227-a78bb2e71a5c)

## 4. Using the command Line
### a) Change the permissions of oldpasswd file to give owner read and write permissions and for group write and execute and execute only for the others (using chmod in 2 different ways) 
#### Using Symbolic Notation:
```bash
chmod u=rw,g=wx,o=x oldpasswd
```
#### Using Numeric Notation:
```bash
# Give owner read and write permissions (4 + 2 = 6)
# Give group write and execute permissions (2 + 1 = 3)
# Give others execute-only permissions (1)
chmod 631 oldpasswd
```
![Screenshot from 2023-12-10 17-33-01](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/397b5b0f-ac28-4747-a3f5-1a5d7ac72d57)

### b) Change your default permissions to be as above.
I can make it only for directories not files because the max. default permission for a file is only `666` so i cant add x but i can make it for directories because it is `777` so it have x permission

![Screenshot from 2023-12-10 20-28-45](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/1d2202b3-0132-4323-98cf-adf5a85d0821)



### c) What is the maximum permission a file can have, by default when it is just created? And what is that for directory.
1- file can have max. default permisiions of `rw-rw-rw (666)` by ocatal.  
2- directories can have max. dafault permissions of `rwx-rwx-rwx (777)` by octal.  

### d) Change your default permissions to be no permission to everyone then create a directory and a file to verify. 
```bash
echo "umask 077" >> ~/.bashrc
```
![Screenshot from 2023-12-10 19-23-52](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/e9d57655-a6a2-4d3e-b667-c9a0ef5d9563)

### e) State who can access a this file if any with proof.
only the user who created it can access this file `momen` and `mohamed` can't access it at all.
![Screenshot from 2023-12-10 19-32-28](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/c3a1f765-7197-4162-8c2a-6a9a22d4e2a9)

## 5. Create a file with permission 444. Try to edit in it and to remove it? Note what happened. 
If you create a file with permission `444`, it means the file is read-only for everyone, including the owner.  
You can't edit this file but I can remove it, It only gives confirmation messeage.
![Screenshot from 2023-12-10 19-35-59](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/b737bf18-a3d4-4494-b29f-baeef805f47b)
![Screenshot from 2023-12-10 19-36-17](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/599d65a1-4cd6-4fc9-b1be-f1e90a131609)
![Screenshot from 2023-12-10 19-37-21](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/8451348d-bcda-485c-adc4-d4f2b4335d7f)

# Creat New Directory
## 1. Set the sticky bit on the newly created directory.
```bash
chmod +t dir1
```
## 2. set the setgui bit on the created directory
```bash
chmod g+s dir1
```
![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/efe87fc5-5046-4bc6-beec-6b15e96b347e)
## 3. Create multiple user accounts.
![Screenshot from 2023-12-10 19-51-19](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/0ceb6e72-9d35-427b-b390-1cf1bd1a1814)

## 4.Allow these users to create files within the directory and directory.
```bash
chmod o=rwxt dir1
```
![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/0e5954e4-1eb8-464a-88c3-16d11975b9c9)
![Screenshot from 2023-12-10 20-02-23](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/ca3e3896-4c49-4baf-94c4-b1b754f76498)

## 5. Attempt to delete or rename each other's files.
## 6. Provide a clear output demonstrating the impact of the sticky bit on file deletion and renaming within the directory.
The `sticky bit` ensures that users can only delete or rename their `own` files within the directory. 
![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/e33198e3-6543-4a65-a7ca-74e64b5c30da)
![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/6518b8cc-55a4-4c5b-8aea-b77d15dc8ffa)

## 7. Provide a clear output for the directory created.
```bash
momen@momen:~$ ls -lh | grep dir1
drwxrwsrwt 3 momen momen 4.0K ديس 10 20:12 dir1
```
## List the permission passwd command has and explain why it has S
It gives the regular user the ability to change his own password without giving them unnecessary privileges for other system operations.

![image](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/a8616639-3d89-4664-b69d-f6c036c9a397)



