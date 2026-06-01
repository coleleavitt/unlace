__int64 __fastcall sub_3CD800(__int64 a1, __int64 a2)
{
  __int64 module_data; // rax
  const char *v4; // rsi
  __int64 v5; // rdi
  __m128i *v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rdi
  size_t v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i v16; // xmm2
  __m128i si128; // xmm3
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v21; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  void *v25; // [rsp+28h] [rbp-50h]
  __int128 v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  int v28; // [rsp+48h] [rbp-30h]
  unsigned __int64 v29; // [rsp+58h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  switch_dbctx();
  module_data = get_module_data();
  if ( module_data )
  {
    sub_146970(module_data, a2);
    switch_dbctx();
    v4 = "remote";
    v5 = get_module_data();
    if ( v5 )
    {
      sub_146970(v5, (__int64)"remote");
      *(_OWORD *)n = 0;
      src = nullptr;
      v6 = (__m128i *)qvector_reserve((__int64)&src, 0, 19, 1);
      src = v6;
      n[0] = 19;
      *v6 = _mm_load_si128((const __m128i *)&xmmword_424AF0);
      v8 = src;
      v24 = a2;
      v9 = n[0];
      v6[1].m128i_i16[0] = 29285;
      v25 = nullptr;
      v8[18] = 0;
      v26 = 0;
      if ( v9 )
      {
        v25 = (void *)qalloc_or_throw(v9, 0, 29285, v7);
        *((_QWORD *)&v26 + 1) = v9;
        memcpy(v25, src, v9);
        *(_QWORD *)&v26 = v9;
        v8 = src;
      }
      v28 = 3;
      v27 = 0xFFFFFFFEFFFFFFFFLL;
      if ( v8 )
      {
        n[0] = 0;
        qfree((__int64)v8);
      }
      sub_33F1C0();
      v10 = operator new(0xE0u);
      sub_3CD700(v10, (__int64)&v24, (__int64)"Hexrays nodes", v11);
      v12 = 0;
      *(_QWORD *)v10 = &off_4E8DC8;
      *(_QWORD *)(v10 + 176) = v10 + 160;
      *(_QWORD *)(v10 + 184) = v10 + 160;
      v13 = *(_QWORD *)(v10 + 8);
      *(_DWORD *)(v10 + 160) = 0;
      *(_QWORD *)(v10 + 168) = 0;
      *(_QWORD *)(v10 + 192) = 0;
      *(_QWORD *)(v10 + 200) = 0;
      *(_DWORD *)(v10 + 208) = 0;
      *(_WORD *)(v10 + 212) = 0;
      *(_BYTE *)(v10 + 214) = 0;
      *(_WORD *)(v10 + 215) = 0;
      *(_BYTE *)(v10 + 217) = 0;
      *(_QWORD *)(v10 + 72) = 0;
      if ( *(int *)(v13 + 28) > 0 )
      {
        do
        {
          v14 = operator new(0x30u);
          v15 = *(_QWORD *)(v10 + 8);
          v16 = _mm_cvtsi32_si128(v12);
          si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
          v18 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 4LL * (int)v12 + 16));
          *(_QWORD *)(v10 + 8 * v12++ + 56) = v14;
          *(_QWORD *)v14 = off_4E8D10;
          *(__m128i *)(v14 + 16) = si128;
          *(__m128i *)(v14 + 32) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)(unsigned __int64)v10);
          *(_QWORD *)(v14 + 8) = _mm_unpacklo_epi32(v18, v16).m128i_u64[0];
        }
        while ( *(_DWORD *)(v15 + 28) > (int)v12 );
      }
      v19 = (__int64)v25;
      *(_DWORD *)(v10 + 48) |= 0x100u;
      if ( v19 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v19);
      }
      return v29 - __readfsqword(0x28u);
    }
  }
  else
  {
    switch_dbctx();
    v21 = get_module_data();
    if ( !v21 )
      return v29 - __readfsqword(0x28u);
    sub_146970(v21, a2);
    v4 = "local";
  }
  return sub_6D0A0((__int64)"Skip merging of the decompiler because it was not inited for %s database\n", v4);
}

