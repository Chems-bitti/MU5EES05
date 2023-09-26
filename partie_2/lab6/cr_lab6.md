# Compte rendu du Lab N° 6

1. voir le script shell. Les droits d'execution sont ajouté avec `chmod +x master.sh`. On execute le fichier en tapant `./master.sh`

3. Fait :
```
#!/bin/bash

cd <path/absolu/lab4>
echo $PWD
for f in */
do
    if [[ -d $f ]]
    then
        echo $f
    fi
done
```
4. il suffit de remplace `<path/absolu/lab4>` par `$1`

5. possible en posant le code suivant avant le `cd` :
```
if [ ! -d "$1" ]; then
  echo "$1 does not exist."
  exit -1
fi
```
6. fait avec :
```
#!/bin/bash
var=""
for i in {700..710}
do
    #echo https://xkcd.com/$i
    var=$(curl https://xkcd.com/$i/ | grep 'hotlinking' | grep -Eo '["\047].*["\047]')
    echo $var
    temp=`echo $var | sed 's/.\(.*\)/\1/' | sed 's/\(.*\)./\1/'`
    echo $temp
    curl -O $temp
done
for i in */
do
    eog $i
done
```