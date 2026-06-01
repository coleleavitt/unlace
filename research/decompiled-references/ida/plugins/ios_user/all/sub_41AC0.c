__int64 __fastcall sub_41AC0(__int64 a1, const char *a2, const char *a3)
{
  const char *v3; // rbx
  char v5[4096]; // [rsp+0h] [rbp-2038h] BYREF
  unsigned __int64 v6; // [rsp+2008h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = a3;
    if ( !(unsigned __int8)qdirname() )
      return 0;
    qmakepath();
    if ( !(unsigned __int8)qfileexist() )
    {
      sub_13170((__int64)"%s: missing include file %s\n", v3, v5);
      return 0;
    }
  }
  else
  {
    qstrncpy();
    if ( !(unsigned __int8)qfileexist() )
      return 0;
    v3 = a2;
  }
  return sub_61D00(a1, v5, sub_41AC0, v3);
}

