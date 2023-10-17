# Compte Rendu Lab n°10

## Qst 2
```
gcc -c -FPIC max.c min.c var.c
```
## Qst 3
gcc --shared -o libLab10.so max.o min.o var.o

## Qst 4

```
sudo mv libLab10.so /opt/lib
```

## Qst 5
```
gcc main.c -L/opt/lib -lLab10 -lm -o main
```

## Qst 6
le main ne trouve pas libLab10.so, avec `ldd`, on a le résultat suivant :
linux-vdso.so.1 (0x00007ffcc8fef000)
libLab10.so => not found
libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x00007f4a0b21b000)
libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f4a0b029000)
/lib64/ld-linux-x86-64.so.2 (0x00007f4a0b382000)

Il manque une pointage vers le chemin de la bibliothèque à l'execution, possible avec un set de la variable d'environnement `LD_LIBRARY_PATH`, ou avec `-rpath=/opt/lib` lors de la compilation avec gcc

## Qst 7
La variable est vide

## Qst 8
```
export LD_LIBRARY_PATH=/opt/lib
```

## Qst 9
Maintenant le programme marche comme il faut

## Qst 10
Avec ldd :
        linux-vdso.so.1 (0x00007ffcc8fef000)
        libLab10.so => /opt/lib/libLab10.so (0x00007f4a0b376000)
        libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x00007f4a0b21b000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f4a0b029000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f4a0b382000)

## Qst 11-12
libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6

## Qst 13
```
sudo mv /opt/lib/libLab10.so /usr/lib
sudo chmod 444 /usr/lib/libLab10.so
```

## Qst 17
```
 gcc main.c -lLab10 -lm -o main
```

