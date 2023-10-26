#!/bin/bash

my_list=$(ls *.bak ; ls *.vbk ; ls *.back*)
for i in $my_list; 
	do 
		rm "$i" ; 
	done