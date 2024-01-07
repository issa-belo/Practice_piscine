#!/bin/bash 
#creat a shell script that display ids of the last commits of your last repo
git log -n 5 --pretty=format:"%h"

