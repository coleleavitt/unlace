__int64 __fastcall sub_4C8E0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  const char *v4; // rsi
  const char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v1 = sub_4C820((__int64)&qword_9AD70, 7u, (__int64)"Please enter a debug monitor command:");
  if ( (_BYTE)v1 )
  {
    v2 = v1;
    if ( (unsigned __int64)xmmword_9AD78 > 1 )
    {
      v3 = *(_QWORD *)(a1 + 864);
      v6 = nullptr;
      v7 = 0;
      v2 = sub_66330(v3, &v6, qword_9AD70);
      if ( (_BYTE)v2 )
      {
        sub_48430((__int64)&v6, "\r\n", "\n");
        v4 = src;
        if ( (_QWORD)v7 )
          v4 = v6;
        sub_140F0((__int64)"gdb>%s", v4);
      }
      else
      {
        sub_14020((__int64)"Error sending the command to debug monitor.");
      }
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
    }
  }
  else
  {
    return 1;
  }
  return v2;
}

