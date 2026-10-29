__int64 __fastcall sub_138470(
        unsigned __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned __int64 *a5,
        int a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 **v11; // rax
  _QWORD *v12; // rdi
  unsigned __int64 *v13; // r13
  __m128i si128; // xmm0
  _QWORD *v15; // r13
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r14d
  __int64 (__fastcall *v34)(__int64); // rax
  int v35; // eax
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // r12
  _QWORD *v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  const void *v45; // rsi
  __int64 *v46; // r12
  __int64 v47; // rax
  __int64 *v48; // r12
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __m128i v52; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+10h] [rbp-C0h]
  __int64 *v54; // [rsp+18h] [rbp-B8h]
  size_t n; // [rsp+20h] [rbp-B0h]
  int v56; // [rsp+2Ch] [rbp-A4h]
  __int64 *v57; // [rsp+30h] [rbp-A0h]
  _QWORD *v58; // [rsp+38h] [rbp-98h]
  __m128i v59; // [rsp+40h] [rbp-90h] BYREF
  __m128i v60; // [rsp+50h] [rbp-80h] BYREF
  _BYTE v61[24]; // [rsp+60h] [rbp-70h] BYREF
  __int128 v62; // [rsp+78h] [rbp-58h]
  unsigned __int64 v63; // [rsp+88h] [rbp-48h]
  char v64; // [rsp+90h] [rbp-40h]
  unsigned __int64 v65; // [rsp+98h] [rbp-38h]

  v58 = a3;
  v54 = a4;
  v65 = __readfsqword(0x28u);
  v53 = sub_1108E0((__int64)a1, 0, (__int64)a3, (__int64)a4, (__int64)a5, a6, a7, a8);
  if ( !v53 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, a7);
    BUG();
  }
  v11 = (unsigned __int64 **)v53;
  v12 = v58;
  ++*(_DWORD *)(v53 + 24);
  v13 = *v11;
  si128.m128i_i64[0] = 0;
  BYTE8(v62) = 1;
  *(_QWORD *)&v62 = (int)sub_64960(v12, 0);
  memset(v61, 0, sizeof(v61));
  v63 = 0xFFFFFFFF00000001LL;
  v64 = 1;
  v57 = (__int64 *)v61;
  v15 = sub_104DF0(v13, (__int64)v61);
  if ( *(_QWORD *)v61 )
  {
    *(_QWORD *)&v61[8] = 0;
    qfree(*(__int64 *)v61);
  }
  if ( v15 )
  {
    v56 = sub_64B20((__int64)v58);
    v16 = *(_DWORD *)(a1[5] + 144);
    if ( a2[1] )
    {
      v59.m128i_i32[0] = 0;
      v17 = 0;
      n = v16;
      do
      {
        v18 = *(unsigned int *)(*a2 + 4 * v17);
        if ( (_DWORD)v18 )
        {
          v19 = a1[5];
          if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 64) )
            sub_1346B0(*(double *)si128.m128i_i64);
          v20 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v18);
          v21 = sub_129150(v20, v58, *(_QWORD *)(v20 + 56), 0, 0, 0, *(double *)si128.m128i_i64, a8, 0x101u);
          a8 = (__m128)(unsigned __int64)v21;
          si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v21);
          if ( !v21
            || *(_DWORD *)v21 != 4
            || *(_BYTE *)(v21 + 32) != 5
            || *(_QWORD *)(*(_QWORD *)(v21 + 40) + 8LL) >= (signed __int64)n
            || *(_DWORD *)(v21 + 36) < v56 )
          {
            goto LABEL_27;
          }
          v29 = a5[1];
          v28 = *a5;
          *(__m128i *)v61 = si128;
          v22 = a5[2];
          v23 = v29 + 1;
          if ( (unsigned __int64)v57 < v28 || (unsigned __int64)v57 >= v28 + 16 * v22 )
          {
            if ( v22 < v23 )
            {
              v24 = qvector_reserve((__int64)a5, v28, v29 + 1, 16);
              *a5 = v24;
              v28 = v24;
              v29 = a5[1];
            }
            si128 = _mm_load_si128((const __m128i *)v61);
            *(__m128i *)(v28 + 16 * v29) = si128;
          }
          else
          {
            if ( v22 < v23 )
            {
              v52 = si128;
              v27 = qvector_reserve((__int64)a5, v28, v29 + 1, 16);
              *a5 = v27;
              v28 = v27;
              si128 = _mm_load_si128(&v52);
              v29 = a5[1];
            }
            *(__m128i *)(v28 + 16 * v29) = si128;
          }
          ++a5[1];
        }
        v17 = ++v59.m128i_i32[0];
      }
      while ( (unsigned __int64)v59.m128i_i32[0] < a2[1] );
    }
    if ( v15[1] )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = 4 * v31;
        v33 = *(_DWORD *)(*v15 + 4 * v31);
        v34 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
        if ( v34 == sub_101AA0 )
        {
          v35 = *(_DWORD *)(a1[5] + 64);
        }
        else
        {
          v59.m128i_i64[0] = v32;
          v35 = v34((__int64)a1);
          v32 = v59.m128i_i64[0];
        }
        if ( v33 != v35 - 1 )
        {
          v36 = a1[5];
          v37 = *(unsigned int *)(*v15 + v32);
          if ( (unsigned int)v37 >= *(_DWORD *)(v36 + 64) )
            sub_1346B0(*(double *)si128.m128i_i64);
          v38 = v58;
          v39 = v58;
          v40 = *(_QWORD *)(*(_QWORD *)(v36 + 528) + 8 * v37);
          sub_64000(v57, (__int64)v58, *(double *)si128.m128i_i64);
          v41 = v38[3];
          *(_QWORD *)&v61[16] = 0;
          v62 = 0;
          if ( v41 )
          {
            v59.m128i_i64[0] = v41;
            n = 16 * v41;
            *(_QWORD *)&v61[16] = qalloc_or_throw(16 * v41, (__int64)v39, 16 * v41, v41);
            v45 = (const void *)v58[2];
            *((_QWORD *)&v62 + 1) = v59.m128i_i64[0];
            memcpy(*(void **)&v61[16], v45, n);
            *(_QWORD *)&v62 = v59.m128i_i64[0];
          }
          v42 = sub_A9D90(v40, (unsigned __int64 **)v57, *(_QWORD *)(v40 + 48), 0, 1u);
          si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)v42);
          if ( !v42
            || *(_DWORD *)v42 != 4
            || *(_BYTE *)(v42 + 32) != 1
            || *(_BYTE *)(v42 + 64) != 5
            || *(_DWORD *)(v42 + 36) < v56 )
          {
            if ( *(_QWORD *)&v61[16] )
            {
              *(_QWORD *)&v62 = 0;
              qfree(*(__int64 *)&v61[16]);
            }
            qfree(*(__int64 *)v61);
            goto LABEL_27;
          }
          v60 = si128;
          v50 = *v54;
          v43 = v54[2];
          v51 = v54[1];
          v44 = v51 + 1;
          if ( (unsigned __int64)&v60 < *v54 || (unsigned __int64)&v60 >= v50 + 16 * v43 )
          {
            if ( v43 < v44 )
            {
              v46 = v54;
              v47 = qvector_reserve((__int64)v54, v50, v51 + 1, 16);
              *v46 = v47;
              v50 = v47;
              v51 = v46[1];
            }
            si128 = _mm_load_si128(&v60);
            *(__m128i *)(v50 + 16 * v51) = si128;
          }
          else
          {
            if ( v43 < v44 )
            {
              v48 = v54;
              v59 = si128;
              v49 = qvector_reserve((__int64)v54, v50, v51 + 1, 16);
              *v48 = v49;
              v50 = v49;
              si128 = _mm_load_si128(&v59);
              v51 = v48[1];
            }
            *(__m128i *)(v50 + 16 * v51) = si128;
          }
          ++v54[1];
          if ( *(_DWORD *)(v40 + 72) == 1 )
          {
            sub_93B40(v57);
            break;
          }
          if ( *(_QWORD *)&v61[16] )
          {
            *(_QWORD *)&v62 = 0;
            qfree(*(__int64 *)&v61[16]);
          }
          qfree(*(__int64 *)v61);
        }
        v31 = ++v30;
      }
      while ( (unsigned __int64)v30 < v15[1] );
    }
    v25 = 1;
  }
  else
  {
LABEL_27:
    v25 = 0;
  }
  sub_104E10(v53, *(double *)si128.m128i_i64);
  return v25;
}

