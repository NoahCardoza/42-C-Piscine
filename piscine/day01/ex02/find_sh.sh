#!/bin/sh
find . -type f -regex '^.*\.sh$' | sed -E 's/^(.*\/)*(.*)\.sh$/\2/';
