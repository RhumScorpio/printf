int	write_printf(char c) {
	static char buffer[512];
	static int	i = 0;

	buffer[i] = c;
	i++;
}
