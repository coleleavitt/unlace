unsigned __int64 __fastcall sub_1C13E0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // r12
  void *v10; // rdi
  unsigned int *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 **v14; // r9
  __int64 *v15; // r11
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // r9
  __int64 v20; // r11
  __int64 v21; // rax
  unsigned int v22; // eax
  void *v23; // rdi
  char *v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r10
  _QWORD *v29; // rdx
  __int64 v30; // rax
  unsigned int *v31; // rax
  signed int v32; // r8d
  __int64 *v33; // r9
  __int64 v34; // r9
  __int64 i; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned int v43; // eax
  __int64 v44; // r15
  void *v45; // rax
  __int64 *v46; // rax
  unsigned __int64 v47; // xmm0_8
  void *v48; // rax
  const void *v49; // rsi
  void *v50; // rax
  const void *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  void *v54; // rax
  unsigned int v55; // eax
  void *v56; // rax
  const void *v57; // rsi
  void *src; // [rsp+8h] [rbp-80h]
  unsigned int *v59; // [rsp+10h] [rbp-78h]
  __int64 v60; // [rsp+18h] [rbp-70h]
  __int64 v61; // [rsp+20h] [rbp-68h] BYREF
  __int128 v62; // [rsp+28h] [rbp-60h]
  __int64 v63; // [rsp+38h] [rbp-50h]
  unsigned __int64 v64; // [rsp+48h] [rbp-40h]

  v4 = (char *)a2;
  v60 = a3;
  v64 = __readfsqword(0x28u);
  v7 = a2 - (_QWORD)a1;
  if ( a2 - (__int64)a1 <= 64 )
    return v64 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(a4 + 8);
  if ( !a3 )
    goto LABEL_42;
  while ( 2 )
  {
    v59 = &a1[v7 >> 3];
    if ( v8 )
    {
      v50 = (void *)qalloc_or_throw(4 * v8, a2, a3, a4);
      v51 = *(const void **)a4;
      src = v50;
      memcpy(v50, *(const void **)a4, 4 * v8);
      v9 = *(__int64 **)(a4 + 24);
      v54 = (void *)qalloc_or_throw(4 * v8, (__int64)v51, v52, v53);
      v10 = memcpy(v54, src, 4 * v8);
    }
    else
    {
      src = nullptr;
      v9 = *(__int64 **)(a4 + 24);
      v10 = nullptr;
    }
    v11 = a1 + 1;
    v12 = (int)a1[1];
    v13 = *v9 + 24 * v12;
    v14 = (__int64 **)(*v9 + 24LL * (int)*v59);
    v15 = v14[1];
    v16 = *((int *)v4 - 1);
    v17 = 3 * v16;
    v18 = *v9 + 24 * v16;
    if ( *(_QWORD *)(v13 + 8) )
    {
      v17 = *(_QWORD *)(v18 + 8);
      if ( !v15 )
      {
        if ( !v17 )
        {
          v17 = *a1;
          goto LABEL_57;
        }
        v20 = **(_QWORD **)v13;
        v21 = **(_QWORD **)v18;
LABEL_59:
        v17 = *a1;
        v47 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v17)).m128i_u64[0];
        if ( v21 <= v20 )
          goto LABEL_53;
LABEL_57:
        *a1 = v16;
        *((_DWORD *)v4 - 1) = v17;
        goto LABEL_11;
      }
      v19 = *v14;
      v20 = **(_QWORD **)v13;
      v13 = *v19;
      if ( v20 < *v19 )
      {
        if ( !v17 )
          goto LABEL_10;
        v21 = **(_QWORD **)v18;
        if ( v13 < v21 )
          goto LABEL_10;
        goto LABEL_59;
      }
      if ( !v17 || (v46 = *(__int64 **)v18, v20 < *v46) )
      {
        v47 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(*a1)).m128i_u64[0];
LABEL_53:
        *(_QWORD *)a1 = v47;
        goto LABEL_11;
      }
