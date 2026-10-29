__int64 __fastcall sub_19A60(__int64 a1)
{
  unsigned int v1; // ebx
  const char *v3; // rcx
  const char *v4; // rdx
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = nullptr;
  v6 = 0;
  sub_BF00((__int64 *)&v5);
  if ( fopenRT() )
  {
    qgetline();
    qfclose();
    v1 = 1;
  }
  else
  {
    __errno_location();
    v3 = (const char *)winerr();
    v4 = s;
    if ( (_QWORD)v6 )
      v4 = v5;
    sub_143D0(a1, (__int64)"%s: %s\n", v4, v3);
    v1 = 0;
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v1;
}

