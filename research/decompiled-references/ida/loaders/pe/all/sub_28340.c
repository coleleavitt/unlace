__int64 __fastcall sub_28340(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        char *a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdi
  char *v26; // rcx
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  int v32; // r14d
  unsigned int v33; // r13d
  char v34; // al
  char v35; // [rsp+0h] [rbp-180h]
  unsigned int v36; // [rsp+Ch] [rbp-174h]
  unsigned int v37; // [rsp+Ch] [rbp-174h]
  unsigned int v41; // [rsp+38h] [rbp-148h]
  unsigned int v42; // [rsp+4Ch] [rbp-134h] BYREF
  __int64 v43; // [rsp+50h] [rbp-130h] BYREF
  int v44; // [rsp+58h] [rbp-128h]
  __m128i v45; // [rsp+60h] [rbp-120h] BYREF
  __int64 v46; // [rsp+70h] [rbp-110h]
  __m256i v47; // [rsp+80h] [rbp-100h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-E0h]
  __int64 v49; // [rsp+B0h] [rbp-D0h]
  int v50; // [rsp+C0h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+C4h] [rbp-BCh]
  unsigned int v52; // [rsp+C8h] [rbp-B8h]
  _DWORD v53[12]; // [rsp+F0h] [rbp-90h] BYREF
  char v54[40]; // [rsp+120h] [rbp-60h] BYREF
  unsigned __int64 v55; // [rsp+148h] [rbp-38h]

  v55 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *(_WORD *)a5 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *(_DWORD *)a9 = 0;
  if ( a10 )
    *(_QWORD *)a10 = 0;
  if ( a11 )
    *(_DWORD *)a11 = 0;
  v13 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v13 + 392) )
  {
    if ( (unsigned __int8)sub_227B0(v13, v13 + 392, (a2 & 0xFFFFFF) - 1, (__int64)&v50) )
    {
      v18 = *(_QWORD *)(a1 + 8);
      v47.m256i_i32[6] = a2 & 0xFFFFFF;
      v47.m256i_i64[1] = (__int64)&v43;
      v19 = *(_DWORD *)(v18 + 316);
      v43 = v18;
      v44 = 6;
      v48 = v19;
      v47.m256i_i64[0] = v18;
      v47.m256i_i32[4] = 1;
      v47.m256i_i8[20] = 5;
      v47.m256i_i32[7] = 8;
      v45.m128i_i64[0] = v18;
      v45.m128i_i64[1] = (__int64)&v47;
      LODWORD(v46) = 257;
      BYTE4(v46) = 0;
      if ( !(unsigned __int8)sub_24C80((__int64)&v47, (int *)&v42, (__int64)v54, v15, v16, v17)
        || (v35 = (char)a4, v36 = v42, sub_24D50((__int64)&v45, v42, v53, v21, v22, v23), !v36) )
      {
        sub_DA00((__int64)"Couldn't find method for param token 0x%x.", a2, v20, v21, v22, v23, v35);
      }
      if ( a3 )
        *a3 = v36;
      v41 = v51;
      if ( a4 )
        *a4 = v51;
      memset(&v47, 0, 24);
      v37 = v52;
      v24 = qvector_reserve();
      v25 = *(_QWORD *)(a1 + 8);
      v47.m256i_i64[0] = v24;
      sub_230E0(v25, v37, v47.m256i_i64);
      v26 = (char *)s1;
      if ( v47.m256i_i64[1] )
        v26 = (char *)v47.m256i_i64[0];
      sub_25360(a5, a6, a7, v26);
      if ( v47.m256i_i64[0] )
      {
        v47.m256i_i64[1] = 0;
        qfree();
      }
      if ( a8 )
        *a8 = v50;
      if ( !(a9 | a11 | a10) )
        return 0;
      v27 = *(_QWORD *)(a1 + 8);
      v45.m128i_i32[0] = 0;
      v28 = sub_231F0(v27, v53[4], v45.m128i_i32, 3u);
      v47.m256i_i32[0] = 0;
      v29 = sub_23020(v27, 3u, v28, &v47);
      if ( !v29 )
      {
        v30 = 0;
        goto LABEL_36;
      }
      if ( v47.m256i_i32[0] >= (unsigned __int32)v45.m128i_i32[0] )
      {
        v30 = v29 + v45.m128i_u32[0];
LABEL_36:
        v31 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
        v46 = v30;
        v45 = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)v29);
        sub_27120((__int64)&v45, &v47, 1);
        if ( (v47.m256i_i8[0] & 0x10) != 0 )
          sub_27180((__int64)&v45);
        v32 = sub_27180((__int64)&v45) + 1;
        v33 = 0;
        do
        {
          v47.m256i_i8[0] = 0;
          *(__int64 *)((char *)v47.m256i_i64 + 4) = 0;
          v48 = 0;
          v49 = 0;
          *(_OWORD *)&v47.m256i_u64[2] = 0;
          v34 = sub_27280(&v45, (__int64)&v47);
          if ( v33 == v41 && v34 )
            sub_26F60(a1, (__int64)&v47, a2, 0x8000000u, a9, a10, a11);
          ++v33;
          sub_21A20((__int64)&v47);
        }
        while ( v41 >= v33 && v33 != v32 );
        return 0;
      }
      return 2147500037LL;
    }
    else
    {
      return 2147942413LL;
    }
  }
  return result;
}
