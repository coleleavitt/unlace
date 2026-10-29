__int64 __fastcall sub_CBA10(__int64 a1, char *a2, int a3, _BOOL4 *a4)
{
  _BOOL4 v5; // ebx
  struct stat64 v7; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v8; // [rsp+98h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a3 )
  {
    *a4 = off_241198(a2, 6) == 0;
  }
  else
  {
    v5 = 0;
    if ( !(unsigned int)off_2411C8(a2, &v7) )
    {
      v5 = 1;
      if ( (v7.st_mode & 0xF000) == 0x8000 )
        v5 = v7.st_size > 0;
    }
    *a4 = v5;
  }
  return 0;
}
