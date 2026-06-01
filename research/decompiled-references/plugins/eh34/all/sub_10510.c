void **__fastcall sub_10510(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        size_t a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v9; // r12
  __int64 v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __int64 v14; // r13
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rbx
  void **v22; // rax
  void *v23; // rcx
  void *v24; // r14
  void *i; // r12
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rdi
  bool v32; // zf
  void **v33; // rax
  __int64 v35; // rbx
  void **v36; // rsi
  __m128 v37; // xmm0
  __int64 v38; // rdx
  void **v39; // rax
  void **v40; // rdx
  __m128i v41; // xmm0
  void **v42; // rax
  void **v43; // rdx
  __m128i v44; // xmm0
  __int64 v45; // [rsp+0h] [rbp-140h]
  __int64 v46; // [rsp+8h] [rbp-138h]
  __m128i v47; // [rsp+10h] [rbp-130h] BYREF
  __m128i v48; // [rsp+20h] [rbp-120h] BYREF
  __m128i v49; // [rsp+30h] [rbp-110h] BYREF
  __int64 v50; // [rsp+40h] [rbp-100h]
  __int64 v51; // [rsp+48h] [rbp-F8h]
  size_t n; // [rsp+50h] [rbp-F0h]
  void **v53; // [rsp+58h] [rbp-E8h]
  void *v54; // [rsp+60h] [rbp-E0h] BYREF
  __m128i v55; // [rsp+68h] [rbp-D8h] BYREF
  char v56; // [rsp+78h] [rbp-C8h]
  void *v57; // [rsp+80h] [rbp-C0h] BYREF
  __m128i v58; // [rsp+88h] [rbp-B8h] BYREF
  char v59; // [rsp+98h] [rbp-A8h]
  void *v60; // [rsp+A0h] [rbp-A0h] BYREF
  __int128 v61; // [rsp+A8h] [rbp-98h]
  __int64 v62; // [rsp+B8h] [rbp-88h]
  int v63; // [rsp+C0h] [rbp-80h]
  void *src; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-68h]
  double v66[3]; // [rsp+E0h] [rbp-60h] BYREF
  char v67; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v68; // [rsp+108h] [rbp-38h]

  v9 = a5;
  v53 = a1;
  n = a6;
  v51 = a7;
  v68 = __readfsqword(0x28u);
  sub_5FF80(a2, a5, a8);
  *(_BYTE *)(a2 + 138) = *(_BYTE *)(a4 + 1);
  *(_QWORD *)(a2 + 120) = a2 + 592;
  v50 = a2 + 592;
  *(_QWORD *)(a2 + 304) = *(_QWORD *)a3;
  *(__m128i *)(a2 + 312) = _mm_loadu_si128((const __m128i *)(a3 + 8));
  *(_QWORD *)(a2 + 328) = *(_QWORD *)(a3 + 24);
  *(_BYTE *)(a2 + 336) = *(_BYTE *)(a3 + 32);
  *(_BYTE *)(a2 + 337) = *(_BYTE *)(a3 + 33);
  *(_BYTE *)(a2 + 338) = *(_BYTE *)(a3 + 34);
  *(_BYTE *)(a2 + 339) = *(_BYTE *)(a3 + 35);
  *(_BYTE *)(a2 + 340) = *(_BYTE *)(a3 + 36);
  *(_BYTE *)(a2 + 341) = *(_BYTE *)(a3 + 37);
  v11 = *(_QWORD *)(a3 + 40);
  v12 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  *(_QWORD *)(a3 + 40) = 0;
  *(_OWORD *)(a3 + 48) = 0;
  v13 = *(_QWORD *)(a2 + 344);
  if ( v13 )
  {
    *(_QWORD *)(a2 + 352) = 0;
    v49 = v12;
    qfree(v13);
    v12 = _mm_load_si128(&v49);
  }
  *(_QWORD *)(a2 + 344) = v11;
  *(__m128i *)(a2 + 352) = v12;
  *(__m128i *)(a2 + 368) = _mm_loadu_si128((const __m128i *)(a3 + 64));
  *(__m128i *)(a2 + 384) = _mm_loadu_si128((const __m128i *)(a3 + 80));
  *(__m128i *)(a2 + 400) = _mm_loadu_si128((const __m128i *)(a3 + 96));
  *(__m128i *)(a2 + 416) = _mm_loadu_si128((const __m128i *)(a3 + 112));
  *(_QWORD *)(a2 + 432) = *(_QWORD *)(a3 + 128);
  *(_BYTE *)(a2 + 440) = *(_BYTE *)(a3 + 136);
  *(_QWORD *)(a2 + 448) = *(_QWORD *)(a3 + 144);
  v14 = *(_QWORD *)(a3 + 152);
  v15 = _mm_loadu_si128((const __m128i *)(a3 + 160));
  *(_QWORD *)(a3 + 152) = 0;
  *(_OWORD *)(a3 + 160) = 0;
  v16 = *(_QWORD *)(a2 + 456);
  if ( v16 )
  {
    *(_QWORD *)(a2 + 464) = 0;
    v49 = v15;
    qfree(v16);
    v15 = _mm_load_si128(&v49);
  }
  *(_QWORD *)(a2 + 456) = v14;
  *(__m128i *)(a2 + 464) = v15;
  v17 = *(_QWORD *)(a3 + 176);
  v18 = _mm_loadu_si128((const __m128i *)(a3 + 184));
  *(_QWORD *)(a3 + 176) = 0;
  *(_OWORD *)(a3 + 184) = 0;
  v19 = *(_QWORD *)(a2 + 480);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a2 + 488);
    if ( v20 )
    {
      v49.m128i_i64[0] = v17;
      v45 = v9;
      v47.m128i_i64[0] = (__int64)v53;
      v46 = a3;
      v21 = 0;
      v48 = v18;
      do
      {
        v22 = (void **)(v19 + 40 * v21);
        v23 = v22[2];
        if ( v23 )
        {
          v24 = v22[3];
          if ( v24 )
          {
            v53 = (void **)(v19 + 40 * v21);
            for ( i = nullptr; i != v24; i = (char *)i + 1 )
            {
              v26 = (__int64)v23 + 72 * (_QWORD)i;
              v27 = *(_QWORD *)(v26 + 32);
              if ( v27 )
              {
                *(_QWORD *)(v26 + 40) = 0;
                qfree(v27);
                v23 = v53[2];
              }
            }
            v22 = v53;
          }
          v22[3] = nullptr;
          qfree(v23);
          v19 = *(_QWORD *)(a2 + 480);
        }
        ++v21;
      }
      while ( v20 != v21 );
      v17 = v49.m128i_i64[0];
      v18 = _mm_load_si128(&v48);
      a3 = v46;
      v53 = (void **)v47.m128i_i64[0];
      v9 = v45;
    }
    *(_QWORD *)(a2 + 488) = 0;
    v49.m128i_i64[0] = v17;
    v48 = v18;
    qfree(v19);
    v18 = _mm_load_si128(&v48);
    v17 = v49.m128i_i64[0];
  }
  *(_QWORD *)(a2 + 480) = v17;
  *(__m128i *)(a2 + 488) = v18;
  v28 = *(_QWORD *)(a3 + 200);
  v29 = _mm_loadu_si128((const __m128i *)(a3 + 208));
  *(_QWORD *)(a3 + 200) = 0;
  v30 = *(_QWORD *)(a3 + 208);
  *(_OWORD *)(a3 + 208) = 0;
  v31 = *(_QWORD *)(a2 + 504);
  if ( v31 )
  {
    *(_QWORD *)(a2 + 512) = 0;
    v48.m128i_i64[0] = v30;
    v49.m128i_i64[0] = v28;
    v47 = v29;
    qfree(v31);
    v29 = _mm_load_si128(&v47);
    v30 = v48.m128i_i64[0];
    v28 = v49.m128i_i64[0];
  }
  *(_QWORD *)(a2 + 504) = v28;
  v32 = *(_QWORD *)(a2 + 464) == 0;
  *(__m128i *)(a2 + 512) = v29;
  *(_BYTE *)(a2 + 528) = *(_BYTE *)(a3 + 224);
  *(__m128i *)(a2 + 536) = _mm_loadu_si128((const __m128i *)(a3 + 232));
  *(__m128i *)(a2 + 548) = _mm_loadu_si128((const __m128i *)(a3 + 244));
  *(_QWORD *)(a2 + 568) = *(_QWORD *)(a3 + 264);
  *(_DWORD *)(a2 + 576) = *(_DWORD *)(a3 + 272);
  *(_BYTE *)(a2 + 584) = *(_BYTE *)(a3 + 280);
  if ( !v32 && v30 )
  {
    sub_5FFF0(a2, n, v51);
    sub_2FE60(&src, *(_QWORD *)(a2 + 176));
    v35 = v65;
    if ( !v67 )
    {
      v60 = nullptr;
      v61 = 0;
      if ( v65 )
      {
        n = 16 * v65;
        v60 = (void *)qalloc_or_throw(16 * v65);
        *((_QWORD *)&v61 + 1) = v35;
        memcpy(v60, src, n);
        *(_QWORD *)&v61 = v35;
      }
      v63 = -1;
      v38 = *(_QWORD *)(a2 + 176);
      v62 = 0;
      sub_271A0((unsigned int)&v54, v50, v38, 0, (unsigned int)&v60, a2 + 336, a2 + 440, -1);
      if ( v56 )
      {
        v40 = v53;
        v41 = _mm_loadu_si128(&v55);
        *v53 = v54;
        *((_BYTE *)v40 + 24) = 1;
        *(__m128i *)(v40 + 1) = v41;
      }
      else if ( (_BYTE)v54 )
      {
        sub_ECE0((__int64)&v57, a2, v9, 1);
        if ( v59 )
        {
          v43 = v53;
          v44 = _mm_loadu_si128(&v58);
          *v53 = v57;
          *((_BYTE *)v43 + 24) = 1;
          *(__m128i *)(v43 + 1) = v44;
        }
        else
        {
          v42 = v53;
          *(_BYTE *)v53 = 1;
          *((_BYTE *)v42 + 24) = 0;
        }
        if ( v56 && v54 )
        {
          v55.m128i_i64[0] = 0;
          qfree(v54);
        }
      }
      else
      {
        v39 = v53;
        *(_BYTE *)v53 = 0;
        *((_BYTE *)v39 + 24) = 0;
      }
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree(v60);
      }
      if ( v67 )
      {
        if ( !src )
          return v53;
      }
      else if ( !src )
      {
        return v53;
      }
      v65 = 0;
      qfree(src);
      return v53;
    }
    v36 = v53;
    v37 = _mm_loadh_ps(v66);
    *v53 = src;
    *((_BYTE *)v36 + 24) = 1;
    *(__m128 *)(v36 + 1) = v37;
  }
  else
  {
    v33 = v53;
    *(_BYTE *)v53 = 0;
    *((_BYTE *)v33 + 24) = 0;
  }
  return v53;
}
