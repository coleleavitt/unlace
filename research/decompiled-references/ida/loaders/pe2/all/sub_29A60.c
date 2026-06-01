__int64 __fastcall sub_29A60(
        __int64 a1,
        unsigned int a2,
        int *a3,
        char *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 *a8,
        _DWORD *a9,
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
  __int64 v35; // rdx
  __m128i v36; // xmm0
  unsigned int v37; // r12d
  unsigned __int8 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rsi
  unsigned int v44; // edi
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // r13d
  int v48; // r14d
  unsigned int v49; // eax
  __int64 v50; // rdx
  int *v51; // [rsp+0h] [rbp-1A0h]
  unsigned int v53; // [rsp+8h] [rbp-198h]
  unsigned int v54; // [rsp+8h] [rbp-198h]
  __int128 v58; // [rsp+40h] [rbp-160h]
  unsigned int v60; // [rsp+6Ch] [rbp-134h] BYREF
  __int64 v61; // [rsp+70h] [rbp-130h] BYREF
  int v62; // [rsp+78h] [rbp-128h]
  __m128i v63; // [rsp+80h] [rbp-120h] BYREF
  __int64 v64; // [rsp+90h] [rbp-110h]
  int v65; // [rsp+98h] [rbp-108h]
  __m256i v66; // [rsp+A0h] [rbp-100h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-E0h]
  __int64 v68; // [rsp+D0h] [rbp-D0h]
  _DWORD v69[12]; // [rsp+E0h] [rbp-C0h] BYREF
  int v70[12]; // [rsp+110h] [rbp-90h] BYREF
  int v71; // [rsp+140h] [rbp-60h] BYREF
  int v72; // [rsp+144h] [rbp-5Ch]
  unsigned __int64 v73; // [rsp+168h] [rbp-38h]

  *((_QWORD *)&v58 + 1) = a13;
  *(_QWORD *)&v58 = a14;
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
    if ( (unsigned __int8)sub_23850(v18, v18 + 992, (a2 & 0xFFFFFF) - 1, (__int64)v69) )
    {
      if ( a3 )
      {
        v23 = *(_QWORD *)(a1 + 8);
        v62 = 21;
        v66.m256i_i64[1] = (__int64)&v61;
        v61 = v23;
        v24 = *(_DWORD *)(v23 + 916);
        v66.m256i_i64[0] = v23;
        v66.m256i_i32[6] = a2 & 0xFFFFFF;
        v63.m128i_i64[0] = v23;
        v67 = v24;
        v66.m256i_i32[4] = 1;
        v66.m256i_i8[20] = 1;
        v66.m256i_i32[7] = 23;
        v63.m128i_i64[1] = (__int64)&v66;
        LODWORD(v64) = 257;
        BYTE4(v64) = 0;
        if ( !(unsigned __int8)sub_25E00((__int64)&v66, (int *)&v60, (__int64)&v71, v20, v21, v22)
          || (v51 = a3, v54 = v60, sub_25ED0((__int64)&v63, v60, v70, v26, v27, v28), !v54) )
        {
          sub_DB80((__int64)"Couldn't find property map for property token 0x%x.", a2, v25, v26, v27, v28, (char)v51);
        }
        *v51 = v70[0] | 0x2000000;
      }
      memset(&v66, 0, 24);
      v53 = v69[1];
      v29 = qvector_reserve();
      v30 = *(_QWORD *)(a1 + 8);
      v66.m256i_i64[0] = v29;
      sub_24180(v30, v53, v66.m256i_i64);
      v31 = (char *)s1;
      if ( v66.m256i_i64[1] )
        v31 = (char *)v66.m256i_i64[0];
      sub_264E0(a4, a5, a6, v31);
      if ( v66.m256i_i64[0] )
      {
        v66.m256i_i64[1] = 0;
        qfree();
      }
      if ( a7 )
        *a7 = v69[0];
      v32 = *(_QWORD *)(a1 + 8);
      v63.m128i_i32[0] = 0;
      v33 = sub_24290(v32, v69[2], v63.m128i_i32, 3u);
      v66.m256i_i32[0] = 0;
      v34 = sub_240C0(v32, 3u, v33, &v66);
      if ( v34 )
      {
        v35 = v63.m128i_u32[0];
        if ( v66.m256i_i32[0] < (unsigned __int32)v63.m128i_i32[0] )
          return 2147500037LL;
        if ( a8 )
          *a8 = v34;
        if ( a9 )
          *a9 = v35;
        if ( (unsigned int)v35 > 1 )
        {
          v36 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
          v65 = 0;
          v64 = v35 + v34;
          v63 = _mm_unpacklo_epi64(v36, (__m128i)(unsigned __int64)v34);
          sub_282A0((__int64)&v63, &v61, 1);
          sub_28300((__int64)&v63);
          v66.m256i_i8[0] = 0;
          *(__int64 *)((char *)v66.m256i_i64 + 4) = 0;
          v67 = 0;
          v68 = 0;
          *(_OWORD *)&v66.m256i_u64[2] = 0;
          if ( (unsigned __int8)sub_28400(&v63, (__int64)&v66) )
            sub_280E0(a1, (__int64)&v66, a2, 0x17000000u, (unsigned __int64)a10, (__int64)a11, (__int64)a12);
          sub_22A90((__int64)&v66);
        }
      }
      else
      {
        if ( a8 )
          *a8 = 0;
        if ( a9 )
          *a9 = 0;
      }
      if ( v58 != 0 || (v37 = 0, a16) )
      {
        v38 = (unsigned __int8 *)sub_2A190(101);
        v42 = *v38;
        v43 = *((_QWORD *)v38 + 1);
        v44 = HIBYTE(a2);
        if ( !(_BYTE)v42 )
LABEL_76:
          sub_DB80((__int64)"Impossible to get coded table for table 0x%x", v44, v42, v39, v40, v41, (char)v51);
        v39 = v44;
        v45 = 0;
        while ( HIBYTE(a2) != *(_BYTE *)(v43 + v45) )
        {
          if ( v42 == ++v45 )
            goto LABEL_76;
        }
        v46 = *(_QWORD *)(a1 + 8);
        v63.m128i_i32[2] = 24;
        v66.m256i_i64[1] = (__int64)&v63;
        v63.m128i_i64[0] = v46;
        v47 = 0;
        v48 = 0;
        v66.m256i_i32[6] = (2 * a2) & 0x1FFFFFE | (unsigned __int8)v45;
        v49 = *(_DWORD *)(v46 + 1036);
        v37 = 0;
        v66.m256i_i64[0] = v46;
        v67 = v49;
        v66.m256i_i32[4] = 0;
        v66.m256i_i8[20] = 2;
        v66.m256i_i32[7] = 45;
        while ( (unsigned __int8)sub_25E00((__int64)&v66, nullptr, (__int64)&v71, v39, v40, v41) )
        {
          if ( v71 == 1 )
          {
            v47 = v72 | 0x6000000;
          }
          else if ( v71 == 2 )
          {
            v48 = v72 | 0x6000000;
          }
          else if ( v37 < a16 )
          {
            if ( a15 )
            {
              v39 = a15;
              v50 = v37++;
              *(_DWORD *)(a15 + 4 * v50) = v72 | 0x6000000;
            }
          }
        }
        if ( a14 )
          *a14 = v48;
        if ( a13 )
          *a13 = v47;
      }
      if ( a17 )
        *a17 = v37;
      return 0;
    }
    else
    {
      return 2147942413LL;
    }
  }
  return result;
}

