# script to run various gcd algo and get running time
# for each algo

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

for i in `seq 1 $y`; 
do
	echo `./$x $RANDOM $RANDOM`
done