#!/bin/sh
ldapsearch -LLL -x "sn=*bon*" sn | grep sn | wc -l | tr -d ' ';
