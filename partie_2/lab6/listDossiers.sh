#!/bin/bash

orig=$PWD

if [ ! -d "$1" ]; then
  echo "$1 does not exist."
  exit -1
fi
cd $1
echo $PWD
for f in */
do
    if [[ -d $f ]]
    then
        echo $f
    fi
done

