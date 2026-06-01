__int64 __fastcall sub_590E0(__m128i *a1)
{
  __m128i v2; // xmm0
  __m128i *v3; // rdi
  __int64 result; // rax

  v2 = _mm_loadl_epi64((const __m128i *)off_94778);
  a1[30].m128i_i64[1] = (__int64)"HIGHA16";
  v3 = a1 + 30;
  v3[1].m128i_i64[0] = 0x200000000LL;
  v3->m128i_i32[0] = 56;
  v3[1].m128i_i32[2] = 64;
  v3[3].m128i_i64[0] = (__int64)sub_58E50;
  v3[2] = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)sub_58E90);
  a1[33].m128i_i16[4] = register_custom_fixup();
  result = (unsigned int)register_custom_refinfo(&unk_94740) | 0x40;
  a1[33].m128i_i32[3] = result;
  a1[31].m128i_i32[2] = result;
  return result;
}

