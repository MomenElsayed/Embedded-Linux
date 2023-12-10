# Linux Administration Day 5 Solutions

This readme contains solutions to Day 5 questions related to Linux administration tasks.

## 1. Create a Supplementary (Secondary) Group

Create a supplementary group named `pgroup` with a group ID of 30000.

```
sudo groupadd -g 30000 pgroup
```
![Screenshot from 2023-12-10 15-44-37](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/b15fcdb8-b197-4647-83cd-e71a97a1be58)

## 2. Lock any user created account so he can't log in

Lock any user-created account to prevent login.
```
sudo passwd -l yourName
```
![Screenshot from 2023-12-10 15-58-40](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/9adb61f2-b46d-4242-8c05-2b1cf47c48f1)

## 3. Delete user account

### Remove User Only
```
sudo deluser yourName
```
### Remove User and Primary Group
```
sudo userdel yourName
```
### Remove User, Primary Group, and Home Directory
```
sudo userdel -r yourName
```
![Screenshot from 2023-12-10 16-08-00](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/9a388a44-927d-4f4f-9458-84c2aa032ef4)

## 4. Delete Group Account

### give message that the removal sucessfully done
```
sudo delgroup groupName
```
```
sudo groupdel groupName
```

![Screenshot from 2023-12-10 16-19-45](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/7eadeeb3-313d-4eed-b874-e3b3c83d47d6)

## 5. Difference Between adduser and useradd

### Using useradd
```
sudo useradd userName
```
#### -Doesn't require entering any information during user creation.
#### -Manual configuration required for password and related information.
#### -Default shell: `sh`

### Using adduser
```
sudo adduser userName
```
#### -Allows entering comprehensive user information during creation.
#### -Default shell: `bash`

![Screenshot from 2023-12-10 16-24-35](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/5de3925d-a4d9-4a6a-a2c7-cb8285b61077)
