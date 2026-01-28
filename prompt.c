// user input
static int input[2048];

int main(int argc, char** argv)
{
    puts("lispc version 0.01");
    puts("Enter Ctrl-C to exit\n");

    while (1)
    {
	fputs("lispc> ", stdout);
	fgets(input, 2048, stdin);

	puts("Your message %d", input);
    }
}
