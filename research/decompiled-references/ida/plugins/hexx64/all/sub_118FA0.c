__int64 __fastcall sub_118FA0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // r9
  __int64 v6; // rdx
  const __m128i *v7; // rsi
  __int64 v8; // r13
  char v9; // dl
  int v10; // eax
  unsigned int v12; // [rsp+Ch] [rbp-44h]
  _QWORD v13[8]; // [rsp+10h] [rbp-40h] BYREF

  v1 = a1[6];
  v13[3] = __readfsqword(0x28u);
  v2 = a1[4];
  if ( v2 == v1 || (unsigned int)(*(_DWORD *)v2 - 15) > 3 )
    return 0;
  v3 = v1 + 48;
  if ( *(_BYTE *)(v1 + 48) == 4 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( (unsigned int)(*(_DWORD *)v4 - 8) > 1 )
        break;
      v3 = v4 + 32;
    }
    while ( *(_BYTE *)(v4 + 32) == 4 );
  }
  v5 = (_QWORD *)(v2 + 48);
  if ( *(_BYTE *)(v2 + 48) == 4 )
  {
    do
    {
      v6 = v5[1];
      if ( (unsigned int)(*(_DWORD *)v6 - 8) > 1 )
        break;
      v5 = (_QWORD *)(v6 + 32);
    }
    while ( *(_BYTE *)(v6 + 32) == 4 );
  }
  if ( *((_DWORD *)v5 + 1) < *(_DWORD *)(v3 + 4) )
    return 0;
  v7 = (const __m128i *)a1[2];
  v13[1] = 0;
  v8 = *(_QWORD *)(v7[30].m128i_i64[0] + 112);
  v13[0] = 0xFFFFFFFF00000000LL;
  if ( *((_DWORD *)v5 + 1) > *(_DWORD *)(v3 + 4) )
  {
    sub_125180((__int64)v13, (unsigned __int8 *)v5);
    if ( !(unsigned __int8)sub_1273B0((unsigned __int64)v13, v8, *(_QWORD *)(a1[4] + 24LL), *(_DWORD *)(v3 + 4)) )
    {
      v10 = 0;
      goto LABEL_19;
    }
    v7 = (const __m128i *)a1[2];
    v5 = v13;
  }
  v9 = sub_12EA80(v8, v7, a1[5], v3, a1[3], (__int64)v5, 0);
  v10 = 1;
  if ( !v9 )
  {
    sub_11CDA0((__int64)v13);
    return 0;
  }
LABEL_19:
  v12 = v10;
  sub_11CDA0((__int64)v13);
  return v12;
}

