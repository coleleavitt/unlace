__int64 __fastcall sub_C77F0(int fd, __off64_t length)
{
  int v2; // ebx

  do
    v2 = off_2411F8(fd, length);
  while ( v2 < 0 && *__errno_location() == 4 );
  return (unsigned int)v2;
}
