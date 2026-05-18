__int64 __fastcall sub_C0B10(__m128i *a1, __int64 a2, char **a3)
{
  unsigned int v3; // r13d
  _QWORD *v5; // rax
  int *v6; // rax
  const __m128i *v7; // rax

  v5 = sub_C08F0(a2);
  v6 = (int *)sub_C0A00((__int64)&unk_241E00, (__int64)v5);
  LOBYTE(v3) = v6 != &dword_241E08;
  if ( v6 == &dword_241E08 )
  {
    sub_C08F0(a2);
    sub_299F0(a3);
  }
  else
  {
    v7 = *((const __m128i **)v6 + 7);
    *a1 = _mm_loadu_si128(v7);
    a1[1] = _mm_loadu_si128(v7 + 1);
    a1[2] = _mm_loadu_si128(v7 + 2);
    a1[3] = _mm_loadu_si128(v7 + 3);
    a1[4] = _mm_loadu_si128(v7 + 4);
    a1[5] = _mm_loadu_si128(v7 + 5);
    a1[6] = _mm_loadu_si128(v7 + 6);
    a1[7] = _mm_loadu_si128(v7 + 7);
    a1[8] = _mm_loadu_si128(v7 + 8);
    a1[9].m128i_i64[0] = v7[9].m128i_i64[0];
  }
  return v3;
}