LABEL_62:
      if ( *v19 < *v46 )
      {
        v55 = *a1;
        *a1 = v16;
        *((_DWORD *)v4 - 1) = v55;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( v15 )
    {
      if ( !*(_QWORD *)(v18 + 8) )
      {
        v43 = *a1;
        *a1 = v16;
        *((_DWORD *)v4 - 1) = v43;
        goto LABEL_11;
      }
      v19 = *v14;
      v46 = *(__int64 **)v18;
      goto LABEL_62;
    }
LABEL_10:
    v22 = *a1;
    v13 = (__int64)v59;
    *a1 = *v59;
    *v59 = v22;
LABEL_11:
    if ( v10 )
      qfree((__int64)v10);
    v23 = nullptr;
    if ( v8 )
    {
      v44 = 4 * v8;
      v45 = (void *)qalloc_or_throw(v44, v13, v17, v12);
      v23 = memcpy(v45, src, v44);
    }
    v24 = v4;
    while ( 1 )
    {
      v25 = *v9;
      v26 = (int)*v11;
      v27 = *v9 + 24 * v26;
      v28 = *v9 + 24LL * (int)*a1;
      v29 = *(_QWORD **)(v28 + 8);
      if ( *(_QWORD *)(v27 + 8) )
      {
        if ( v29 )
        {
          v33 = *(__int64 **)v28;
          if ( **(_QWORD **)v27 >= **(_QWORD **)v28 )
          {
LABEL_31:
            v32 = *((_DWORD *)v24 - 1);
            v31 = (unsigned int *)(v24 - 4);
            goto LABEL_21;
          }
          while ( 1 )
          {
            v37 = (int)v11[1];
            ++v11;
            v26 = v37;
            v38 = v25 + 24 * v37;
            if ( !*(_QWORD *)(v38 + 8) )
              break;
            if ( **(_QWORD **)v38 >= *v33 )
              goto LABEL_31;
          }
        }
        else
        {
          do
          {
            v30 = (int)v11[1];
            ++v11;
            v26 = v30;
          }
          while ( *(_QWORD *)(v25 + 24 * v30 + 8) );
        }
      }
      v31 = (unsigned int *)(v24 - 4);
      v32 = *((_DWORD *)v24 - 1);
      v24 -= 4;
      if ( !v29 )
        goto LABEL_26;
      v33 = *(__int64 **)v28;
LABEL_21:
      v34 = *v33;
      for ( i = v25 + 24LL * v32; ; i = v25 + 24 * v36 )
      {
        if ( *(_QWORD *)(i + 8) )
        {
          v29 = *(_QWORD **)i;
          if ( v34 >= *v29 )
            break;
        }
        v36 = (int)*--v31;
        v32 = v36;
      }
      v24 = (char *)v31;
LABEL_26:
      if ( v11 >= v31 )
        break;
      *v11++ = v32;
      *v31 = v26;
    }
    if ( v23 )
      qfree((__int64)v23);
    if ( src )
      qfree((__int64)src);
    v39 = *(_QWORD *)(a4 + 8);
    v61 = 0;
    v62 = 0;
    if ( v39 )
    {
      v48 = (void *)qalloc_or_throw(4 * v39, v26, (__int64)v29, v25);
      v49 = *(const void **)a4;
      *((_QWORD *)&v62 + 1) = v39;
      v61 = (__int64)v48;
      memcpy(v48, v49, 4 * v39);
      *(_QWORD *)&v62 = v39;
    }
    --v60;
    a2 = (__int64)v4;
    v63 = *(_QWORD *)(a4 + 24);
    sub_1C13E0(v11, (__int64)v4, v60, (__int64)&v61);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree(v61);
    }
    v7 = (char *)v11 - (char *)a1;
    if ( (char *)v11 - (char *)a1 > 64 )
    {
      v8 = *(_QWORD *)(a4 + 8);
      v4 = (char *)v11;
      if ( !v60 )
      {
LABEL_42:
        v40 = 0;
        v62 = 0;
        if ( v8 )
        {
          v56 = (void *)qalloc_or_throw(4 * v8, a2, a3, a4);
          v57 = *(const void **)a4;
          *((_QWORD *)&v62 + 1) = v8;
          v40 = (__int64)v56;
          memcpy(v56, v57, 4 * v8);
          *(_QWORD *)&v62 = v8;
        }
        v41 = *(_QWORD *)(a4 + 24);
        v61 = v40;
        v63 = v41;
        sub_1C0FD0((char *)a1, v4, (unsigned __int64)v4, (__int64)&v61);
        if ( v40 )
          qfree(v40);
        return v64 - __readfsqword(0x28u);
      }
      continue;
    }
    return v64 - __readfsqword(0x28u);
  }
}

