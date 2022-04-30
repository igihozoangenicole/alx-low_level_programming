int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
[main df76c8e] main.h to malloc_free
 2 files changed, 11 insertions(+)
 create mode 100644 0x0B-malloc_free/main.h
