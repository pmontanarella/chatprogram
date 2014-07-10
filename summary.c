/* The following is from http://www.tenouk.com/Module39.html.

socket()
Create a new socket and return its descriptor.

NAME
       socket() - create an endpoint for communication
SYNOPSIS
       #include <sys/types.h>
       #include <sys/socket.h>
       int socket(int domain, int type, int protocol);

bind()
Associate a socket with a port and address.

NAME
       bind() - bind a name to a socket
SYNOPSIS
       #include <sys/types.h>
       #include <sys/socket.h>
       int bind(int sockfd, struct sockaddr *my_addr, int addrlen);

connect()
Initiate a connection to a remote host.

NAME
       connect() - initiate a connection on a socket.
SYNOPSIS
       #include <sys/types.h>
       #include <sys/socket.h>
       int connect(int sockfd, struct sockaddr *serv_addr, int addrlen);

listen()
Establish queue for connection requests.

NAME
       listen() - listen for connections on a socket
SYNOPSIS
       #include <sys/socket.h>
       int listen(int sockfd, int backlog);

accept()
Accept a connection request.

NAME
       accept() - accept a connection on a socket
SYNOPSIS
       #include <sys/types.h>
       #include <sys/socket.h>
       int accept(int sockfd, struct sockaddr *addr, int *addrlen);
       
write()
Writes to files, devices, sockets etc.

NAME
       write() - write to a file descriptor
SYNOPSIS
       #include <unistd.h>
       ssize_t write(int fd, const void *buf, size_t count);
       
read()
Reads from files, devices, sockets etc.

NAME
       read() - read from a file descriptor
SYNOPSIS
       #include <unistd.h>
       ssize_t read(int fd, void *buf, size_t count);

close()
“One-way” close of a socket descriptor.
       
NAME
       close() - close a file descriptor
SYNOPSIS
       #include <unistd.h>
       int close(int sockfd);
       
send()

NAME
       send() - send data to a socket descriptor
SYNOPSIS
       int send(int sockfd, const void *msg, int len, int flags);

recv()

NAME
       recv() - receive data from a socket descriptor
SYNOPSIS
       int recv(int sockfd, void *buf, int len, unsigned int flags);
       
Looking Up a Computer Name

NAME
       gethostbyname() - get network host entry
SYNOPSIS
       #include <netdb.h>
       extern int h_errno;
       struct hostent
       *gethostbyname(const char *name);
struct hostent {
       char  *h_name;
       char  **h_aliases;
       int   h_addrtype;
       int   h_length;
       char  **h_addr_list;
}

Looking Up a Port Number by Name

NAME
       getservbyname() - get service entry
SYNOPSIS
       #include <netdb.h>
       struct servent *getservbyname(const char *name, const char *proto);
struct servent {
       char  *s_name;
       char  **s_aliases;
       int   s_port;
       char  *s_proto;
}

Looking Up a Protocol by Name

NAME
       getprotobyname() - get protocol entry
SYNOPSIS
       #include <netdb.h>
       struct protoent
       *getprotobyname(const char *name);
struct protoent {
       char  *p_name;
       char  **p_aliases;
       int   p_proto;
}

getpeername()

NAME

       getpeername() - get who is at the other end of a connected stream socket
SYNOPSIS
       #include <sys/socket.h>
       int getpeername(int sockfd, struct sockaddr *addr, int *addrlen);
       
Allocating a Socket

SYNOPSIS
       #include <sys/types.h>
       #include <sys/socket.h>
       int s;
       s = socket(PF_INET, SOCK_STREAM, 0);
       
For more information, go to http://www.tenouk.com/Module39.html. */
