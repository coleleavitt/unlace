__int64 __fastcall sub_3E6030(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  char **v3; // r12
  unsigned int v4; // ebx
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v7; // [rsp+8h] [rbp-110h]
  _QWORD v8[31]; // [rsp+20h] [rbp-F8h] BYREF

  v8[25] = __readfsqword(0x28u);
  *a2 = 0;
  s1 = nullptr;
  v7 = 0;
  v3 = sub_3E24B0(a3, (const char **)&s1);
  if ( v3 )
  {
    if ( !(unsigned __int8)func_does_return() )
    {
LABEL_3:
      v4 = 0;
      goto LABEL_4;
    }
    sub_3EA720(v8, a1[1], a1[5]);
    v8[23] = a1;
    v8[0] = &off_4B89D8;
    *a2 = sub_3E3C60((__int64)v8, (__int64)v3);
    v8[0] = &off_4B63D8;
    sub_3EA810(v8);
  }
  else
  {
    if ( !sub_1CC1A0(s1) )
      goto LABEL_3;
    if ( !(unsigned __int8)func_does_return() )
    {
      *a2 = 1;
      *(_DWORD *)(a1[2] + 24LL) |= 0x2000u;
    }
  }
  v4 = 1;
LABEL_4:
  if ( s1 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v4;
}

