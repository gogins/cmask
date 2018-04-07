#!/bin/bash
./cmask $1
csound $1.orc $1.sco -odac -m0 -d
