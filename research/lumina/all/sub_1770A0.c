__int64 __fastcall sub_1770A0(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __m128i *v2; // rbx
  __int64 v3; // rax
  __m128i v5; // xmm0

  if ( a1 == a2 )
    return 0;
  v2 = (__m128i *)a1;
  if ( *a1 == 10 )
  {
    v2 = (__m128i *)sub_176840(a1, 1);
    if ( !v2 )
      return sub_18FA20(a1, 1);
  }
  sub_176520((__int64)v2);
  v3 = *a2;
  v2->m128i_i8[0] = v3;
  switch ( v3 )
  {
    case 2LL:
    case 5LL:
    case 8LL:
    case 9LL:
      v2->m128i_i64[1] = *((_QWORD *)a2 + 1);
      break;
    case 3LL:
    case 10LL:
      *(__m128i *)((char *)v2 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
      break;
    case 6LL:
      v2->m128i_i32[2] = *((_DWORD *)a2 + 2);
      break;
    case 7LL:
      v5 = _mm_loadu_si128(v2 + 1);
      v2->m128i_i64[1] = *((_QWORD *)a2 + 1);
      v2[1].m128i_i64[0] = *((_QWORD *)a2 + 2);
      v2[1].m128i_i64[1] = *((_QWORD *)a2 + 3);
      *((__m128i *)a2 + 1) = v5;
      break;
    default:
      if ( !unk_2439A0 )
        sub_198E10(282);
      BUG();
  }
  *a2 = 2;
  *((_QWORD *)a2 + 1) = 0;
  return 0;
}
