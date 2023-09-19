# Compte rendu du Lab N° 4

4. En affichant la liste des fichiers avec `ls`, on retrouve qu'il y'a 3 fichiers et 1 répertoire :
    - answering-machine.txt  
    - Microsoft  
    - README.md  
    - sardar/

Aussi, il existe un seul fichier caché nommé `.lightbulb` qu'on retrouve avec la commande `ls .*`.

De plus, la commande `ls -lrt` permet d'afficher :
- `-l` affiche la liste de fichier sous format long, donc affiche les droits d'écriture et de lecture pour l'utlisateur, le groupe et l'administrateur, le propriétaire du fichier, la taille du fichier, la date et heure de sa dernière modification, et son nom
- par défaut, `ls` affiche les fichiers par ordre alphabètique, puis les répertoires par ordre alphabètiqe. `-r` inverse l'ordre d'affichage
- `t` permet d'afficher les fichiers après les avoir triés suivant la date et heure de la dernière modificiation

la commande complète nous donne l'affichage suivant :
```
-rw-rw-r-- 1 chems chems    31 sept. 19 11:01 README.md
-rw-rw-r-- 1 chems chems 34359 sept. 19 11:01 Microsoft
-rw-rw-r-- 1 chems chems 70408 sept. 19 11:01 answering-machine.txt
drwxrwxr-x 2 chems chems  4096 sept. 19 11:01 sardar
-rw-rw-r-- 1 chems chems   795 sept. 19 11:14 cr_lab4.md
```
La taille des fichiers est la 4e colonne de l'affichage, elle est affichée en bytes

5. Le répértoire sardar contint 3 fichiers txt :
```
-rw-rw-r-- 1 chems chems  5950 sept. 19 11:01 sardar2.txt
-rw-rw-r-- 1 chems chems 13836 sept. 19 11:01 sardar1.txt
-rw-rw-r-- 1 chems chems 81994 sept. 19 11:01 sardar3.txt
```
La somme des taille de ces 3 fichiers ne fait pas la taille affiché du répertoire qu'on voit à la question 4. Ceci est dû au fait que tout est un fichier, et `ls` affiche la taille du fichie pointeur vers le répertoire `sardar`. Si on souhaite afficher la taille du répertoire et son contenu, il est nécessaire d'utiliser une autre commande qui affiche le disk usage `du` :
```
112     ./sardar
```
Cette valeur est en KiloBytes.

6. On peut voir la différence entre la valeur affiché entre `ls` et `du` en executant les 2 commandes sur le fichier `Microsoft` :

Avec `ls -lh`, où `-h` (human readable) affiche les tailles communes kilobytes, megabytes...etc. 
```
-rw-rw-r-- 1 chems chems 34K sept. 19 11:01 Microsoft
``` 
Avec `du -lh`, où `-h` (human readable) affiche les tailles communes kilobytes, megabytes...etc. 
```
36K     Microsoft
```
La différence est dû au fait que `ls` affiche la taille du fichier en bytes, alors que `du` affiche l'espace occupé par le fichier sur le disque qui est alloué en blocs