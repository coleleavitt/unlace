unsigned __int64 sub_1CFC10()
{
  __m128i v0; // xmm0
  __m128i v2; // [rsp+8h] [rbp-30h] BYREF
  __int64 v3; // [rsp+18h] [rbp-20h]
  unsigned __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  get_stkarg_area_info();
  v0 = _mm_loadu_si128(&v2);
  return _mm_add_epi64(v0, _mm_srli_si128(v0, 8)).m128i_u64[0];
}

