__int64 __fastcall sub_147D0(char *a1)
{
  const char *v2; // [rsp+0h] [rbp-28h] BYREF
  __int128 v3; // [rsp+8h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2 = nullptr;
  v3 = 0;
  if ( (unsigned __int8)sub_14500(a1, (__int64)&v2) )
  {
    sub_13260((__int64)&v2, "\r\n", "\n");
    if ( (_QWORD)v3 )
      sub_EBD0((__int64)"%s", v2);
    else
      sub_EBD0((__int64)"%s", s1);
  }
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return 1;
}

