__int64 __fastcall sub_29550(
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
  unsigned int v24; // r13d
  unsigned int v25; // r15d
  char *v26; // rcx
  __int64 v27; // r12
  unsigned int v28; // eax
  __int64 v29; // rax
  int v30; // r12d
  unsigned int v31; // r14d
  char v32; // al
  char v33; // [rsp+0h] [rbp-180h]
  unsigned int v34; // [rsp+4h] [rbp-17Ch]
  unsigned int v38; // [rsp+4Ch] [rbp-134h] BYREF
  __int64 v39; // [rsp+50h] [rbp-130h] BYREF
  int v40; // [rsp+58h] [rbp-128h]
  __m128i v41; // [rsp+60h] [rbp-120h] BYREF
  __int64 v42; // [rsp+70h] [rbp-110h]
  int v43; // [rsp+78h] [rbp-108h]
  __m256i v44; // [rsp+80h] [rbp-100h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-E0h]
  __int64 v46; // [rsp+B0h] [rbp-D0h]
  int v47; // [rsp+C0h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+C4h] [rbp-BCh]
  unsigned int v49; // [rsp+C8h] [rbp-B8h]
  _DWORD v50[12]; // [rsp+F0h] [rbp-90h] BYREF
  _BYTE v51[40]; // [rsp+120h] [rbp-60h] BYREF
  unsigned __int64 v52; // [rsp+148h] [rbp-38h]

  v52 = __readfsqword(0x28u);
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
    if ( (unsigned __int8)sub_23850(v13, v13 + 392, (a2 & 0xFFFFFF) - 1, (__int64)&v47) )
    {
      v44.m256i_i32[6] = a2 & 0xFFFFFF;
      v44.m256i_i64[1] = (__int64)&v39;
      v18 = *(_QWORD *)(a1 + 8);
      v44.m256i_i8[20] = 5;
      v40 = 6;
      v19 = *(_DWORD *)(v18 + 316);
      v39 = v18;
      v44.m256i_i64[0] = v18;
      v45 = v19;
      v44.m256i_i32[4] = 1;
      v44.m256i_i32[7] = 8;
      v41.m128i_i64[0] = v18;
      v41.m128i_i64[1] = (__int64)&v44;
      LODWORD(v42) = 257;
      BYTE4(v42) = 0;
      if ( !(unsigned __int8)sub_25E00((__int64)&v44, (int *)&v38, (__int64)v51, v15, v16, v17)
        || (v34 = v38, sub_25ED0((__int64)&v41, v38, v50, v21, v22, v23), !v34) )
      {
        sub_DB80((__int64)"Couldn't find method for param token 0x%x.", a2, v20, v21, v22, v23, v33);
      }
      if ( a3 )
        *a3 = v34;
      v24 = v48;
      if ( a4 )
        *a4 = v48;
      v25 = v49;
      memset(&v44, 0, 24);
      v44.m256i_i64[0] = qvector_reserve();
      sub_24180(*(_QWORD *)(a1 + 8), v25, v44.m256i_i64);
      v26 = (char *)s1;
      if ( v44.m256i_i64[1] )
        v26 = (char *)v44.m256i_i64[0];
      sub_264E0(a5, a6, a7, v26);
      if ( v44.m256i_i64[0] )
      {
        v44.m256i_i64[1] = 0;
        qfree();
      }
      if ( a8 )
        *a8 = v47;
      if ( !(a9 | a10 | a11) )
        return 0;
      v41.m128i_i32[0] = 0;
      v27 = *(_QWORD *)(a1 + 8);
      v28 = sub_24290(v27, v50[4], v41.m128i_i32, 3u);
      v44.m256i_i32[0] = 0;
      v29 = sub_240C0(v27, 3u, v28, &v44);
      if ( !v29 )
        return 0;
      if ( v44.m256i_i32[0] >= (unsigned __int32)v41.m128i_i32[0] )
      {
        if ( v41.m128i_i32[0] > 1u )
        {
          v42 = v41.m128i_u32[0] + v29;
          v43 = 0;
          v41 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)(a1 + 8), (__m128i)(unsigned __int64)v29);
          sub_282A0((__int64)&v41, &v44, 1);
          if ( (v44.m256i_i8[0] & 0x10) != 0 )
            sub_28300((__int64)&v41);
          v30 = sub_28300((__int64)&v41) + 1;
          v31 = 0;
          do
          {
            v44.m256i_i8[0] = 0;
            *(__int64 *)((char *)v44.m256i_i64 + 4) = 0;
            v45 = 0;
            v46 = 0;
            *(_OWORD *)&v44.m256i_u64[2] = 0;
            v32 = sub_28400(&v41, (__int64)&v44);
            if ( v31 == v24 && v32 )
              sub_280E0(a1, (__int64)&v44, a2, 0x8000000u, a9, a10, a11);
            ++v31;
            sub_22A90((__int64)&v44);
          }
          while ( v24 >= v31 && v31 != v30 );
        }
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

