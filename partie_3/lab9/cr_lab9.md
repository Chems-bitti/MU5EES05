# Compte rendu du lab n°9

## Qst 2
`gcc -c max.c min.c`

## Qst 3
`ar -rc liboutils.a *.o`

## Qst 4
`ar -t liboutils.a`

## Qst 5
ranlib permet d'indexer les fihciers dans l'archive pour que quand les fichiers objets sont déplacés ils ne sont pas perdus
`ranlib liboutils.a`

## Qst 7 
```
sudo mkdir /opt/lib
sudo mkdir /opt/include
```

## Qst 8

```
sudo mv liboutils.a /opt/lib
sudo mv *.h /opt/include
```
## Qst 9
```
gcc main.c -I/opt/include/ -L/opt/lib/ /opt/lib/liboutils.a -o main
```
## Qst 11
on peut utiliser l'option -q pour append un fichier à une bibliothèque déja existante
```
sudo ar -q /opt/lib/liboutils.a var.o
```
On vérifie avec `ar -t` que le fichier a bien été ajouté

## Qst 15
Pour que les fonctions de maths.h marchent bien, il faut rajouter `-lm` dans la commande de compilation

```
gcc main.c -I/opt/include/ -L/opt/lib/ -lm /opt/lib/liboutils.a -o main
```
