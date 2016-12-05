#!/bin/sh

last_modified_in_epoch=$(stat -f%c bomb.txt)
echo $(expr $last_modified_in_epoch - 1)
