.text 

	li $t0, 32
	li $t1, 5

	div $t0, $t1 # $t0/$t1
	
	srl $s2, $t0, 2
	
	mflo $s0 # parte inteira da divisão
	mfhi $s1 # resto da divisão