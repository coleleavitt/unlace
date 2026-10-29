__int64 __fastcall sub_3C9680(__int64 a1, __int64 a2)
{
  __int64 module_data; // rax
  const char *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm2
  __m128i si128; // xmm3
  __m128i v13; // xmm0
  void *v14; // rdi
  __int64 v16; // rax
  __m128i *src; // [rsp+0h] [rbp-78h]
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  void *v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  unsigned __int64 v22; // [rsp+40h] [rbp-38h]
  int v23; // [rsp+48h] [rbp-30h]
  unsigned __int64 v24; // [rsp+58h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  switch_dbctx();
  module_data = get_module_data();
  if ( module_data )
  {
    sub_142F30(module_data, a2);
    switch_dbctx();
    v4 = "remote";
    v5 = get_module_data();
    if ( v5 )
    {
      sub_142F30(v5, (__int64)"remote");
      src = (__m128i *)qvector_reserve();
      *src = _mm_load_si128((const __m128i *)&xmmword_411EF0);
      v18 = a2;
      strcpy(src[1].m128i_i8, "er");
      v19 = (void *)qalloc_or_throw();
      v21 = 19;
      memcpy(v19, src, 0x13u);
      v20 = 19;
      v23 = 3;
      v22 = 0xFFFFFFFEFFFFFFFFLL;
      if ( src )
        qfree();
      sub_33B020(&v18, src);
      v6 = operator new(0xE0u);
      sub_3C9580(v6, &v18);
      v7 = 0;
      *(_QWORD *)v6 = &off_4D5EC8;
      *(_QWORD *)(v6 + 176) = v6 + 160;
      *(_QWORD *)(v6 + 184) = v6 + 160;
      v8 = *(_QWORD *)(v6 + 8);
      *(_DWORD *)(v6 + 160) = 0;
      *(_QWORD *)(v6 + 168) = 0;
      *(_QWORD *)(v6 + 192) = 0;
      *(_QWORD *)(v6 + 200) = 0;
      *(_DWORD *)(v6 + 208) = 0;
      *(_WORD *)(v6 + 212) = 0;
      *(_BYTE *)(v6 + 214) = 0;
      *(_WORD *)(v6 + 215) = 0;
      *(_BYTE *)(v6 + 217) = 0;
      *(_QWORD *)(v6 + 72) = 0;
      if ( *(int *)(v8 + 28) > 0 )
      {
        do
        {
          v9 = operator new(0x30u);
          v10 = *(_QWORD *)(v6 + 8);
          v11 = _mm_cvtsi32_si128(v7);
          si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
          v13 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 4LL * (int)v7 + 16));
          *(_QWORD *)(v6 + 8 * v7++ + 56) = v9;
          *(_QWORD *)v9 = off_4D5E10;
          *(__m128i *)(v9 + 16) = si128;
          *(__m128i *)(v9 + 32) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)(unsigned __int64)v6);
          *(_QWORD *)(v9 + 8) = _mm_unpacklo_epi32(v13, v11).m128i_u64[0];
        }
        while ( *(_DWORD *)(v10 + 28) > (int)v7 );
      }
      v14 = v19;
      *(_DWORD *)(v6 + 48) |= 0x100u;
      if ( v14 )
      {
        v20 = 0;
        qfree();
      }
      return v24 - __readfsqword(0x28u);
    }
  }
  else
  {
    switch_dbctx();
    v16 = get_module_data();
    if ( !v16 )
      return v24 - __readfsqword(0x28u);
    sub_142F30(v16, a2);
    v4 = "local";
  }
  return sub_69660((__int64)"Skip merging of the decompiler because it was not inited for %s database\n", v4);
}

