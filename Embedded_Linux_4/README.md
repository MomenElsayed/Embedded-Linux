# Embedded_Linux_4 (U-boot Task)

## 1- Here is an image from the partitions created

![Screenshot from 2024-01-08 13-41-41](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/82689567-d609-4845-a02a-b3ad2b12a0eb)
![Screenshot from 2024-01-08 14-08-21](https://github.com/MomenElsayed/Embedded-Linux/assets/148006027/10292655-15bc-4562-9dbd-6ee1d54b5f29)


## 2-Explain the usage of `/dev/loop` in this task.

The `/dev/loop` devices on Linux are utilized for mounting, enabling the mounting of regular files as block devices. This functionality proves valuable in scenarios involving disk images, file system creation within files.

#### Usage

### 1. Creating a Loop Device

To associate a loop device with a file, use the `losetup` command. For example:

```bash
sudo losetup /dev/loop0 sd.img
```

This command links the loop device `/dev/loop0` to the file `example.img`.

### 2. Mounting a Loop Device

Mount the loop device using the `mount` command. For instance:

```bash
sudo mount /dev/loop0 /mnt/loop_mount
```

### 3. Unmounting and Detaching

```bash
sudo umount /mnt/loop_mount
sudo losetup -d /dev/loop0
