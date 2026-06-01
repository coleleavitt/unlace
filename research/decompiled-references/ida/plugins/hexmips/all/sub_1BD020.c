unsigned __int64 __fastcall sub_1BD020(char *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // r12
  void *v10; // rdi
  char *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
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
  __int64 v29; // rdx
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // r8
  __int64 *v33; // r9
  __int64 v34; // r9
  __int64 i; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  void *v40; // rbx
  __int64 v41; // rax
  unsigned int v43; // eax
  void *v44; // rax
  __int64 *v45; // rax
  unsigned __int64 v46; // xmm0_8
  void *v47; // rax
  const void *v48; // rsi
  void *v49; // rax
  unsigned int v50; // edx
  unsigned int v51; // eax
  void *v52; // rax
  const void *v53; // rsi
  void *src; // [rsp+8h] [rbp-80h]
  unsigned int *v55; // [rsp+10h] [rbp-78h]
  __int64 v56; // [rsp+18h] [rbp-70h]
  void *v57; // [rsp+20h] [rbp-68h] BYREF
  __int128 v58; // [rsp+28h] [rbp-60h]
  __int64 v59; // [rsp+38h] [rbp-50h]
  unsigned __int64 v60; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v56 = a3;
  v60 = __readfsqword(0x28u);
  v7 = a2 - a1;
  if ( a2 - a1 <= 64 )
    return v60 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(a4 + 8);
  if ( !a3 )
    goto LABEL_42;
  while ( 2 )
  {
    v55 = (unsigned int *)&a1[4 * (v7 >> 3)];
    if ( v8 )
    {
      src = (void *)qalloc_or_throw();
      memcpy(src, *(const void **)a4, 4 * v8);
      v9 = *(__int64 **)(a4 + 24);
      v49 = (void *)qalloc_or_throw();
      v10 = memcpy(v49, src, 4 * v8);
    }
    else
    {
      src = nullptr;
      v9 = *(__int64 **)(a4 + 24);
      v10 = nullptr;
    }
    v11 = a1 + 4;
    v12 = *((int *)a1 + 1);
    v13 = *v9 + 24 * v12;
    v14 = *v9 + 24LL * (int)*v55;
    v15 = *(_QWORD *)(v14 + 8);
    v16 = *((int *)v4 - 1);
    v17 = *v9 + 24 * v16;
    if ( *(_QWORD *)(v13 + 8) )
    {
      v18 = *(_QWORD *)(v17 + 8);
      if ( !v15 )
      {
        if ( !v18 )
        {
          v50 = *(_DWORD *)a1;
          goto LABEL_57;
        }
        v20 = **(_QWORD **)v13;
        v21 = **(_QWORD **)v17;
LABEL_59:
        v50 = *(_DWORD *)a1;
        v46 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(*(_DWORD *)a1)).m128i_u64[0];
        if ( v21 <= v20 )
          goto LABEL_53;
LABEL_57:
        *(_DWORD *)a1 = v16;
        *((_DWORD *)v4 - 1) = v50;
        goto LABEL_11;
      }
      v19 = *(__int64 **)v14;
      v20 = **(_QWORD **)v13;
      if ( v20 < *v19 )
      {
        if ( !v18 )
          goto LABEL_10;
        v21 = **(_QWORD **)v17;
        if ( *v19 < v21 )
          goto LABEL_10;
        goto LABEL_59;
      }
      if ( !v18 || (v45 = *(__int64 **)v17, v20 < *v45) )
      {
        v46 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(*(_DWORD *)a1)).m128i_u64[0];
LABEL_53:
        *(_QWORD *)a1 = v46;
        goto LABEL_11;
      }
LABEL_62:
      if ( *v19 < *v45 )
      {
        v51 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v16;
        *((_DWORD *)v4 - 1) = v51;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( v15 )
    {
      if ( !*(_QWORD *)(v17 + 8) )
      {
        v43 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v16;
        *((_DWORD *)v4 - 1) = v43;
        goto LABEL_11;
      }
      v19 = *(__int64 **)v14;
      v45 = *(__int64 **)v17;
      goto LABEL_62;
    }
LABEL_10:
    v22 = *(_DWORD *)a1;
    *(_DWORD *)a1 = *v55;
    *v55 = v22;
LABEL_11:
    if ( v10 )
      qfree();
    v23 = nullptr;
    if ( v8 )
    {
      v44 = (void *)qalloc_or_throw();
      v23 = memcpy(v44, src, 4 * v8);
    }
    v24 = v4;
    while ( 1 )
    {
      v25 = *v9;
      v26 = *(int *)v11;
      v27 = *v9 + 24 * v26;
      v28 = *v9 + 24LL * *(int *)a1;
      v29 = *(_QWORD *)(v28 + 8);
      if ( *(_QWORD *)(v27 + 8) )
      {
        if ( v29 )
        {
          v33 = *(__int64 **)v28;
          if ( **(_QWORD **)v27 >= **(_QWORD **)v28 )
          {
LABEL_31:
            v32 = *((unsigned int *)v24 - 1);
            v31 = v24 - 4;
            goto LABEL_21;
          }
          while ( 1 )
          {
            v37 = *((int *)v11 + 1);
            v11 += 4;
            LODWORD(v26) = v37;
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
            v30 = *((int *)v11 + 1);
            v11 += 4;
            LODWORD(v26) = v30;
          }
          while ( *(_QWORD *)(v25 + 24 * v30 + 8) );
        }
      }
      v31 = v24 - 4;
      v32 = *((unsigned int *)v24 - 1);
      v24 -= 4;
      if ( !v29 )
        goto LABEL_26;
      v33 = *(__int64 **)v28;
LABEL_21:
      v34 = *v33;
      for ( i = v25 + 24LL * (int)v32; !*(_QWORD *)(i + 8) || v34 < **(_QWORD **)i; i = v25 + 24 * v36 )
      {
        v36 = *((int *)v31 - 1);
        v31 -= 4;
        v32 = v36;
      }
      v24 = v31;
LABEL_26:
      if ( v11 >= v31 )
        break;
      *(_DWORD *)v11 = v32;
      v11 += 4;
      *(_DWORD *)v31 = v26;
    }
    if ( v23 )
      qfree();
    if ( src )
      qfree();
    v39 = *(_QWORD *)(a4 + 8);
    v57 = nullptr;
    v58 = 0;
    if ( v39 )
    {
      v47 = (void *)qalloc_or_throw();
      v48 = *(const void **)a4;
      *((_QWORD *)&v58 + 1) = v39;
      v57 = v47;
      memcpy(v47, v48, 4 * v39);
      *(_QWORD *)&v58 = v39;
    }
    --v56;
    v59 = *(_QWORD *)(a4 + 24);
    sub_1BD020(v11, v4, v56, &v57, v32);
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    v7 = v11 - a1;
    if ( v11 - a1 > 64 )
    {
      v8 = *(_QWORD *)(a4 + 8);
      v4 = v11;
      if ( !v56 )
      {
LABEL_42:
        v40 = nullptr;
        v58 = 0;
        if ( v8 )
        {
          v52 = (void *)qalloc_or_throw();
          v53 = *(const void **)a4;
          *((_QWORD *)&v58 + 1) = v8;
          v40 = v52;
          memcpy(v52, v53, 4 * v8);
          *(_QWORD *)&v58 = v8;
        }
        v41 = *(_QWORD *)(a4 + 24);
        v57 = v40;
        v59 = v41;
        sub_1BCC10(a1, v4, (unsigned __int64)v4, (__int64)&v57);
        if ( v40 )
          qfree();
        return v60 - __readfsqword(0x28u);
      }
      continue;
    }
    return v60 - __readfsqword(0x28u);
  }
}

