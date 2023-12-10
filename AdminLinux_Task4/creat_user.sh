#!/bin/bash

username="yourName"
groupname="FamilyName"

# Check if the user already exists
if grep -q "$username" /etc/passwd; then
    echo "User '$username' already exists."
else
    # Create the user
    sudo useradd "$username"
    echo "User '$username' created successfully."
fi

# Check if the group already exists
if grep -q "$groupname" /etc/group; then
    echo "Group '$groupname' already exists."
else
    # Create the group
    sudo groupadd "$groupname"
    echo "Group '$groupname' created successfully."
fi

# Add the user to the group
sudo usermod -aG "$groupname" "$username"
echo "User '$username' added to the group '$groupname'."

# Display user information
echo -e "\nUser Information:"
id "$username"

# Display group information
echo -e "\nGroup Information:"
getent group "$groupname"

