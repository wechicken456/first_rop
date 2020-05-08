all:
	gcc -no-pie -m32 -fno-stack-protector vuln.c -o vuln -D_FORTIFY_SOURCE=0
clean:
	rm vuln
