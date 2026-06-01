unsigned __int64 sub_4F10()
{
  __m128i *src; // [rsp+0h] [rbp-68h]
  void *v2; // [rsp+28h] [rbp-40h]
  unsigned __int64 v3; // [rsp+58h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  src = (__m128i *)qvector_reserve();
  *src = _mm_load_si128((const __m128i *)&xmmword_6260);
  src[1].m128i_i8[0] = 114;
  src[1].m128i_i8[1] = 0;
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, src, 0x12u);
  if ( src )
    qfree();
  create_std_modmerge_handlers();
  if ( v2 )
    qfree();
  return v3 - __readfsqword(0x28u);
}

