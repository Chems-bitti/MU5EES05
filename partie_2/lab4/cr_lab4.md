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
La différence est dû au fait que `ls` affiche la taille du fichier en bytes, alors que `du` affiche l'espace occupé par le fichier sur le disque qui, elle, est allouée en blocs de 1KB = 1024 bytes. La valeur affichée par `du` est toujours légérement supérieure à celle affichée par `ls`.

7. la commande `stat Microsoft` nous affiche le résultat suivant :
```
  File: Microsoft
  Size: 35108           Blocks: 72         IO Block: 512    regular file
Device: 3fh/63d Inode: 2251799813770757  Links: 1
Access: (0777/-rwxrwxrwx)  Uid: ( 1000/   chmis)   Gid: ( 1000/   chmis)
Access: 2023-09-19 11:44:41.136182800 +0200
Modify: 2023-09-19 11:43:08.218090600 +0200
Change: 2023-09-19 11:43:08.218090600 +0200
 Birth: -
```
On peut voir sur cet affichage la taille du fichier, le nombre de blocks alloués pour le fichier et son type.Il affiche aussi la machine, le nombre du fichier Inode associé, et les liens pointants vers le fichier. De plus, il affiche les autorisations lié au fichier, son propriétaire, et les dates et heures du dernier accés et modification du fichier.

8. Il existe un seul fichier caché nommé `.lightbulb`

9. C'est fait en utilisant la commande `ls -ltr`
```
-rwxrwxrwx 1 chmis chmis    33 Sep 19 11:43 README.md
-rwxrwxrwx 1 chmis chmis 35108 Sep 19 11:43 Microsoft
-rwxrwxrwx 1 chmis chmis 72073 Sep 19 11:43 answering-machine.txt
drwxrwxrwx 1 chmis chmis   512 Sep 19 11:43 sardar
-rwxrwxrwx 1 chmis chmis  3210 Sep 19 14:07 cr_lab4.md
```

10. Le tri par taille se fait par `ls -lS` (par défaut, plus grand vers plus petit), on peut afficher les plus petits en premier et les plus gros en dernier avec la commande `ls -lSr`
```
-rwxrwxrwx 1 chmis chmis    33 Sep 19 11:43 README.md
drwxrwxrwx 1 chmis chmis   512 Sep 19 11:43 sardar
-rwxrwxrwx 1 chmis chmis  3982 Sep 23 15:13 cr_lab4.md
-rwxrwxrwx 1 chmis chmis 35108 Sep 19 11:43 Microsoft
-rwxrwxrwx 1 chmis chmis 72073 Sep 19 11:43 answering-machine.txt
```

11. On peut afficher le contenu d'un fichier avec la commande `cat`, donc `cat answering-machine.txt` affiche son contenu.

12. C'est possible avec la commande  `less`.

14. Fait, or je préfère `vim` à `nano`.

20. Possible avec la commande `tail`, donc `tail -n 20 sardar/sardar3.txt`

21. Possible de chercher des pattern dans des fichiers avec `grep`, la commande `grep 'trust' Microsoft` affiche :
```
University: "It's not that we don't trust the research, it's just that
anti-trust laws.
```

22. Fait avec la commande `grep 'money' * sardar/*` :
```
Microsoft:    2.$$ key--When this key is pressed, money is transferred
answering-machine.txt:  If you need any money, or if you just want to check out my
answering-machine.txt:  the money.  If you are my parents, please send money.  If you      
answering-machine.txt:  money.  If you are my friends, you owe me money.  If you are a     
answering-machine.txt:  female, don't worry, I have plenty of money.
answering-machine.txt:  the money.  I'll get back to you as soon as it's safe for you to   
grep: sardar: Is a directory
sardar/sardar1.txt:LoveMom. P.S. I was going to send you some money but the envelope was   
sardar/sardar3.txt:Santa Singh needed some money desperately.
sardar/sardar3.txt:Sikh will never accept the money. So he drops a 100 rupee note, from    
sardar/sardar3.txt:day for money. Now the priest is really annoyed with Santa. The Priest  
sardar/sardar3.txt:decides that he is not going to give any more money to
sardar/sardar3.txt:money.
sardar/sardar3.txt:eyes and does not find any money. He slowly raises his head and now     
sardar/sardar3.txt:p.s. i was going to send you some money, but the
```

