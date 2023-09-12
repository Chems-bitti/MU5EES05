# Compte rendu de Lab n°2
## Installation et setup de git :
1. 3 pacakges installés :
- git
- gitk
- git-email

réalisé avec la commande :
```
sudo apt install git gitk git-email
```

2. Configuration des username et user email
```
git config --global user.name "Chems-bitti"
git config --global user.email shemseddinenaimi@gmail.com
```

Retaper les commandes :
```
git config --global user.name 
git config --global user.email
```
afin de vérifier que les username et user email ont été bien prises en compte

## Tester le premier git repo

3. Créer un répertoire test et y accéder :
```
mkdir test && cd test
```

4. Créer un fichier nom de famille et écrire "hello M2 syscom" dedans :
```
echo "Hello M2 syscom" >> 'nom de famille'
```

Vérifier que ça a été bien crée :
```
cat 'nom de famille'
```

5. Initier le répertoire git
```
git init
```
6. Vérifier l'état du fichier avec :
```
git status
```
ça nous affiche que le fichier 'nom de famille' n'est pas dans l'index du répertoire

7. Ajout du fichier dans l'index
```
git add 'nom de famille'
```
On vérifié que ça été bien ajouté à l'index en re-éxecutant `git status`

8. Commit du fichier au git repo :
```
git commit -m "First commit"
```

9. Parallèlement, on crée une répertoire vide sur github

10. On connecte notre répertoire local au répertoire remote du github avec :
```
git remote add origin "https://github.com/Chems-bitti/testTempsReel.git"
```
et puis push nos changements et fichiers avec :
```
git push -u orgin master
```
après avoir tapé nos nom d'utilisateur et token d'accés, on vérifie sur github que les changements ont bien été pris en compte

11. On utilise la commande suivante pour se passer de la demande du nom d'utilisateur et mot de passe à chaque push :
```
git config credential.helper store
```

12. On crée un readme.md dans le répertoire GITHUB avec un message dedans

13. On utilise la commande suivante pour importer les changements sur notre machine locale :
```
git pull
```
on vérifie que le fichier readme.md a bien été récupéré avec `ls`

14. on va sur un autre répértoire (/home/chems/Downloads par exemple) et on crée un clone de notre répertoire :
```
git clone https://github.com/Chems-bitti/testTempsReel
```

