#!/bin/sh

phonebook=$1

grep -i -e 'N[[:blank:]]bomber' -e '^N.*r$' -e 'Nhicholhas' -e 'Bomber.*Nicolas$' $phonebook | grep -E '[0-9]*-[0-9]*' | grep -o '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]*'
