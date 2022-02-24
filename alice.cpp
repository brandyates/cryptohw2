
/*
	Alice:
	Has initial symmetric key k1
	for every message mi, i = 1.... n:
		compute ciphertext ci = enc(ki, Mi)
		individual HMAC: Si = HMAC(Ki, Ci)
		aggregate HMAC: Si,1 = H(S1, i-1 || Si)
		update ki+1 = H(ki)
		send <c1, c2...cn>, S1,n to bob via ZeroMQ
		
*/

//get key

//for all messages:

//compute ciphertext

//individual hmac

//aggregate hmac

//update ki+1

//send info to bob

//end for