__int64 __fastcall sub_28830(
        __int64 a1,
        unsigned int a2,
        int *a3,
        char *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 *a8,
        __int32 *a9,
        _DWORD *a10,
        _QWORD *a11,
        _DWORD *a12,
        int *a13,
        int *a14,
        __int64 a15,
        unsigned int a16,
        unsigned int *a17)
{
  __int64 v18; // rdi
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdi
  char *v31; // rcx
  __int64 v32; // r12
  unsigned int v33; // eax
  __int64 v34; // rax
  __int32 v35; // edx
  __int64 v36; // rcx
  __m128i v37; // xmm0
  unsigned int v38; // r12d
  unsigned __int8 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rsi
  unsigned int v45; // edi
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // r13d
  int v49; // r14d
  unsigned int v50; // eax
  __int64 v51; // rdx
  int *v52; // [rsp+0h] [rbp-1A0h]
  unsigned int v54; // [rsp+8h] [rbp-198h]
  unsigned int v55; // [rsp+8h] [rbp-198h]
  __int128 v59; // [rsp+40h] [rbp-160h]
  unsigned int v61; // [rsp+6Ch] [rbp-134h] BYREF
  __int64 v62; // [rsp+70h] [rbp-130h] BYREF
  int v63; // [rsp+78h] [rbp-128h]
  __m128i v64; // [rsp+80h] [rbp-120h] BYREF
  __int64 v65; // [rsp+90h] [rbp-110h]
  __m256i v66; // [rsp+A0h] [rbp-100h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-E0h]
  __int64 v68; // [rsp+D0h] [rbp-D0h]
  _DWORD v69[12]; // [rsp+E0h] [rbp-C0h] BYREF
  int v70[12]; // [rsp+110h] [rbp-90h] BYREF
  int v71; // [rsp+140h] [rbp-60h] BYREF
  int v72; // [rsp+144h] [rbp-5Ch]
  unsigned __int64 v73; // [rsp+168h] [rbp-38h]

  *((_QWORD *)&v59 + 1) = a13;
  *(_QWORD *)&v59 = a14;
  v73 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *(_WORD *)a4 = 0;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  if ( a10 )
    *a10 = 0;
  if ( a11 )
    *a11 = 0;
  if ( a12 )
    *a12 = 0;
  if ( a13 )
    *a13 = 0;
  if ( a14 )
    *a14 = 0;
  if ( a17 )
    *a17 = 0;
  v18 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v18 + 992) )
  {
    if ( (unsigned __int8)sub_227B0(v18, v18 + 992, (a2 & 0xFFFFFF) - 1, (__int64)v69) )
    {
      if ( a3 )
      {
        v23 = *(_QWORD *)(a1 + 8);
        v63 = 21;
        v66.m256i_i64[1] = (__int64)&v62;
        v62 = v23;
        v24 = *(_DWORD *)(v23 + 916);
        v66.m256i_i64[0] = v23;
        v66.m256i_i32[6] = a2 & 0xFFFFFF;
        v64.m128i_i64[0] = v23;
        v67 = v24;
        v66.m256i_i32[4] = 1;
        v66.m256i_i8[20] = 1;
        v66.m256i_i32[7] = 23;
        v64.m128i_i64[1] = (__int64)&v66;
        LODWORD(v65) = 257;
        BYTE4(v65) = 0;
        if ( !(unsigned __int8)sub_24C80((__int64)&v66, (int *)&v61, (__int64)&v71, v20, v21, v22)
          || (v52 = a3, v55 = v61, sub_24D50((__int64)&v64, v61, v70, v26, v27, v28), !v55) )
        {
          sub_DA00((__int64)"Couldn't find property map for property token 0x%x.", a2, v25, v26, v27, v28, (char)v52);
        }
        *v52 = v70[0] | 0x2000000;
      }
      memset(&v66, 0, 24);
      v54 = v69[1];
      v29 = qvector_reserve();
      v30 = *(_QWORD *)(a1 + 8);
      v66.m256i_i64[0] = v29;
      sub_230E0(v30, v54, v66.m256i_i64);
      v31 = (char *)s1;
      if ( v66.m256i_i64[1] )
        v31 = (char *)v66.m256i_i64[0];
      sub_25360(a4, a5, a6, v31);
      if ( v66.m256i_i64[0] )
      {
        v66.m256i_i64[1] = 0;
        qfree();
      }
      if ( a7 )
        *a7 = v69[0];
      v32 = *(_QWORD *)(a1 + 8);
      v64.m128i_i32[0] = 0;
      v33 = sub_231F0(v32, v69[2], v64.m128i_i32, 3u);
      v66.m256i_i32[0] = 0;
      v34 = sub_23020(v32, 3u, v33, &v66);
      if ( v34 )
      {
        v35 = v64.m128i_i32[0];
        v36 = v34 + v64.m128i_u32[0];
        if ( v66.m256i_i32[0] < (unsigned __int32)v64.m128i_i32[0] )
          return 2147500037LL;
      }
      else
      {
        v36 = 0;
        v35 = 0;
      }
      if ( a8 )
        *a8 = v34;
      if ( a9 )
        *a9 = v35;
      v37 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
      v65 = v36;
      v64 = _mm_unpacklo_epi64(v37, (__m128i)(unsigned __int64)v34);
      sub_27120((__int64)&v64, &v62, 1);
      sub_27180((__int64)&v64);
      v66.m256i_i8[0] = 0;
      *(__int64 *)((char *)v66.m256i_i64 + 4) = 0;
      v67 = 0;
      v68 = 0;
      *(_OWORD *)&v66.m256i_u64[2] = 0;
      if ( (unsigned __int8)sub_27280(&v64, (__int64)&v66) )
        sub_26F60(a1, (__int64)&v66, a2, 0x17000000u, (unsigned __int64)a10, (__int64)a11, (__int64)a12);
      sub_21A20((__int64)&v66);
      if ( v59 != 0 || (v38 = 0, a16) )
      {
        v39 = (unsigned __int8 *)sub_28F30(101);
        v43 = *v39;
        v44 = *((_QWORD *)v39 + 1);
        v45 = HIBYTE(a2);
        if ( !(_BYTE)v43 )
LABEL_71:
          sub_DA00((__int64)"Impossible to get coded table for table 0x%x", v45, v43, v40, v41, v42, (char)v52);
        v40 = v45;
        v46 = 0;
        while ( HIBYTE(a2) != *(_BYTE *)(v44 + v46) )
        {
          if ( v43 == ++v46 )
            goto LABEL_71;
        }
        v47 = *(_QWORD *)(a1 + 8);
        v64.m128i_i32[2] = 24;
        v66.m256i_i64[1] = (__int64)&v64;
        v64.m128i_i64[0] = v47;
        v48 = 0;
        v49 = 0;
        v66.m256i_i32[6] = (2 * a2) & 0x1FFFFFE | (unsigned __int8)v46;
        v50 = *(_DWORD *)(v47 + 1036);
        v38 = 0;
        v66.m256i_i64[0] = v47;
        v67 = v50;
        v66.m256i_i32[4] = 0;
        v66.m256i_i8[20] = 2;
        v66.m256i_i32[7] = 45;
        while ( (unsigned __int8)sub_24C80((__int64)&v66, 0, (__int64)&v71, v40, v41, v42) )
        {
          if ( v71 == 1 )
          {
            v48 = v72 | 0x6000000;
          }
          else if ( v71 == 2 )
          {
            v49 = v72 | 0x6000000;
          }
          else if ( v38 < a16 )
          {
            if ( a15 )
            {
              v40 = a15;
              v51 = v38++;
              *(_DWORD *)(a15 + 4 * v51) = v72 | 0x6000000;
            }
          }
        }
        if ( a14 )
          *a14 = v49;
        if ( a13 )
          *a13 = v48;
      }
      if ( a17 )
        *a17 = v38;
      return 0;
    }
    else
    {
      return 2147942413LL;
    }
  }
  return result;
}
