CC=cc
CFLAGS = -Wall
LIBS = -lnsl

MAGICK_FLAGS = `pkg-config --cflags MagickCore`
MAGICK_LIBS = `pkg-config --libs MagickCore`

all: rpcserver rpcclient magickminify_test



magickminify.o: magickminify.c
	$(CC) -c $^ $(MAGICK_FLAGS)

magickminify_test: 
	$(CC) $(CFLAGS) -o magickminify_test magickminify_test.c magickminify.o $(MAGICK_LIBS)
	
rpcserver:
	$(CC) $(CFLAGS) -o rpcserver msg_prog.c msg_svc.c msg_xdr.c $(LIBS) 
	
rpcclient:
	$(CC) $(CFLAGS) -o rpcclient rpcclient.c msg_clnt.c msg_xdr.c $(LIBS)

clean:
	rm -f rpcserver rpcclient
	rm -f *.o
