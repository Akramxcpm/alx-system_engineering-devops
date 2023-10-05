#!/bin/bash

last_file=$(ls -lt | grep "^-" | head -n 1 | awk '{print $9}')
git add .
git commit -m "$last_file"
git push
