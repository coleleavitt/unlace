__int64 __fastcall sub_D5600(int fd, __off64_t offset, void *buf, int a4, int *a5)
{
  size_t v7; // rbp
  int v8; // r12d
  int v9; // eax

  v7 = a4 & 0x1FFFF;
  while ( lseek64(fd, offset, 0) >= 0 )
  {
    v8 = off_241270(fd, buf, v7);
    if ( v8 >= 0 )
      return (unsigned int)v8;
    v9 = *__errno_location();
    if ( v9 != 4 )
      goto LABEL_6;
  }
  v9 = *__errno_location();
  v8 = -1;
LABEL_6:
  *a5 = v9;
  return (unsigned int)v8;
}
