LAST_EX=1
if [ "$#" -eq 1 ] && [ $1 == '-n' ];
then
	echo ===========================
	echo === Skipping Norminette ===
	echo ===========================
else
	echo ===========================
	echo ======= Norminette ========
	echo ===========================
	if [ -e ex00/match.c ];
	then
		norminette -R CheckForbiddenSourceHeader ex00/match.c
	fi
	if [ -e ex01/nmatch.c ];
	then
		norminette -R CheckForbiddenSourceHeader ex01/nmatch.c
	fi
fi

for num in $(seq -f "%02g" 0 $LAST_EX)
	do
		if [ -e ex$num/main.c ]
		then
			gcc -Wall -Wextra -Werror -o ex$num/main ex$num/main.c
		fi
	done

for num in $(seq -f "%02g" 0 $LAST_EX)
	do
		echo ===========================
		echo ====== Testing Ex $num ======
		echo ===========================
		./ex$num/main
		echo
	done