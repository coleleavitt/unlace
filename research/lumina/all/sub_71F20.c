__int64 __fastcall sub_71F20(
        __int64 a1,
        int a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13)
{
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rbp
  void *v24; // rax
  const void *v25; // rsi
  void *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  void *v31; // rax
  const void *v32; // rsi
  size_t v33; // [rsp+8h] [rbp-50h]
  __int64 nb; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+10h] [rbp-48h]
  size_t na; // [rsp+10h] [rbp-48h]
  __int64 v37; // [rsp+18h] [rbp-40h]

  v17 = (__int64 *)(a1 + 8);
  *((_DWORD *)v17 - 2) = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  sub_68E00(v17, a3);
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v18 = *(_QWORD *)(a4 + 8);
  if ( v18 )
  {
    v33 = *(_QWORD *)(a4 + 8);
    nb = 16 * v18;
    v24 = (void *)sub_198760(16 * v18);
    v25 = *(const void **)a4;
    *(_QWORD *)(a1 + 32) = v24;
    *(_QWORD *)(a1 + 48) = v33;
    memcpy(v24, v25, nb);
    *(_QWORD *)(a1 + 40) = v33;
  }
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v19 = *(_QWORD *)(a5 + 8);
  if ( v19 )
  {
    v31 = (void *)sub_198760(16 * v19);
    v32 = *(const void **)a5;
    *(_QWORD *)(a1 + 56) = v31;
    *(_QWORD *)(a1 + 72) = v19;
    memcpy(v31, v32, 16 * v19);
    *(_QWORD *)(a1 + 64) = v19;
  }
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  sub_68E00((__int64 *)(a1 + 80), a6);
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  sub_68E00((__int64 *)(a1 + 104), a7);
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  sub_68E00((__int64 *)(a1 + 128), a8);
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  sub_68E00((__int64 *)(a1 + 152), a9);
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v20 = a10[1];
  if ( v20 )
  {
    v37 = a10[1];
    na = 16 * v20;
    v29 = sub_198760(16 * v20);
    *(_QWORD *)(a1 + 176) = v29;
    v30 = 0;
    *(_QWORD *)(a1 + 192) = v37;
    do
    {
      *(__m128i *)(v29 + v30) = _mm_loadu_si128((const __m128i *)(*a10 + v30));
      v30 += 16;
    }
    while ( v30 != na );
    *(_QWORD *)(a1 + 184) = v37;
  }
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  v21 = a11[1];
  if ( v21 )
  {
    n = a11[1];
    v27 = sub_198760(16 * v21);
    *(_QWORD *)(a1 + 200) = v27;
    v28 = 0;
    *(_QWORD *)(a1 + 216) = n;
    do
    {
      *(__m128i *)(v27 + v28) = _mm_loadu_si128((const __m128i *)(*a11 + v28));
      v28 += 16;
    }
    while ( v28 != 16 * v21 );
    *(_QWORD *)(a1 + 208) = n;
  }
  *(_QWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  v22 = *(_QWORD *)(a12 + 8);
  if ( v22 )
  {
    v26 = (void *)sub_198760(16 * v22);
    *(_QWORD *)(a1 + 224) = v26;
    *(_QWORD *)(a1 + 240) = v22;
    memcpy(v26, *(const void **)a12, 16 * v22);
    *(_QWORD *)(a1 + 232) = v22;
  }
  *(_QWORD *)(a1 + 248) = a13;
  return a13;
}
