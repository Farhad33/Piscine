#!/bin/sh
ldapsearch -Q -LLL -u -t 'cn=*bon*' | grep "cn: " | wc -l
