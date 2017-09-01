#!/bin/sh
ldapsearch -LLL -x "(uid=z*)" cn | sed '/^\s*$/d' | sed '/^dn.*$/d';
