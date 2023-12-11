# Compte rendu du lab 13

3. `ls /dev/`
4. `sudo apt install picocom`
5. `ls -l /dev/ttyUSB0`
`sudo adduser $USER dialout`
6. `reboot`
`cat /etc/group | grep dialout`
7. `picocom -b 115200 /dev/ttyUSB0`
9. `ifconfig`
10. fichier dhcpcd.conf pas trouvé, le fichier /etc/network/interfaces marche aussi, ajouter :
```
auto eth0
 iface eth0 inet static
 address 192.168.1.151
 netmask 255.255.255.0
 gateway 192.168.1.1

```
16. `ping 192.168.0.1`
17. `sudo raspi-config`
18. `sudo service ssh status`
19. `sudo apt update`
`sudo apt install openssh-client`
il faut aussi installer `openssh-server`
20. `ssh pi@192.168.0.10`
21. `scp test pi@192.168.0.10:~/`

22-26. done
