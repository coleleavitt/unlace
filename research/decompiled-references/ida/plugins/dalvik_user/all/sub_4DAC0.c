__int64 __fastcall sub_4DAC0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v7; // rax
  unsigned __int64 v8; // rdx
  __m128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r10
  __int64 v16; // rax
  char v17; // r9
  __int64 v18; // rsi
  __m128i v19; // xmm0
  char v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __m128i v23; // xmm0
  void *v24; // rdx
  __m128i v25; // xmm0
  void *v26; // rdx
  void *v27; // rdi
  __m128i v28; // xmm0
  __int64 v29; // rax
  char nc; // [rsp+8h] [rbp-1E0h]
  __int64 nb; // [rsp+8h] [rbp-1E0h]
  __int64 na; // [rsp+8h] [rbp-1E0h]
  __int64 n; // [rsp+8h] [rbp-1E0h]
  char v34; // [rsp+17h] [rbp-1D1h]
  __int64 v35; // [rsp+18h] [rbp-1D0h]
  int v36; // [rsp+24h] [rbp-1C4h] BYREF
  char *v37; // [rsp+28h] [rbp-1C0h] BYREF
  _BYTE v38[64]; // [rsp+30h] [rbp-1B8h] BYREF
  __m128 v39; // [rsp+70h] [rbp-178h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-168h]
  int v41; // [rsp+88h] [rbp-160h]
  __int64 v42; // [rsp+90h] [rbp-158h] BYREF
  __int128 v43; // [rsp+98h] [rbp-150h]
  char v44; // [rsp+A8h] [rbp-140h]
  __int64 v45; // [rsp+B0h] [rbp-138h] BYREF
  void *v46; // [rsp+B8h] [rbp-130h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-128h]
  void *v48; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v49; // [rsp+D8h] [rbp-110h]
  void *src; // [rsp+E8h] [rbp-100h]
  __int128 v51; // [rsp+F0h] [rbp-F8h]
  __int64 v52; // [rsp+100h] [rbp-E8h] BYREF
  char v53; // [rsp+108h] [rbp-E0h]
  __m128i v54; // [rsp+110h] [rbp-D8h] BYREF
  char v55; // [rsp+120h] [rbp-C8h]
  __m256i v56; // [rsp+130h] [rbp-B8h] BYREF
  void *v57; // [rsp+150h] [rbp-98h]
  __m128i v58; // [rsp+158h] [rbp-90h] BYREF
  void *v59; // [rsp+168h] [rbp-80h]
  __m128i v60; // [rsp+170h] [rbp-78h] BYREF
  __int64 v61; // [rsp+180h] [rbp-68h]
  char v62; // [rsp+188h] [rbp-60h]
  __m128i v63; // [rsp+190h] [rbp-58h] BYREF
  char v64; // [rsp+1A0h] [rbp-48h]
  unsigned __int64 v65; // [rsp+1A8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  qmutex_lock();
  sub_43F20((__int64)v38, byte_7FBE9, 0x10u);
  sub_46BB0((__int64)v38, *(_DWORD *)(a1 + 8), a3);
  sub_46BB0((__int64)v38, *(_DWORD *)(a1 + 4), a4);
  memset(&v56, 0, 24);
  v7 = sub_48F20(a1, 6u, 2u, (__int64)v38, (__int64)&v56);
  v37 = v7;
  if ( v7 )
  {
    if ( !a2 )
    {
LABEL_32:
      v11 = 1;
      goto LABEL_10;
    }
    v8 = *((_QWORD *)v7 + 1);
    v9 = _mm_loadh_ps((const double *)v7);
    v41 = 0;
    v40 = v8;
    v39 = v9;
    v42 = 0;
    v44 = byte_7FBE9;
    v43 = 0;
    if ( (unsigned __int8)sub_46430((__int64)&v39, (unsigned __int32 *)a2, 1)
      && (unsigned __int8)sub_46430((__int64)&v39, (unsigned __int32 *)&v36, 1) )
    {
      while ( 1 )
      {
        v10 = v36--;
        if ( v10 <= 0 )
          break;
        v46 = nullptr;
        v48 = nullptr;
        src = nullptr;
        v53 = 0;
        v55 = 0;
        v47 = 0;
        v49 = 0;
        v51 = 0;
        if ( v40 < v41 + 8LL )
          goto LABEL_7;
        v13 = swap64();
        v41 += 8;
        v45 = v13;
        if ( v44 )
          sub_1FAD0(&v42);
        if ( !(unsigned __int8)sub_464A0((__int64)&v39, (__int64 *)&v46)
          || !(unsigned __int8)sub_464A0((__int64)&v39, (__int64 *)&v48)
          || !(unsigned __int8)sub_46430((__int64)&v39, (unsigned __int32 *)&v52, 1)
          || !(unsigned __int8)sub_46430((__int64)&v39, (unsigned __int32 *)&v52 + 1, 1) )
        {
LABEL_7:
          sub_1E410(&v45);
          goto LABEL_8;
        }
        v14 = v45;
        memset(&v56.m256i_u64[1], 0, 24);
        v56.m256i_i64[0] = v45;
        if ( (_QWORD)v47 )
        {
          n = v47;
          v56.m256i_i64[1] = qalloc_or_throw();
          v56.m256i_i64[3] = n;
          memcpy((void *)v56.m256i_i64[1], v46, n);
          v56.m256i_i64[2] = n;
        }
        v57 = nullptr;
        v58 = 0;
        if ( (_QWORD)v49 )
        {
          na = v49;
          v57 = (void *)qalloc_or_throw();
          v58.m128i_i64[1] = na;
          memcpy(v57, v48, na);
          v58.m128i_i64[0] = na;
        }
        v59 = nullptr;
        v60 = 0;
        if ( (_QWORD)v51 )
        {
          nb = v51;
          v59 = (void *)qalloc_or_throw();
          v60.m128i_i64[1] = nb;
          memcpy(v59, src, nb);
          v60.m128i_i64[0] = nb;
        }
        v15 = v52;
        v16 = *(_QWORD *)(a2 + 16);
        v17 = v53;
        v18 = *(_QWORD *)(a2 + 8);
        v19 = _mm_load_si128(&v54);
        v61 = v52;
        v20 = v55;
        v62 = v53;
        v63 = v19;
        v64 = v55;
        if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v16 + 1) )
        {
          v35 = v52;
          v34 = v55;
          nc = v53;
          v29 = qvector_reserve();
          *(_QWORD *)(a2 + 8) = v29;
          v18 = v29;
          v16 = *(_QWORD *)(a2 + 16);
          v15 = v35;
          v20 = v34;
          v17 = nc;
        }
        v21 = v18 + 120 * v16;
        v22 = v56.m256i_i64[1];
        *(__m128i *)(v21 + 16) = _mm_load_si128((const __m128i *)&v56.m256i_u64[2]);
        v23 = _mm_loadu_si128(&v58);
        *(_QWORD *)(v21 + 8) = v22;
        v24 = v57;
        *(__m128i *)(v21 + 40) = v23;
        v25 = _mm_load_si128(&v60);
        *(_QWORD *)(v21 + 32) = v24;
        v26 = v59;
        *(_QWORD *)v21 = v14;
        *(_QWORD *)(v21 + 56) = v26;
        v27 = src;
        *(__m128i *)(v21 + 64) = v25;
        v28 = _mm_load_si128(&v63);
        *(_QWORD *)(v21 + 80) = v15;
        *(_BYTE *)(v21 + 88) = v17;
        *(_BYTE *)(v21 + 112) = v20;
        *(__m128i *)(v21 + 96) = v28;
        ++*(_QWORD *)(a2 + 16);
        if ( v27 )
        {
          *(_QWORD *)&v51 = 0;
          qfree();
        }
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
        }
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree();
        }
      }
      sub_43EB0((__int64)&v39);
      goto LABEL_32;
    }
LABEL_8:
    sub_43EB0((__int64)&v39);
  }
  v11 = 0;
LABEL_10:
  sub_44B80((_QWORD **)&v37);
  sub_43FA0((__int64)v38);
  qmutex_unlock();
  return v11;
}

