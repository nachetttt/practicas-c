#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
 
int main( int argc, char *argv[] )
{
  struct stat estructura1;
  struct stat estructura2;

  if( ( lstat( argv[1], &estructura1 ) ) < 0 && lstat(argv[2], &estructura2)<0)
  {
    perror( "lstat" );
    exit( -1 );
  }
  printf( "Propiedades del fichero1 <%s>\n", argv[1] );
  printf( "i-nodo: %ld\n", estructura1.st_ino );
  printf( "modo: %#o\n", estructura1.st_mode );
  printf( "vinculos: %ld\n", estructura1.st_nlink );
  printf( "tipo del dispositivo: %ld\n", estructura1.st_rdev );
  printf( "tamaño total en bytes: %ld\n", estructura1.st_size );
  printf( "tamaño de bloque preferido: %ld\n",          estructura1.st_blksize );
  printf( "numero de bloques asignados: %ld\n",           estructura1.st_blocks );

  printf( "Propiedades del fichero2 <%s>\n", argv[2] );
  printf( "i-nodo: %ld\n", estructura2.st_ino );
  printf( "modo: %#o\n", estructura2.st_mode );
  printf( "vinculos: %ld\n", estructura2.st_nlink );
  printf( "tipo del dispositivo: %ld\n", estructura2.st_rdev );
  printf( "tamaño total en bytes: %ld\n", estructura2.st_size );
  printf( "tamaño de bloque preferido: %ld\n",          estructura2.st_blksize );
  printf( "numero de bloques asignados: %ld\n",           estructura2.st_blocks );
 
  return 0;
}
