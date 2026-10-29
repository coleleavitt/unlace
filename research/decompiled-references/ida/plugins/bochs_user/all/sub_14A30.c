__int64 __fastcall sub_14A30(__int64 a1, __int64 a2)
{
  const char *v2; // rsi
  unsigned int v3; // ebx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  const char *v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( *(_QWORD *)(sub_F290(a1, a2) + 15608) )
  {
    s1 = nullptr;
    v6 = 0;
    if ( (unsigned __int8)sub_14970((__int64)&s1, 7u, (__int64)"Please enter a Bochs debugger command:")
      && (unsigned __int64)v6 > 1 )
    {
      v7 = nullptr;
      v8 = 0;
      if ( (unsigned __int8)sub_14500(s1, (__int64)&v7) )
      {
        sub_13260((__int64)&v7, "\r\n", "\n");
        v2 = ::s1;
        if ( (_QWORD)v8 )
          v2 = v7;
        sub_EBD0((__int64)"%s", v2);
        v3 = 1;
      }
      else
      {
        sub_EB00((__int64)"Could not send command to Bochs internal debugger.");
        v3 = 0;
      }
      if ( v7 )
      {
        *(_QWORD *)&v8 = 0;
        qfree();
      }
    }
    else
    {
      v3 = 1;
    }
    if ( s1 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v3;
}

