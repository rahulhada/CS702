#PROCEDURE TO RUN THE FILE

<pre>
$ cd CS702
$ cd ProgramOriented
$ gcc  gcd.c first.c  -o test
$ ./test
Enter Two numbers to calculate GCD:
A = 212121
B = 3232323

(1) Recursive Algorithm or (2) Euclidean Algorithm 3) Brute-force Algorithm?
Option = 1
GCD VALUE : 9	Recursive CPU Time:0.000008

(1) Recursive Algorithm or (2) Euclidean Algorithm 3) Brute-force Algorithm?
Option = 2
GCD VALUE : 9	Eucledean CPU Time:0.000009

(1) Recursive Algorithm or (2) Euclidean Algorithm 3) Brute-force Algorithm?
Option = 3
GCD VALUE : 9	BruteForece CPU Time:0.035015

(1) Recursive Algorithm or (2) Euclidean Algorithm 3) Brute-force Algorithm?
Option = -1
Invalid input! Using brute force algorithm! 
</pre>

#To run the script
<pre>
    chmod 777 autoRun.sh
    ./autoRun.sh 10
  
autoRun takes two arguments, <br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;first -> file name (optional) and <br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;second -> no of runs to perform

to use custom filename to run

    gcc first.c gcd.c -o output.out
    ./autoRun.sh output.out 5
</pre>