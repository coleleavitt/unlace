__int64 __fastcall sub_FD490(__int64 a1, __m128i *a2, double a3)
{
  __int64 v3; // rbp
  int v4; // eax
  unsigned int v5; // edx
  __int8 v6; // al
  int v7; // eax

  v3 = *(_QWORD *)(a1 + 40);
  v4 = sub_F80F0(0, a2->m128i_i8, *(_QWORD *)v3, *(_DWORD *)(v3 + 8), a3);
  v5 = 0;
  if ( !v4 )
  {
    sub_DCA00(v3 + 24, *(_QWORD *)(v3 + 32), a2);
    v6 = sub_C6820((unsigned __int8 *)a2);
    a2->m128i_i8[0] = -89;
    a2->m128i_i8[1] = v6;
    v5 = 1;
    a2[2].m128i_i32[3] = *(_DWORD *)(v3 + 12);
    v7 = *(_DWORD *)(v3 + 16);
    a2->m128i_i32[1] &= 0xFCFBEFFF;
    a2[4].m128i_i64[0] = 0;
    a2[3].m128i_i16[0] = v7;
  }
  return v5;
}
