bool __fastcall sub_9880(const __m128i *a1)
{
  __int16 v1; // ax
  __int64 v3; // rax
  char v4; // bp
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  char *v9; // rax
  char *v10; // rax
  char v11; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v12[4]; // [rsp+168h] [rbp-20h] BYREF

  v1 = a1[2].m128i_i16[4];
  v12[0] = __readfsqword(0x28u);
  if ( v1 == 21 )
  {
    v4 = 1;
    *(_WORD *)(a1[23].m128i_i64[1] + 4) = a1[6].m128i_i64[1];
  }
  else
  {
    if ( v1 != 25 && v1 != 20 )
      return 0;
    v3 = a1[54].m128i_i64[0];
    v4 = 0;
    *(__m128i *)(v3 + 120) = _mm_loadu_si128(a1 + 6);
    *(__m128i *)(v3 + 136) = _mm_loadu_si128(a1 + 7);
    *(_DWORD *)(v3 + 152) = a1[8].m128i_i32[0];
  }
  v5 = a1[23].m128i_i64[1];
  v6 = a1[3].m128i_u16[7];
  *(_BYTE *)(v5 + 68) = a1[3].m128i_i8[13];
  *(_DWORD *)(v5 + 64) = v6;
  v7 = a1[9].m128i_i64[1];
  v8 = a1[58].m128i_i64[1];
  if ( v7 != v8 )
  {
    *(_QWORD *)(a1[23].m128i_i64[1] + 24) = v7;
    v8 = a1[58].m128i_i64[1];
  }
  if ( a1[2].m128i_i64[0] + a1[2].m128i_u16[5] != v8 )
  {
    v9 = &v11;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 40;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *((_QWORD *)v9 - 2) = 0;
    }
    while ( v12 != (_QWORD *)v9 );
    decode_insn();
  }
  if ( !v4 )
  {
    v10 = &v11;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 40;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *((_QWORD *)v10 - 2) = 0;
    }
    while ( v12 != (_QWORD *)v10 );
    decode_prev_insn();
  }
  return *(_WORD *)(a1[23].m128i_i64[1] + 4) != 0;
}
