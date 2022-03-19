# You don't need to add/edit anything to the below solution. 
# Click on the SUBMIT button to solve your first problem on CodeChef.

#Note that it's python3 Code. Here, we are using input() instead of raw_input().
#You can check on your local machine the version of python by typing "python --version" in the terminal.

#Read the number of test cases.
T = int(input())
for tc in range(T):
	# Read integers a and b.
	(a, b) = map(int, input().split(' '))
	
	ans = a + b
	print(ans)
