# Compte rendu du Lab N° 5

4. Le standard output d'une commande peut être stocké dans un fichier en utilisant `command > file`, donc pour faire cela avec history :
```
history > history.txt
```

5. fait avec :
```
cat sardar/sardar1.txt sardar/sardar2.txt sardar/sa
rdar3.txt > sardar/sardar_power.txt
```
6. Le nombre de lignes, mots, et caractères dans cet ordre peut être affiché avec `wc -lwm sardar/sardar_power.txt` :
```
1980  16783 101778 sardar/sardar_power.txt
```
Donc 1980 lignes, 16783 mots, et 101778 caractères.

7. Possible avec :
```
grep 'singh' -i sardar/sardar_power.txt
```

8. `rm sardar/sardar_power.txt`

9. Voir question 7

9. Possible avec l'opérateur pipe `|` en shell, il prend l'output d'une commande et le donne à une autre comme input. Pour compter le nombre de lignes de l'output de grep il faut faire :

```
grep 'singh' -i sardar/sardar_power.txt | wc -l
```
Ce qui affiche 123 lignes

10. Il suffit de filtrer 2 fois, la première pour 'singh' et la deuxième pour santa avant d'envoyer l'output à `wc` :
```
grep 'singh' -i sardar/sardar_power.txt | grep 'santa' -i | wc -l
```
Ce qui affiche 42 lignes

11. Pour afficher les lignes qui contiennent PAS un certain mot, il faut utiliser `grep -v` :
```
grep 'singh' -i sardar/sardar_power.txt | grep 'santa' -i | grep 'banta' -vi | wc -l
```

12. `ls *.txt`

13. Fait avec la commande `diff`, `diff noyau.v1 noyau.v2` affiche :
```
25,26c25,26
< PATCHLEVEL = 01
< SUBLEVEL = -rc1
---
> PATCHLEVEL = 02
> SUBLEVEL = -rc2
54c54
< export        SHELL CC GCC
---
> export        SHELL
```

14. `tkdiff` ouvre une interface graphique permettant de visualiser les différences entre les 2 fichiers plus clairement

15. On stocke la différence entre les 2 fichiers en utilisant `diff noyau.v1 noyau.v2 > update.patch`. On l'applique avec la commande `patch` :
```
patch noyau.v1 update.patch
```
En reutilisant `diff` pour comparer les 2 fichiers, rien n'est affiché, donc le patch à été bien appliqué.