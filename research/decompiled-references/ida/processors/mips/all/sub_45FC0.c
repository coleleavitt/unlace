char __fastcall sub_45FC0(__int64 a1, __m128i *a2, int a3)
{
  _QWORD *v4; // rax
  int lookback; // eax
  char result; // al
  _QWORD v7[2]; // [rsp+0h] [rbp-198h] BYREF
  _BYTE v8[360]; // [rsp+10h] [rbp-188h] BYREF
  _QWORD v9[4]; // [rsp+178h] [rbp-20h] BYREF

  v9[0] = __readfsqword(0x28u);
  v7[0] = 0;
  v4 = &v8[40];
  v7[1] = 0;
  *(_QWORD *)&v8[24] = 0;
  *(_QWORD *)&v8[32] = 0;
  memset(v8, 255, 24);
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( v9 != v4 );
  lookback = get_lookback(0, 0, v9, 0.0);
  result = sub_45B00(a1, (__int64)v7, a2[1].m128i_i64[0], a2, a3, lookback);
  if ( result )
  {
    result = v7[0];
    if ( LOBYTE(v7[0]) )
    {
      if ( a2[1].m128i_i64[0] != *(_QWORD *)&v8[16] )
        qmemcpy(a2, v8, 0x168u);
    }
  }
  return result;
}

