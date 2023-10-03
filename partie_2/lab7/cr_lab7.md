# Compte rendu du Lab N° 7

1. La valeur de la variable HOME peut être affichée avec `echo $HOME`, elle affiche `/home/chmis`

2. la commande $PATH contient les chemins vers les différentes commandes qu'on pourrait exécuter, elle peut être affiché avec `echo $PATH`

3. Voir le script `process.sh` :

```
#!/bin/bash
ps aux | less
```

4. utiliser `mv process.sh /opt/`

5. On utilise `export PATH=$PATH:/opt/` afin de rendre nos programmes mis sur `/opt/` executables partout

6. Après avoir fermé et réouvert le terminal, on n'arrive plus à executer notre commande. `process.sh: command not found`

7. On doit modifier le `.bashc`, le script qui se lance à chaque lancement de terminal, et rajouter la commande `export PATH=$PATH:/opt/` 

8. ça marche