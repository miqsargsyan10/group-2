#!/bin/bash
cd ../output/U1/
echo "a.txt" > a.txt
echo "U1:a.txt"
cat a.txt
cd U2/U3/
echo "a.txt" > a.txt
echo "U3:a.txt"
cat a.txt
echo "b.txt" > b.txt
echo "U3:b.txt"
cat b.txt
