__int64 __fastcall sub_EAA90(const char *a1, int a2, __mode_t a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct stat64 v7; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v8; // [rsp+98h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = off_241168(a1, a2 | 0x80000);
      v5 = v4;
      if ( v4 >= 0 )
        break;
      if ( *__errno_location() != 4 )
        return v5;
    }
    if ( v4 > 2 )
      break;
    off_241180(v4);
    sub_E8BB0(0x1Cu, "attempt to open \"%s\" as file descriptor %d", a1, v5);
    if ( off_241168("/dev/null", 0) < 0 )
      return (unsigned int)-1;
  }
  if ( a3 && !(unsigned int)off_2411E0(v4, &v7) && !v7.st_size && (v7.st_mode & 0x1FF) != a3 )
    off_2412B8(v5, a3);
  return v5;
}
