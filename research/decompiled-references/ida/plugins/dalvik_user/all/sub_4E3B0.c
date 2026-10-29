__int64 __fastcall sub_4E3B0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rax
  unsigned __int64 v7; // rdx
  __m128 v8; // xmm0
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // r13
  size_t v14; // r15
  size_t v15; // r15
  size_t v16; // r15
  __int64 v17; // r9
  __int64 v18; // rax
  char v19; // r8
  __int64 v20; // rsi
  __m128i v21; // xmm0
  char v22; // r15
  __int64 v23; // rax
  void *v24; // rdx
  __m128i v25; // xmm0
  void *v26; // rdx
  __m128i v27; // xmm0
  void *v28; // rdx
  void *v29; // rdi
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v33; // [rsp+0h] [rbp-1F8h]
  char v34; // [rsp+Fh] [rbp-1E9h]
  int v35; // [rsp+14h] [rbp-1E4h] BYREF
  char *v36; // [rsp+18h] [rbp-1E0h] BYREF
  _WORD *v37; // [rsp+20h] [rbp-1D8h] BYREF
  __int128 v38; // [rsp+28h] [rbp-1D0h]
  _BYTE v39[64]; // [rsp+40h] [rbp-1B8h] BYREF
  __m128 v40; // [rsp+80h] [rbp-178h] BYREF
  unsigned __int64 v41; // [rsp+90h] [rbp-168h]
  int v42; // [rsp+98h] [rbp-160h]
  __int64 v43; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-150h]
  char v45; // [rsp+B8h] [rbp-140h]
  __int64 v46; // [rsp+C0h] [rbp-138h] BYREF
  void *v47; // [rsp+C8h] [rbp-130h] BYREF
  size_t v48[2]; // [rsp+D0h] [rbp-128h]
  void *v49; // [rsp+E0h] [rbp-118h] BYREF
  size_t v50[2]; // [rsp+E8h] [rbp-110h]
  void *src; // [rsp+F8h] [rbp-100h] BYREF
  size_t n[2]; // [rsp+100h] [rbp-F8h]
  __int64 v53; // [rsp+110h] [rbp-E8h] BYREF
  char v54; // [rsp+118h] [rbp-E0h]
  __m128i v55; // [rsp+120h] [rbp-D8h] BYREF
  char v56; // [rsp+130h] [rbp-C8h]
  __int64 v57; // [rsp+140h] [rbp-B8h]
  void *v58; // [rsp+148h] [rbp-B0h]
  __m128i v59; // [rsp+150h] [rbp-A8h] BYREF
  void *v60; // [rsp+160h] [rbp-98h]
  __m128i v61; // [rsp+168h] [rbp-90h] BYREF
  void *v62; // [rsp+178h] [rbp-80h]
  __m128i v63; // [rsp+180h] [rbp-78h] BYREF
  __int64 v64; // [rsp+190h] [rbp-68h]
  char v65; // [rsp+198h] [rbp-60h]
  __m128i v66; // [rsp+1A0h] [rbp-58h] BYREF
  char v67; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v68; // [rsp+1B8h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  qmutex_lock();
  v38 = 0;
  v37 = (_WORD *)qvector_reserve();
  *v37 = 101;
  *(_QWORD *)&v38 = v38 + 1;
  sub_43F20((__int64)v39, byte_7FBE9, 0x10u);
  sub_46BB0((__int64)v39, *(_DWORD *)(a1 + 8), a3);
  sub_46BB0((__int64)v39, *(_DWORD *)(a1 + 4), a4);
  v6 = sub_48F20(a1, 6u, 5u, (__int64)v39, (__int64)&v37);
  v36 = v6;
  if ( !v6 )
    goto LABEL_9;
  if ( a2 )
  {
    v7 = *((_QWORD *)v6 + 1);
    v8 = _mm_loadh_ps((const double *)v6);
    v42 = 0;
    v41 = v7;
    v40 = v8;
    v43 = 0;
    v45 = byte_7FBE9;
    v44 = 0;
    if ( (unsigned __int8)sub_46430((__int64)&v40, (unsigned __int32 *)a2, 1)
      && (unsigned __int8)sub_46430((__int64)&v40, (unsigned __int32 *)&v35, 1) )
    {
      while ( 1 )
      {
        v9 = v35--;
        if ( v9 <= 0 )
          break;
        v47 = nullptr;
        v49 = nullptr;
        src = nullptr;
        v54 = 0;
        v56 = 0;
        *(_OWORD *)v48 = 0;
        *(_OWORD *)v50 = 0;
        *(_OWORD *)n = 0;
        if ( v41 < v42 + 8LL )
          goto LABEL_7;
        v12 = swap64();
        v42 += 8;
        v46 = v12;
        if ( v45 )
          sub_1FAD0(&v43);
        if ( !(unsigned __int8)sub_464A0((__int64)&v40, (__int64 *)&v47)
          || !(unsigned __int8)sub_464A0((__int64)&v40, (__int64 *)&v49)
          || !(unsigned __int8)sub_464A0((__int64)&v40, (__int64 *)&src)
          || !(unsigned __int8)sub_46430((__int64)&v40, (unsigned __int32 *)&v53, 1)
          || !(unsigned __int8)sub_46430((__int64)&v40, (unsigned __int32 *)&v53 + 1, 1) )
        {
LABEL_7:
          sub_1E410(&v46);
          goto LABEL_8;
        }
        v13 = v46;
        v14 = v48[0];
        v58 = nullptr;
        v59 = 0;
        v57 = v46;
        if ( v48[0] )
        {
          v58 = (void *)qalloc_or_throw();
          v59.m128i_i64[1] = v14;
          memcpy(v58, v47, v14);
          v59.m128i_i64[0] = v14;
        }
        v15 = v50[0];
        v60 = nullptr;
        v61 = 0;
        if ( v50[0] )
        {
          v60 = (void *)qalloc_or_throw();
          v61.m128i_i64[1] = v15;
          memcpy(v60, v49, v15);
          v61.m128i_i64[0] = v15;
        }
        v16 = n[0];
        v62 = nullptr;
        v63 = 0;
        if ( n[0] )
        {
          v62 = (void *)qalloc_or_throw();
          v63.m128i_i64[1] = v16;
          memcpy(v62, src, v16);
          v63.m128i_i64[0] = v16;
        }
        v17 = v53;
        v18 = *(_QWORD *)(a2 + 16);
        v19 = v54;
        v20 = *(_QWORD *)(a2 + 8);
        v21 = _mm_load_si128(&v55);
        v64 = v53;
        v22 = v56;
        v65 = v54;
        v66 = v21;
        v67 = v56;
        if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v18 + 1) )
        {
          v34 = v54;
          v33 = v53;
          v31 = qvector_reserve();
          *(_QWORD *)(a2 + 8) = v31;
          v20 = v31;
          v19 = v34;
          v18 = *(_QWORD *)(a2 + 16);
          v17 = v33;
        }
        v23 = v20 + 120 * v18;
        v24 = v58;
        *(__m128i *)(v23 + 16) = _mm_load_si128(&v59);
        v25 = _mm_loadu_si128(&v61);
        *(_QWORD *)(v23 + 8) = v24;
        v26 = v60;
        *(__m128i *)(v23 + 40) = v25;
        v27 = _mm_load_si128(&v63);
        *(_QWORD *)(v23 + 32) = v26;
        v28 = v62;
        *(_QWORD *)v23 = v13;
        *(_QWORD *)(v23 + 56) = v28;
        v29 = src;
        *(__m128i *)(v23 + 64) = v27;
        v30 = _mm_load_si128(&v66);
        *(_QWORD *)(v23 + 80) = v17;
        *(_BYTE *)(v23 + 88) = v19;
        *(_BYTE *)(v23 + 112) = v22;
        *(__m128i *)(v23 + 96) = v30;
        ++*(_QWORD *)(a2 + 16);
        if ( v29 )
        {
          n[0] = 0;
          qfree();
        }
        if ( v49 )
        {
          v50[0] = 0;
          qfree();
        }
        if ( v47 )
        {
          v48[0] = 0;
          qfree();
        }
      }
      sub_43EB0((__int64)&v40);
      goto LABEL_35;
    }
LABEL_8:
    sub_43EB0((__int64)&v40);
LABEL_9:
    v10 = 0;
    goto LABEL_10;
  }
LABEL_35:
  v10 = 1;
LABEL_10:
  sub_44B80((_QWORD **)&v36);
  sub_43FA0((__int64)v39);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  qmutex_unlock();
  return v10;
}

