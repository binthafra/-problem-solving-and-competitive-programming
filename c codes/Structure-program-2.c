#include <stdio.h>
#include <string.h>
struct Books {
char title[50];
char author[50];
char subject[100];
int book_id;
};
void printBook ( struct Books book );
int main( )
{
struct Books Book1;
strcpy( Book1.title, "C Programming");
Book1.book_id = 6495407;
printBook( Book1 );
return 0;
 }
void printBook( struct Books book )
 {
printf( "Book title : %s\n", book.title);
printf( "Book id : %d\n", book.book_id);
}

