unsigned __int64 __fastcall sub_1217B0(const __m128i *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-68h] BYREF
  char v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v10 = 0;
  memset(&v9[1], 0, 32);
  v9[0] = &off_4DD890;
  v11 = a3;
  v12 = 1;
  if ( a2 )
  {
    if ( (unsigned int)sub_11E900((_BYTE *)a2, (__int64)v9) )
      goto LABEL_9;
    v5 = *(_QWORD *)(a2 + 16);
  }
  else
  {
    v5 = a1[3].m128i_i64[1];
  }
  if ( v5 )
  {
    if ( a3 == v5 + 64 )
      return v13 - __readfsqword(0x28u);
    if ( *(_BYTE *)(v5 + 64) == 8 )
    {
      v8 = *(_QWORD *)(v5 + 72);
      if ( *(_QWORD *)(v8 + 56) )
      {
        if ( a3 == *(_QWORD *)(v8 + 48) )
          return v13 - __readfsqword(0x28u);
      }
    }
  }
  v12 = 0;
  if ( (unsigned int)sub_11F5B0(a1, (__int64)v9) )
  {
    if ( !under_debugger )
      sub_383060(0xC470u, a4);
LABEL_22:
    BUG();
  }
  if ( !a2 )
    return v13 - __readfsqword(0x28u);
LABEL_9:
  v6 = a1[3].m128i_i64[0];
  if ( !v6 )
  {
LABEL_18:
    if ( !under_debugger )
      sub_383060(0xCCA3u, a4);
    goto LABEL_22;
  }
  while ( a2 != v6 )
  {
    v6 = *(_QWORD *)(v6 + 8);
    if ( !v6 )
      goto LABEL_18;
  }
  return v13 - __readfsqword(0x28u);
}

