__int64 __fastcall sub_10BB80(int a1, const char *a2)
{
  __int64 *v2; // r15
  char *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // r14d
  int v9; // ebp
  const char *v10; // r13
  __int64 v11; // r8
  __int64 v13; // [rsp+18h] [rbp-E0h] BYREF
  struct stat64 stat_buf; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v15; // [rsp+B8h] [rbp-40h]

  v2 = &qword_241120;
  *a2 = 0;
  v4 = filename;
  v15 = __readfsqword(0x28u);
  while ( 1 )
  {
    if ( v4 )
    {
      if ( !(unsigned int)off_2411C8(v4, &stat_buf) && (stat_buf.st_mode & 0xF000) == 0x4000 )
      {
        v5 = 3;
        v6 = (__int64)v4;
        v7 = off_241198(v4, 3);
        if ( !v7 )
          break;
      }
    }
    if ( algn_241150 == (_BYTE *)v2 )
      return 6410;
    v4 = (char *)*v2++;
  }
  v9 = 12;
  v10 = &a2[a1 - 2];
  while ( 1 )
  {
    if ( !(unsigned int)sub_FEBD0(v6, v5) )
      sub_FF240(8, (const char *)&v13);
    v11 = v13;
    *v10 = 0;
    sub_E89C0(a1, (__int64)a2, "%s/etilqs_%llx%c", v4, v11, 0);
    if ( *v10 )
      break;
    if ( !--v9 )
      break;
    v5 = 0;
    v6 = (__int64)a2;
    if ( off_241198(a2, 0) )
      return v7;
  }
  return 1;
}
