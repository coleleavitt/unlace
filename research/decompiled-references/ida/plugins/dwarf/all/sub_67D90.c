__int64 **__fastcall sub_67D90(__int64 **a1, const __m128i *a2)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __int64 *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rbp
  const __m128i *v9; // rdx

  v2 = (__m128i *)operator new(0x38u);
  v3 = a2[3].m128i_i32[2];
  v4 = _mm_loadu_si128(a2 + 1);
  v5 = (__int64 *)v2;
  v2->m128i_i32[2] = 1;
  v2[1] = v4;
  v6 = a2[2].m128i_i64[0] + 264 * v3;
  v2->m128i_i64[0] = (__int64)&off_C8808;
  v7 = operator new(0x108u);
  sub_84A60(v7);
  v5[4] = v7;
  v5[5] = 0;
  v5[6] = 0;
  if ( (*(_QWORD *)(v6 + 224) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(v6 + 224) == -1 )
  {
    if ( under_debugger )
      goto LABEL_12;
    interr(30478);
  }
  if ( (unsigned __int8)sub_98E20(v6 + 224, v7) )
  {
    v9 = (const __m128i *)v5[4];
    if ( (v9[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v9[14].m128i_i64[0] != -1 )
      goto LABEL_11;
    if ( !under_debugger )
    {
      interr(30478);
LABEL_11:
      *(__m128i *)(v5 + 5) = _mm_loadu_si128(v9 + 14);
      goto LABEL_6;
    }
LABEL_12:
    BUG();
  }
LABEL_6:
  *a1 = v5;
  return a1;
}

