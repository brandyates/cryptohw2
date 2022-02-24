/*
bob:
recieve data from alice

for every ciphertext ci, i = 1 to n: compute
	individual HMAC si = HMAC (ki, ci)
	aggregate HMAC s1, i = H(s1, i-1 || Si)
	update ki+1 - H(ki)

if final aggregate HMAC matches with the one that the client sent, then for every cihpertext ci, i=1 to n: compute
	recover plaintext Mi = Dec(ki, ci)
	update ki+1 = H(ki)

	write them to a file
else
	error

*/

//get data from alice:

//for every ciphertext

//individual hmac

//aggregate hmac

//udate ki+1

//end for

//if aggregate matches what the client sent:
//for every ciphertext

//recover plaintext

//update ki+1

//write to a file

//end for

//end if

//else
//throw error