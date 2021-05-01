/* This file carries all functions declaration and structure definations */
struct thread_opts {
	char host[INET_ADDRSTRLEN];
	unsigned int port, thread_id, start, end;
	float timeout;
};

int quieso_error(const char *s, int sock);

void *worker(void *thread_args);

int scanner(const char * host, unsigned int *port, float timeout, unsigned int *start, unsigned int *end);