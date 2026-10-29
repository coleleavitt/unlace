__int64 __fastcall sub_3F45C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // eax
  int v5; // eax
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v7; // [rsp+8h] [rbp-110h]
  _QWORD v8[31]; // [rsp+20h] [rbp-F8h] BYREF

  v8[25] = __readfsqword(0x28u);
  s1 = nullptr;
  v7 = 0;
  v2 = sub_3E63A0(a2, (const char **)&s1);
  if ( v2 )
  {
    if ( !(unsigned __int8)func_does_return() )
    {
LABEL_3:
      LODWORD(v2) = 0;
      goto LABEL_4;
    }
    sub_4004C0(v8, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40));
    v8[23] = a1;
    v8[0] = &off_4D7480;
    v4 = sub_4023E0(v8, v2);
    v8[0] = &off_4D7480;
    LOBYTE(v2) = v4 == 0;
    sub_4005B0(v8);
  }
  else
  {
    LOBYTE(v5) = sub_1CF6E0(s1);
    LODWORD(v2) = v5;
    if ( !(_BYTE)v5 )
      goto LABEL_3;
    if ( !(unsigned __int8)func_does_return() )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
      *(_BYTE *)(a1 + 864) = 1;
    }
  }
LABEL_4:
  if ( s1 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return (unsigned int)v2;
}

