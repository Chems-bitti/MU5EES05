# Compte rendu lab 3

5. Après l'ouverture du répertoire MU5EES05 dans VScode et création du fichier markdown, il suffit d'aller sur l'onglet git de VScode, sur laquelle on retrouve les changement pas encore commité au git repo. On commit en cliquant sur le boutton "commit changes", ce qui va ouvrir un fichier text sur lequel on tape le message de commit que l'on souhaite. Après cela, le bouton change vers un bouton "Push" qu'on peut aussi cliquer pour push les changements au repo remote.
6. Le fichier C permettant de lire 2 variables x, y et afficher leur produit est :

```c
#include <stdio.h>

void main() {
    int x,y;

    printf("Enter x :");
    scanf("%d", &x);    
    printf("Enter y :");
    scanf("%d", &y);    

    printf("x*y = %d\n", x*y);

}
```
8. après installation de l'extension pack C/C++, il est possible de compile ce code avec le menu Terminal -> Run Build Task

9. Il est possible de mettre un point d'arret dans le programme en cliquant juste à coté du numéro de la ligne sur laquelle on veut que l'exécution du programme se met en pause afin de débuguer les erreurs. Le débugger (GDB) peut être lancé après compilation du programme dans le menu Run -> Start Debugging

10. Un deuxième programme en python effectuant la même fonction que le programme C est écrit :
```py
x = int(input("Enter x : "))
y = int(input("Enter y : "))
print("x*y = ", x*y)
```
11. De la même manière, Vscode nous propose d'installer l'extension Pack de Python. Après installation, il est possible de lancer le script Python avec le menu Run -> Run without Debugging

12. De la même manière qu'avec le programme C, il est possible de définir des points d'arrêts pour le débugger, on lance le débugger Python de la même manière que pour le débugger C.
 
13. Enfin, on synchronise le répertoire de la même manière que dans la question 5