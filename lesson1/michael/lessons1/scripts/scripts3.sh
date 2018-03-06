#!/bin/bash/
cd ../output/U1
rm a.txt
cd U2/U3
cp -a a.txt ../U4
cp -a b.txt ../U4
rm a.txt
rm b.txt