23. En cherchant avec l'option `-i`, on ignore le case du mot cherché :
```
Microsoft:    2.$$ key--When this key is pressed, money is transferred
Microsoft:the Macintosh.  Gates was seduced by the Dark Side of Money."
Microsoft:- Luke: "Money?"
Microsoft:- Ben: "Yes, Money is what gives a programmer his resources. It's an
answering-machine.txt:  If you need any money, or if you just want to check out my
answering-machine.txt:  the money.  If you are my parents, please send money.  If you      
answering-machine.txt:  money.  If you are my friends, you owe me money.  If you are a     
answering-machine.txt:  female, don't worry, I have plenty of money.
answering-machine.txt:  the money.  I'll get back to you as soon as it's safe for you to   
cr_lab4.md:22. Fait avec la commande `grep 'money' * sardar/*` :
cr_lab4.md:Microsoft:    2.$$ key--When this key is pressed, money is transferred
cr_lab4.md:answering-machine.txt:  If you need any money, or if you just want to check out my
cr_lab4.md:answering-machine.txt:  the money.  If you are my parents, please send money.  If you
cr_lab4.md:answering-machine.txt:  money.  If you are my friends, you owe me money.  If you are a
cr_lab4.md:answering-machine.txt:  female, don't worry, I have plenty of money.
cr_lab4.md:answering-machine.txt:  the money.  I'll get back to you as soon as it's safe for you to
cr_lab4.md:sardar/sardar1.txt:LoveMom. P.S. I was going to send you some money but the envelope was
cr_lab4.md:sardar/sardar3.txt:Santa Singh needed some money desperately.
cr_lab4.md:sardar/sardar3.txt:Sikh will never accept the money. So he drops a 100 rupee note, from
cr_lab4.md:sardar/sardar3.txt:day for money. Now the priest is really annoyed with Santa. The Priest
cr_lab4.md:sardar/sardar3.txt:decides that he is not going to give any more money to       
cr_lab4.md:sardar/sardar3.txt:money.
cr_lab4.md:sardar/sardar3.txt:eyes and does not find any money. He slowly raises his head and now
cr_lab4.md:sardar/sardar3.txt:p.s. i was going to send you some money, but the
grep: sardar: Is a directory
sardar/sardar1.txt:LoveMom. P.S. I was going to send you some money but the envelope was   
sardar/sardar3.txt:* Money Needed
sardar/sardar3.txt:Santa Singh needed some money desperately.
sardar/sardar3.txt:Sikh will never accept the money. So he drops a 100 rupee note, from    
sardar/sardar3.txt:day for money. Now the priest is really annoyed with Santa. The Priest  
sardar/sardar3.txt:decides that he is not going to give any more money to
sardar/sardar3.txt:money.
sardar/sardar3.txt:eyes and does not find any money. He slowly raises his head and now     
sardar/sardar3.txt:p.s. i was going to send you some money, but the
```

24. Fait avec `mv .lightbulb lightbulb`

25. `cd sardar`

26. fait avec `mv sardar3.txt ../../../partie_1/lab3/`

28. fait avec `rm Microsoft`

29. fait avec `ln -s path/vers/fichier path/vers/symlink`, donc `ln -s sardar/* .` fait l'affaire.

30. les liens sont faciles à identifier, ils sont en affichés en bleu.

31. Le lien symbolique est affiché en rouge après suppresion du fichier original

32. `chmod =r sardar/sardar1.txt` fait l'affaire, en essayant d'ecrire sur le fichier, un message d'erreur nous informant qu'il est en lecture seule s'affiche

33. les droits du fichier actuellement :
```
-r-xr-xr-x 1 chmis chmis 14119 Sep 19 11:43 sardar/sardar1.txt
```
On peut rajouter les droits d'écriture avec `chmod +w sardar/sardar1.txt` :
```
rwxrwxrwx 1 chmis chmis 14119 Sep 19 11:43 sardar/sardar1.txt
```

34. Possible avec `tar -cf lab.tar.bz2 lab4/`

35. Fait avec `tar -tf lab4.tar.bz2`

36. `git add` n'aime pas les liens symbolique, il faut l'enlever avant de commit et push