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