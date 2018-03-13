#!/bin/bash
cd ../output/U1/
echo "a.txt" > a.txt
echo -n "U1:a.txt:[ "
cat a.txt | tr '\n' ' '
echo "]"
cd U2/U3/
echo "a.txt" > a.txt
echo -n "U3:a.txt:[ "
cat a.txt | tr '\n' ' '
echo "]"
echo "b.txt" > b.txt
echo -n "U3:b.txt:[ "
cat b.txt | tr '\n' ' '
echo "]"
