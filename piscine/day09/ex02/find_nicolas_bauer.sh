cat $1 | grep 'nicolas' | grep 'bauer' | awk '{print $(NF-1)}'
