//CLASS NOTES

//01/22 LECTURE
int *xptr = &x; //Pointer to x. &x gives the memory address of x
//All pointers are 8 bytes long
*xptr //Gives the value at that address. Say hey let's point there and see what's there
char *str = "CS107";
char **strptr = &str;
char mystery = **strptr; // = Dereferenced pointing to C
//Pointers allow us to move large amounts of data really fast
//*(str + 1) = str[1] = S
short values[] = {1, 2, 242, 24, 2, 4};;

int nelems = sizeof(values) / sizeof(values[0]); //.This code creatively identifies the number of elements in an array
int *arrptr = values; //This actually returns shit, like wtf



//01/19 LECTURE
//Chars are normally signed value
//C doesn't support unicode
//For char/strings they're stored in memory
//Comparing string pointers is just comparing the pointer, and not comparing the actual string
//MIDTERM QUESTION::
//You'll be given a list of functions and you need to know how they work
int main (int argc, char **argv) {
    char a[] = "hello"; //Creates an array of chars, equal to a string
    char *b = "goodbye"; //Creates a pointer to a string of chars
    return 0;
}
//strlen
int strcmp (const char *s, const char *t); //Compares the two byte by byte. If they're the same, it returns 0
int strncmp (const char *s, const char *t, size_t n); //Compares for only n items
char *strchr (const char *s, int ch); //Input is an int not a char yo!
char *strstr (const )
//For practice rewrite all the string functions and descrie wtf is up ya feel
//He's going to give strncpy on the midterm and make it a trick question



//01/12 LECTURE AND READINGS
//There's a difference between signed and unsigned integers
int tx, ty;
unsigned ux, uy; //This means that it's only possitive and allows us to access a greater number of ints

//01/08 LECTURE AND READINGS
size_t name = 94224 //size_t is a thing in c. It is an unsigned integer type. It is designed the hold to the size of an object. For example, the size of an array.
//Camelcase is generally not preferred in c. Not sure why, but in this weird world you just press things together or you add a _ in between the letters.
int printf(const char *format, ...); //Function declearation of printf
//Kind of weird because print is declared as returning an int?
printf("int: %d, char: %c, string: %s\n", x, y, z);
//In order to print variables to the console use the %item operators
int main (int argc, char *argv[]);
//These two statements are perfectly identical
int main (int argc, char **argv);

int argc //is a parameter which holds the number of parameters. So hey, we know there's at least one! '
char *argv[] //is a string that holds each of the additional inputs. So if we do argv[2] that gives us our third input!

struct tag {
    type a;
    type b;
    ...
};

struct tag varname; //How to declare structs in c
//Look I'm going to level with you. Still don't really the deal with these. Or frankly wtf typedef is. So I'm gonna go figure that one out

typedef struct tag {
    int a;
    int b;
    long c;
} tag;

//Ok what's up fellow there are a couple of other command which are going to be important to learn
malloc //request an array of bytes from the oS
free //Rethurn bytes previously requested back to the OS
calloc //request memory but set everything to 0 first so it's not old mems
realloc //take array and resize that shit!

void *malloc (size_t size);
void *calloc (size_t nmemb, size_t size);
void free (void *ptr);
void *realloc (void *ptr, size_t size);

//Ok bro listen the fuck up. If you're ever not in the groove and you're like wow what does this groove mean. Just hit it with:
$ cdecl explain const char **x
$ cdecl explain char *const *y
//And the myth machine will be like yo I got you bro. I fuckin got you.



