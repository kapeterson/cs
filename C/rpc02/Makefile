CC=cc
CFLAGS = -Wall
LIBS = -lnsl


all: rpcserver rpcclient

rpcserver:
	$(CC) $(CFLAGS) -o rpcserver msg_prog.c msg_svc.c msg_xdr.c $(LIBS)
	
rpcclient:
	$(CC) $(CFLAGS) -o rpcclient rpcclient.c msg_clnt.c msg_xdr.c $(LIBS)

clean:
	rm -f rpcserver rpcclient
	rm -f *.o
