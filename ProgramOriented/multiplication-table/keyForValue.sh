# script to find keys from 1 to n

x="a.out"
y=$1
if [[ "$#" -eq 0 ]];
	then echo "error! usage ./autoRun.sh [filename] no_of_tests"
		 exit $?
fi

if [[ "$#" -eq 2 ]]; 
	then x=$1
		 y=$2
fi

`rm values.txt`

for i in `seq 1 $y`; 
do
	echo `./$x $i` >> values.txt
done