__int64 __fastcall sub_19DEB0(
        _QWORD *a1,
        unsigned __int64 a2,
        const void *a3,
        size_t a4,
        char *a5,
        unsigned __int64 a6,
        int a7)
{
  void *v11; // rdi
  char *v12; // rax
  __m128i *v13; // r9
  int v14; // r15d
  __m128i v15; // xmm0
  __int64 v16; // rax
  void *v17; // rax
  unsigned __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // rdi
  unsigned int v23; // [rsp+14h] [rbp-D4h]
  unsigned __int64 v24; // [rsp+18h] [rbp-D0h]
  __m128i *v25; // [rsp+20h] [rbp-C8h]
  size_t n; // [rsp+28h] [rbp-C0h]
  char *s; // [rsp+30h] [rbp-B8h]
  char *v28; // [rsp+38h] [rbp-B0h]
  __m128i v29; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v30; // [rsp+50h] [rbp-98h]
  __m128i v31; // [rsp+60h] [rbp-88h] BYREF
  __m128i v32; // [rsp+70h] [rbp-78h] BYREF
  __m128i v33; // [rsp+80h] [rbp-68h] BYREF
  __m128i v34; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+A8h] [rbp-40h]

  v24 = a2;
  v35 = __readfsqword(0x28u);
  if ( a7 <= 0 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( a4 - 1 > 0xFFFFFFFFFFFFFFFALL )
    return 0xFFFFFFFFLL;
  n = a4 + 4;
  v11 = sub_198620(a4 + 4);
  if ( !v11 )
    return 0xFFFFFFFFLL;
  v12 = (char *)memcpy(v11, a3, a4);
  v23 = 1;
  v13 = &v29;
  v28 = &v12[a4];
  s = v12;
  do
  {
    v25 = v13;
    v14 = 1;
    *(_DWORD *)v28 = _byteswap_ulong(v23);
    sub_19DBC0(v31.m128i_i8, s, n, a5, a6);
    v13 = v25;
    v29 = _mm_load_si128(&v31);
    v30 = _mm_load_si128(&v32);
    if ( a7 != 1 )
    {
      do
      {
        ++v14;
        sub_19DBC0(v33.m128i_i8, v31.m128i_i8, 0x20u, a5, a6);
        v15 = _mm_load_si128(&v34);
        v31 = _mm_load_si128(&v33);
        v32 = v15;
        v29 = _mm_xor_si128(v31, v29);
        v30 = _mm_xor_si128(v15, v30);
      }
      while ( a7 != v14 );
      v13 = v25;
    }
    v16 = 32;
    if ( v24 <= 0x20 )
      v16 = v24;
    if ( (unsigned int)v16 >= 8 )
    {
      *a1 = v13->m128i_i64[0];
      v19 = (unsigned __int64)(a1 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)((char *)a1 + (unsigned int)v16 - 8) = *(__int64 *)((char *)&v13->m128i_i64[-1] + (unsigned int)v16);
      if ( (((_DWORD)v16 + (_DWORD)a1 - (_DWORD)v19) & 0xFFFFFFF8) >= 8 )
      {
        v20 = 0;
        do
        {
          v21 = v20;
          v20 += 8;
          *(_QWORD *)(v19 + v21) = *(_QWORD *)((char *)v13 - ((char *)a1 - v19) + v21);
        }
        while ( v20 < (((_DWORD)v16 + (_DWORD)a1 - (_DWORD)v19) & 0xFFFFFFF8) );
      }
    }
    else if ( (v16 & 4) != 0 )
    {
      *(_DWORD *)a1 = v13->m128i_i32[0];
      *(_DWORD *)((char *)a1 + (unsigned int)v16 - 4) = *(__int32 *)((char *)&v13->m128i_i32[-1] + (unsigned int)v16);
    }
    else if ( (_DWORD)v16 )
    {
      *(_BYTE *)a1 = v13->m128i_i8[0];
      if ( (v16 & 2) != 0 )
        *(_WORD *)((char *)a1 + (unsigned int)v16 - 2) = *(__int16 *)((char *)&v13->m128i_i16[-1] + (unsigned int)v16);
    }
    a1 = (_QWORD *)((char *)a1 + v16);
    ++v23;
    v24 -= v16;
  }
  while ( v24 );
  v17 = memset(s, 0, n);
  j__free(v17);
  return 0;
}
