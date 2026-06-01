__int64 __fastcall sub_E2E0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rcx

  v2 = &off_20100;
  v3 = *(unsigned __int8 *)(a1 + 248);
  while ( ((unsigned __int8)v3 & *(_BYTE *)v2) != *((_BYTE *)v2 + 1) )
  {
    v2 += 5;
    if ( v2 == &qword_20958[3] )
      return 0;
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64 *))v2[1])(
           a1,
           a2,
           v2 + 1,
           v3,
           &qword_20958[3]);
}

