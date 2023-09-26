#!/bin/bash

if [[ $1 -gt $2 ]]
then
    echo "Le nombre $1 est supérieur au nombre $2"
elif [[ $2 -gt $1 ]]
then
    echo "Le nombre $2 est supérieur au nombre $1"
else
    echo "Le nombre $1 et $2 sont égaux"
fi
