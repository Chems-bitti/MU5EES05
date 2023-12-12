# Compte rendu du lab 15

# 1
git clone https://github.com/u-boot/u-boot.git

# 2 
git checkout v2018.05

# 3
git branch

# 4
ls configs | grep am335

# 5
make am335x_boneblack_defconfig

Je suppose que le fichier .config généré contient les variables d'environnement nécessaires pour l'OS custom qu'on va mettre sur la carte

 # 9
 output :
```
Disk /dev/sdb: 14,84 GiB, 15931539456 bytes, 31116288 sectors
Disk model: Storage Device  
Units: sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes
Disklabel type: dos
Disk identifier: 0xa76332f9

Device     Boot   Start      End  Sectors  Size Id Type
/dev/sdb1          8192  1056767  1048576  512M  c W95 FAT32 (LBA)
/dev/sdb2       1056768 31116287 30059520 14,3G 83 Linu
```

# 12
output :
                                 Disk: /dev/sdb
              Size: 14,84 GiB, 15931539456 bytes, 31116288 sectors
                       Label: dos, identifier: 0x4f627b10

    Device        Boot       Start         End    Sectors    Size   Id Type
>>  Free space       *         2048    31116287   31114240   14,8G               

# 13
 sudo mkfs.vfat -F 32 /dev/sdb1 -n boot