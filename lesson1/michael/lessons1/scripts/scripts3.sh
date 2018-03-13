#!/bin/bash/
cd ../output/U1
rm -f a.txt
cd U2/U3
cp -a a.txt ../U4
cp -a b.txt ../U4
rm -f a.txt
rm -f b.txt
