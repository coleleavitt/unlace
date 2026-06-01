unsigned __int64 __fastcall sub_38380(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 i; // rbp
  _QWORD *v14; // rax
  __m128i v15; // xmm3
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // r8
  _QWORD *v25; // r15
  _QWORD *v26; // r12
  _QWORD *v27; // r8
  _QWORD *v28; // rbx
  _QWORD *v29; // rbp
  unsigned __int64 v30; // r13
  __int64 v31; // r10
  _QWORD *v32; // r13
  _QWORD *v33; // r15
  _QWORD *v34; // r14
  _QWORD *v35; // r12
  _QWORD *v36; // rbp
  _QWORD *v37; // rbx
  unsigned __int64 v38; // r8
  size_t v39; // r11
  const void *v40; // r9
  void *v41; // rax
  __int64 v42; // r14
  _QWORD *v43; // rbx
  _QWORD *v44; // rbp
  _QWORD *v45; // rcx
  unsigned __int64 v46; // rax
  void *v47; // rbp
  __m128i v48; // xmm0
  void *v49; // r13
  unsigned __int64 v50; // rdx
  __m128i v51; // xmm0
  void *v52; // r13
  size_t v53; // rbp
  __m128i v54; // xmm0
  _QWORD *v56; // r12
  _QWORD *v57; // r14
  int v58; // eax
  __int64 *v59; // rax
  _QWORD *v60; // r15
  __int64 v61; // rax
  __int64 v62; // rbx
  size_t v63; // rbp
  void *v64; // rax
  _QWORD *v65; // r14
  _QWORD *v66; // rbx
  const void *v67; // r15
  void *v68; // rax
  const void *v69; // r14
  void *v70; // rax
  const void *v71; // r14
  void *v72; // rax
  const void *v73; // r14
  void *v74; // rax
  _QWORD *v75; // r14
  _QWORD *v76; // rbp
  _QWORD *j; // r12
  _QWORD *v78; // r15
  __int64 v79; // rbp
  __int128 v80; // xmm0
  unsigned __int64 v81; // rbx
  __int64 v82; // r13
  __int64 v83; // rdx
  __int64 v84; // r12
  size_t v85; // r15
  void *v86; // rax
  size_t v87; // rbp
  size_t v88; // r13
  __m128i v89; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+18h] [rbp-B0h]
  _QWORD *v91; // [rsp+20h] [rbp-A8h]
  _QWORD *v92; // [rsp+28h] [rbp-A0h]
  _QWORD *v93; // [rsp+30h] [rbp-98h]
  _QWORD *v94; // [rsp+38h] [rbp-90h]
  size_t v95; // [rsp+40h] [rbp-88h]
  const void *v96; // [rsp+48h] [rbp-80h]
  __int64 v97; // [rsp+50h] [rbp-78h]
  __int64 v98; // [rsp+58h] [rbp-70h]
  __int64 v99; // [rsp+68h] [rbp-60h] BYREF
  void *v100[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v101; // [rsp+80h] [rbp-48h]
  unsigned __int64 v102; // [rsp+88h] [rbp-40h]

  v2 = a1;
  v3 = a1 + 828;
  v4 = *(_DWORD *)(a2 + 812);
  v102 = __readfsqword(0x28u);
  v5 = a2;
  *(_DWORD *)(v3 - 16) = v4;
  *(_DWORD *)(v3 - 12) = *(_DWORD *)(a2 + 816);
  *(__m128i *)(v3 - 96) = _mm_loadu_si128((const __m128i *)(a2 + 732));
  *(__m128i *)(v3 - 80) = _mm_loadu_si128((const __m128i *)(a2 + 748));
  *(_QWORD *)(v3 - 64) = *(_QWORD *)(a2 + 764);
  *(__m128i *)(v3 - 56) = _mm_loadu_si128((const __m128i *)(a2 + 772));
  *(_DWORD *)(v3 - 40) = *(_DWORD *)(a2 + 788);
  if ( v3 != a2 + 828 )
  {
    v6 = *(_QWORD *)(a2 + 836);
    if ( v6 > 1 )
    {
      v73 = *(const void **)(a2 + 828);
      v74 = *(void **)(v2 + 828);
      if ( *(_QWORD *)(v2 + 844) < v6 )
      {
        v74 = (void *)qvector_reserve();
        *(_QWORD *)(v2 + 828) = v74;
      }
      *(_QWORD *)(v2 + 836) = v6;
      memmove(v74, v73, v6 - 1);
      *(_BYTE *)(*(_QWORD *)(v2 + 828) + v6 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v2 + 836) = 0;
    }
  }
  if ( v2 + 852 != a2 + 852 )
  {
    v7 = *(_QWORD *)(a2 + 860);
    if ( v7 > 1 )
    {
      v71 = *(const void **)(a2 + 852);
      v72 = *(void **)(v2 + 852);
      if ( *(_QWORD *)(v2 + 868) < v7 )
      {
        v72 = (void *)qvector_reserve();
        *(_QWORD *)(v2 + 852) = v72;
      }
      *(_QWORD *)(v2 + 860) = v7;
      memmove(v72, v71, v7 - 1);
      *(_BYTE *)(*(_QWORD *)(v2 + 852) + v7 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v2 + 860) = 0;
    }
  }
  if ( v2 + 876 != a2 + 876 )
  {
    v8 = *(_QWORD *)(a2 + 884);
    if ( v8 > 1 )
    {
      v69 = *(const void **)(a2 + 876);
      v70 = *(void **)(v2 + 876);
      if ( *(_QWORD *)(v2 + 892) < v8 )
      {
        v70 = (void *)qvector_reserve();
        *(_QWORD *)(v2 + 876) = v70;
      }
      *(_QWORD *)(v2 + 884) = v8;
      memmove(v70, v69, v8 - 1);
      *(_BYTE *)(*(_QWORD *)(v2 + 876) + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v2 + 884) = 0;
    }
  }
  v9 = 0;
  *(_DWORD *)(v2 + 792) = *(_DWORD *)(a2 + 792);
  *(_DWORD *)(v2 + 808) = *(_DWORD *)(a2 + 808);
  v10 = *(_QWORD *)(a2 + 908);
  v89 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  if ( v10 )
  {
    v79 = 0;
    v91 = (_QWORD *)v2;
    v80 = 0;
    v81 = v10;
    v90 = qalloc_or_throw();
    v82 = v90;
    do
    {
      while ( 1 )
      {
        v83 = *(_QWORD *)(a2 + 900);
        *(_QWORD *)v82 = 0;
        *(_OWORD *)(v82 + 8) = v80;
        v84 = v83 + 24 * v79;
        v85 = *(_QWORD *)(v84 + 8);
        if ( v85 )
          break;
        ++v79;
        v82 += 24;
        if ( v81 == v79 )
          goto LABEL_108;
      }
      ++v79;
      v82 += 24;
      v86 = (void *)qalloc_or_throw();
      *(_QWORD *)(v82 - 8) = v85;
      *(_QWORD *)(v82 - 24) = v86;
      memcpy(v86, *(const void **)v84, v85);
      *(_QWORD *)(v82 - 16) = v85;
      v80 = 0;
    }
    while ( v81 != v79 );
LABEL_108:
    v5 = a2;
    v2 = (__int64)v91;
    v9 = v90;
  }
  v11 = *(_QWORD *)(v2 + 900);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v2 + 908);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = (_QWORD *)(v11 + 24 * i);
        if ( *v14 )
        {
          v14[1] = 0;
          qfree();
          v11 = *(_QWORD *)(v2 + 900);
        }
      }
    }
    *(_QWORD *)(v2 + 908) = 0;
    qfree();
  }
  v15 = _mm_load_si128(&v89);
  *(_QWORD *)(v2 + 900) = v9;
  *(__m128i *)(v2 + 908) = v15;
  *(_QWORD *)(v2 + 820) = *(_QWORD *)(v5 + 820);
  if ( v2 + 660 != v5 + 660 )
  {
    v16 = *(_QWORD **)(v2 + 676);
    v17 = *(_QWORD *)(v2 + 692);
    v101 = v2 + 660;
    *(__m128i *)v100 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)v17);
    if ( v16 )
    {
      v16[1] = 0;
      if ( *(_QWORD *)(v17 + 16) )
        v100[1] = *(void **)(v17 + 16);
    }
    else
    {
      v100[1] = nullptr;
    }
    *(_QWORD *)(v2 + 676) = 0;
    *(_QWORD *)(v2 + 684) = v2 + 668;
    *(_QWORD *)(v2 + 692) = v2 + 668;
    *(_QWORD *)(v2 + 700) = 0;
    if ( *(_QWORD *)(v5 + 676) )
    {
      v18 = sub_34C20(*(int **)(v5 + 676), v2 + 668, v100);
      v19 = v18;
      do
      {
        v20 = v19;
        v19 = *(_QWORD *)(v19 + 16);
      }
      while ( v19 );
      *(_QWORD *)(v2 + 684) = v20;
      v21 = v18;
      do
      {
        v22 = v21;
        v21 = *(_QWORD *)(v21 + 24);
      }
      while ( v21 );
      *(_QWORD *)(v2 + 692) = v22;
      v23 = *(_QWORD *)(v5 + 700);
      *(_QWORD *)(v2 + 676) = v18;
      v16 = v100[0];
      *(_QWORD *)(v2 + 700) = v23;
    }
    sub_347B0(v16);
  }
  v91 = (_QWORD *)(v5 + 636);
  v90 = v2 + 636;
  if ( v5 + 636 != v2 + 636 )
  {
    v24 = *(_QWORD **)(v2 + 636);
    v25 = *(_QWORD **)(v5 + 636);
    if ( (_QWORD *)v90 != v24 && v91 != v25 )
    {
      v97 = v2;
      v98 = v5;
      v26 = v24;
      v27 = v25;
      do
      {
        v28 = v27;
        v29 = v26;
        v27 = (_QWORD *)*v27;
        v26 = (_QWORD *)*v26;
        if ( v29 + 2 != v28 + 2 )
        {
          v30 = v28[3];
          if ( v30 > 1 )
          {
            v67 = (const void *)v28[2];
            v68 = (void *)v29[2];
            if ( v29[4] < v30 )
            {
              v89.m128i_i64[0] = (__int64)v27;
              v68 = (void *)qvector_reserve();
              v27 = (_QWORD *)v89.m128i_i64[0];
              v29[2] = v68;
            }
            v29[3] = v30;
            v89.m128i_i64[0] = (__int64)v27;
            memmove(v68, v67, v30 - 1);
            v27 = (_QWORD *)v89.m128i_i64[0];
            *(_BYTE *)(v29[2] + v30 - 1) = 0;
          }
          else
          {
            v29[3] = 0;
          }
        }
        v31 = (__int64)(v28 + 7);
        v32 = v29 + 7;
        v29[5] = v28[5];
        v29[6] = v28[6];
        if ( v28 + 7 != v29 + 7 )
        {
          v33 = (_QWORD *)v29[7];
          v34 = (_QWORD *)v28[7];
          if ( v32 != v33 && (_QWORD *)v31 != v34 )
          {
            v93 = v26;
            v35 = v28 + 7;
            v92 = v27;
            v94 = v29;
            do
            {
              v36 = v34;
              v37 = v33;
              v34 = (_QWORD *)*v34;
              v33 = (_QWORD *)*v33;
              if ( v37 + 2 != v36 + 2 )
              {
                v38 = v36[3];
                if ( !v38 || (v39 = v38 - 1, v38 == 1) )
                {
                  v37[3] = 0;
                }
                else
                {
                  v40 = (const void *)v36[2];
                  v41 = (void *)v37[2];
                  if ( v37[4] < v38 )
                  {
                    v96 = (const void *)v36[2];
                    v95 = v38 - 1;
                    v89.m128i_i64[0] = v38;
                    v41 = (void *)qvector_reserve();
                    v40 = v96;
                    v39 = v95;
                    v37[2] = v41;
                    v38 = v89.m128i_i64[0];
                  }
                  v37[3] = v38;
                  v89.m128i_i64[0] = v38;
                  memmove(v41, v40, v39);
                  *(_BYTE *)(v37[2] + v89.m128i_i64[0] - 1) = 0;
                }
              }
              v37[5] = v36[5];
              *((_DWORD *)v37 + 12) = *((_DWORD *)v36 + 12);
            }
            while ( v32 != v33 && v35 != v34 );
            v31 = (__int64)v35;
            v27 = v92;
            v26 = v93;
            v29 = v94;
          }
          if ( v34 == (_QWORD *)v31 )
          {
            if ( v32 != v33 )
            {
              v65 = v27;
              do
              {
                v66 = v33;
                v33 = (_QWORD *)*v33;
                *(_QWORD *)v66[1] = v33;
                v33[1] = v66[1];
                if ( v66[2] )
                {
                  v66[3] = 0;
                  qfree();
                }
                qfree();
                --v29[9];
              }
              while ( v32 != v33 );
              v27 = v65;
            }
          }
          else
          {
            v93 = v26;
            v56 = v34;
            v57 = v29;
            v92 = v27;
            v89.m128i_i64[0] = v31;
            do
            {
              v60 = v56;
              v56 = (_QWORD *)*v56;
              v61 = qalloc_or_throw();
              *(_QWORD *)(v61 + 16) = 0;
              v62 = v61;
              *(_OWORD *)(v61 + 24) = 0;
              v63 = v60[3];
              if ( v63 )
              {
                v64 = (void *)qalloc_or_throw();
                *(_QWORD *)(v62 + 32) = v63;
                *(_QWORD *)(v62 + 16) = v64;
                memcpy(v64, (const void *)v60[2], v63);
                *(_QWORD *)(v62 + 24) = v63;
              }
              *(_QWORD *)(v62 + 40) = v60[5];
              v58 = *((_DWORD *)v60 + 12);
              *(_QWORD *)v62 = v32;
              *(_DWORD *)(v62 + 48) = v58;
              v59 = (__int64 *)v57[8];
              *(_QWORD *)(v62 + 8) = v59;
              *v59 = v62;
              v57[8] = v62;
              ++v57[9];
            }
            while ( (_QWORD *)v89.m128i_i64[0] != v56 );
            v27 = v92;
            v26 = v93;
          }
        }
      }
      while ( (_QWORD *)v90 != v26 && v91 != v27 );
      v25 = v27;
      v2 = v97;
      v24 = v26;
      v5 = v98;
    }
    if ( v91 == v25 )
    {
      if ( (_QWORD *)v90 != v24 )
      {
        v89.m128i_i64[0] = v5;
        v75 = v24;
        do
        {
          v76 = v75;
          v75 = (_QWORD *)*v75;
          *(_QWORD *)v76[1] = v75;
          v75[1] = v76[1];
          for ( j = (_QWORD *)v76[7]; v76 + 7 != j; --v76[9] )
          {
            v78 = j;
            j = (_QWORD *)*j;
            *(_QWORD *)v78[1] = j;
            j[1] = v78[1];
            if ( v78[2] )
            {
              v78[3] = 0;
              qfree();
            }
            qfree();
          }
          if ( v76[2] )
          {
            v76[3] = 0;
            qfree();
          }
          qfree();
          --*(_QWORD *)(v2 + 652);
        }
        while ( (_QWORD *)v90 != v75 );
        v5 = v89.m128i_i64[0];
      }
    }
    else
    {
      v89.m128i_i64[0] = v2;
      v42 = v90;
      v43 = v25;
      v44 = v91;
      do
      {
        v45 = v43;
        v43 = (_QWORD *)*v43;
        v99 = v42;
        sub_38000(v100, v42, &v99, (__int64)(v45 + 2));
      }
      while ( v44 != v43 );
      v2 = v89.m128i_i64[0];
    }
  }
  v46 = *(_QWORD *)(v5 + 716);
  v47 = nullptr;
  v48 = _mm_unpacklo_epi64((__m128i)v46, (__m128i)v46);
  if ( v46 )
  {
    v89 = v48;
    v88 = 20 * v46;
    v47 = (void *)qalloc_or_throw();
    memcpy(v47, *(const void **)(v5 + 708), v88);
    v48 = _mm_load_si128(&v89);
  }
  if ( *(_QWORD *)(v2 + 708) )
  {
    *(_QWORD *)(v2 + 716) = 0;
    v89 = v48;
    qfree();
    v48 = _mm_load_si128(&v89);
  }
  *(__m128i *)(v2 + 716) = v48;
  v49 = nullptr;
  *(_QWORD *)(v2 + 708) = v47;
  *(_QWORD *)v2 = 0;
  v50 = *(_QWORD *)(v5 + 24);
  v51 = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
  if ( v50 )
  {
    v89 = v51;
    v87 = 32 * v50;
    v49 = (void *)qalloc_or_throw();
    memcpy(v49, *(const void **)(v5 + 16), v87);
    v51 = _mm_load_si128(&v89);
  }
  if ( *(_QWORD *)(v2 + 16) )
  {
    *(_QWORD *)(v2 + 24) = 0;
    v89 = v51;
    qfree();
    v51 = _mm_load_si128(&v89);
  }
  *(_QWORD *)(v2 + 16) = v49;
  v52 = nullptr;
  *(__m128i *)(v2 + 24) = v51;
  *(__m128i *)(v2 + 40) = _mm_loadu_si128((const __m128i *)(v5 + 40));
  *(__m128i *)(v2 + 56) = _mm_loadu_si128((const __m128i *)(v5 + 56));
  *(_QWORD *)(v2 + 72) = *(_QWORD *)(v5 + 72);
  *(__m128i *)(v2 + 80) = _mm_loadu_si128((const __m128i *)(v5 + 80));
  *(__m128i *)(v2 + 96) = _mm_loadu_si128((const __m128i *)(v5 + 96));
  *(__m128i *)(v2 + 112) = _mm_loadu_si128((const __m128i *)(v5 + 112));
  *(__m128i *)(v2 + 128) = _mm_loadu_si128((const __m128i *)(v5 + 128));
  *(__m128i *)(v2 + 144) = _mm_loadu_si128((const __m128i *)(v5 + 144));
  *(__m128i *)(v2 + 160) = _mm_loadu_si128((const __m128i *)(v5 + 160));
  *(__m128i *)(v2 + 176) = _mm_loadu_si128((const __m128i *)(v5 + 176));
  *(__m128i *)(v2 + 192) = _mm_loadu_si128((const __m128i *)(v5 + 192));
  *(__m128i *)(v2 + 208) = _mm_loadu_si128((const __m128i *)(v5 + 208));
  *(__m128i *)(v2 + 224) = _mm_loadu_si128((const __m128i *)(v5 + 224));
  *(__m128i *)(v2 + 240) = _mm_loadu_si128((const __m128i *)(v5 + 240));
  *(__m128i *)(v2 + 256) = _mm_loadu_si128((const __m128i *)(v5 + 256));
  *(__m128i *)(v2 + 272) = _mm_loadu_si128((const __m128i *)(v5 + 272));
  *(__m128i *)(v2 + 288) = _mm_loadu_si128((const __m128i *)(v5 + 288));
  *(__m128i *)(v2 + 304) = _mm_loadu_si128((const __m128i *)(v5 + 304));
  *(_QWORD *)(v2 + 320) = *(_QWORD *)(v5 + 320);
  qmemcpy((void *)(v2 + 328), (const void *)(v5 + 328), 0x119u);
  v53 = *(_QWORD *)(v5 + 620);
  v54 = _mm_unpacklo_epi64((__m128i)v53, (__m128i)v53);
  if ( v53 )
  {
    v89 = v54;
    v52 = (void *)qalloc_or_throw();
    memcpy(v52, *(const void **)(v5 + 612), v53);
    v54 = _mm_load_si128(&v89);
  }
  if ( *(_QWORD *)(v2 + 612) )
  {
    *(_QWORD *)(v2 + 620) = 0;
    v89 = v54;
    qfree();
    v54 = _mm_load_si128(&v89);
  }
  *(_QWORD *)(v2 + 612) = v52;
  *(__m128i *)(v2 + 620) = v54;
  *(_QWORD *)(v2 + 800) = *(_QWORD *)(v5 + 800);
  *(_DWORD *)(v2 + 796) = *(_DWORD *)(v5 + 796) + 1;
  return v102 - __readfsqword(0x28u);
}

