unsigned __int64 __fastcall sub_28EE0(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rbp
  __int64 v6; // r14
  __int64 *v7; // r14
  const char *v8; // r12
  char *v9; // rax
  char *v10; // rbp
  __int16 v11; // r15
  char v12; // dl
  char *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v17; // rdi
  char *v18; // rax
  signed __int64 v19; // rax
  unsigned __int64 v20; // r8
  size_t v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r12
  const char *v26; // rsi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rbp
  char *v30; // rdi
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // r12
  char *v34; // rdi
  __int64 v35; // rbp
  char *v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm0
  char *v39; // rdi
  char *v40; // r15
  __int64 v41; // r12
  __int64 v42; // rbp
  const char *v43; // rdi
  unsigned __int64 v44; // rbp
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rbx
  char *v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // [rsp+8h] [rbp-A0h]
  signed __int64 v51; // [rsp+8h] [rbp-A0h]
  _QWORD *v52; // [rsp+10h] [rbp-98h] BYREF
  __int128 v53; // [rsp+18h] [rbp-90h]
  char *v54; // [rsp+30h] [rbp-78h] BYREF
  __int128 v55; // [rsp+38h] [rbp-70h]
  char *endptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v57; // [rsp+58h] [rbp-50h]
  unsigned __int64 v58; // [rsp+68h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
  {
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree();
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v17 = *(_QWORD *)(a1 + 32);
    *(_WORD *)(a1 + 24) = 0;
    if ( v17 )
    {
      *(_QWORD *)(a1 + 40) = 0;
      qfree();
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)(a1 + 64) = 0;
      qfree();
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 72) = 0;
    }
  }
  if ( a2[1] <= 1u )
    return v58 - __readfsqword(0x28u);
  v53 = 0;
  v52 = nullptr;
  sub_28A90(a2, (__int64 *)&v52, "@", 0);
  v4 = v53;
  v5 = v52;
  if ( (unsigned __int64)v53 > 2 )
  {
    if ( !v52 )
      return v58 - __readfsqword(0x28u);
    goto LABEL_18;
  }
  v6 = 0;
  if ( (_QWORD)v53 != 2 )
    goto LABEL_5;
  if ( v52[1] <= 1u )
    goto LABEL_16;
  v57 = 0;
  endptr = nullptr;
  sub_28A90(v52, (__int64 *)&endptr, ":", 0);
  v29 = v57;
  v30 = endptr;
  if ( (unsigned __int64)v57 > 2 )
  {
    if ( endptr )
    {
      v47 = 0;
      do
      {
        v48 = &v30[24 * v47];
        if ( *(_QWORD *)v48 )
        {
          *((_QWORD *)v48 + 1) = 0;
          qfree();
          v30 = endptr;
        }
        ++v47;
      }
      while ( v29 != v47 );
      *(_QWORD *)&v57 = 0;
      qfree();
    }
    goto LABEL_15;
  }
  v31 = *(_QWORD *)(a1 + 32);
  v32 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  *(_QWORD *)(a1 + 32) = *(_QWORD *)endptr;
  *(_QWORD *)(a1 + 40) = *((_QWORD *)v30 + 1);
  *(_QWORD *)(a1 + 48) = *((_QWORD *)v30 + 2);
  *(_QWORD *)v30 = v31;
  *(__m128i *)(v30 + 8) = v32;
  v33 = v57;
  v34 = endptr;
  if ( (_QWORD)v57 == 2 )
  {
    v37 = *(_QWORD *)(a1 + 56);
    v38 = _mm_loadu_si128((const __m128i *)(a1 + 64));
    *(_QWORD *)(a1 + 56) = *((_QWORD *)endptr + 3);
    *(_QWORD *)(a1 + 64) = *((_QWORD *)v34 + 4);
    *(_QWORD *)(a1 + 72) = *((_QWORD *)v34 + 5);
    *((_QWORD *)v34 + 3) = v37;
    *((__m128i *)v34 + 2) = v38;
    if ( !v34 )
      goto LABEL_60;
    goto LABEL_55;
  }
  if ( endptr )
  {
    if ( !(_QWORD)v57 )
    {
LABEL_59:
      *(_QWORD *)&v57 = 0;
      qfree();
      goto LABEL_60;
    }
LABEL_55:
    v35 = 0;
    do
    {
      v36 = &v34[24 * v35];
      if ( *(_QWORD *)v36 )
      {
        *((_QWORD *)v36 + 1) = 0;
        qfree();
      }
      ++v35;
      v34 = endptr;
    }
    while ( v33 != v35 );
    goto LABEL_59;
  }
LABEL_60:
  v5 = v52;
  v6 = 3;
LABEL_5:
  v54 = nullptr;
  v7 = &v5[v6];
  v55 = 0;
  if ( !v7[1] )
  {
    v8 = s;
    goto LABEL_7;
  }
  v8 = (const char *)*v7;
  if ( *(_BYTE *)*v7 != 91 )
  {
    if ( !strncasecmp((const char *)*v7, "::ffff:", 7u) && strchr(v8, 46) )
      v8 += 7;
LABEL_7:
    v9 = strchr(v8, 58);
    if ( !v9 )
    {
LABEL_49:
      v27 = *(_QWORD *)a1;
      v28 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      *(_QWORD *)a1 = *v7;
      *(_QWORD *)(a1 + 8) = v7[1];
      *(_QWORD *)(a1 + 16) = v7[2];
      *v7 = v27;
      *(__m128i *)(v7 + 1) = v28;
LABEL_13:
      if ( v54 )
        qfree();
LABEL_15:
      v5 = v52;
      goto LABEL_16;
    }
    goto LABEL_8;
  }
  v18 = strchr((const char *)*v7, 93);
  if ( v18 && v18 != v8 + 1 )
  {
    endptr = nullptr;
    v19 = v18 - v8;
    v20 = v19;
    v57 = 0;
    v21 = v19 - 1;
    if ( v19 == 1 )
    {
      v55 = 0u;
    }
    else
    {
      v39 = nullptr;
      if ( v19 )
      {
        v51 = v19;
        endptr = (char *)qvector_reserve();
        v20 = v51;
        v39 = endptr;
      }
      *(_QWORD *)&v57 = v20;
      v50 = v20;
      memmove(v39, v8 + 1, v21);
      v20 = v50;
      endptr[v50 - 1] = 0;
      v40 = endptr;
      v41 = v57;
      endptr = nullptr;
      v42 = *((_QWORD *)&v57 + 1);
      v57 = 0;
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree();
        v54 = v40;
        *(_QWORD *)&v55 = v41;
        v20 = v50;
        *((_QWORD *)&v55 + 1) = v42;
        if ( endptr )
        {
          *(_QWORD *)&v57 = 0;
          qfree();
          v20 = v50;
        }
      }
      else
      {
        v54 = v40;
        *(_QWORD *)&v55 = v41;
        *((_QWORD *)&v55 + 1) = v42;
      }
    }
    v22 = v7[1];
    if ( !v22 )
      goto LABEL_47;
    v23 = v22 - 1;
    if ( v22 != 1 && v20 )
    {
      v24 = 1;
      v25 = 0;
      if ( v20 < v23 )
      {
        v25 = v23 - v20;
        v24 = v22 - v20;
        memmove((void *)*v7, (const void *)(*v7 + v20), v23 - v20);
      }
      v26 = (const char *)*v7;
      if ( v7[2] < v24 )
      {
        v49 = qvector_reserve();
        *v7 = v49;
        v26 = (const char *)v49;
      }
      v7[1] = v24;
      v26[v25] = 0;
      if ( !v7[1] )
        goto LABEL_47;
    }
    v9 = (char *)*v7;
    if ( *(_BYTE *)*v7 != 58 || !v9 )
    {
LABEL_47:
      if ( (unsigned __int64)v55 > 1 )
        v7 = (__int64 *)&v54;
      goto LABEL_49;
    }
    v8 = (const char *)*v7;
LABEL_8:
    v10 = v9 + 1;
    v11 = strtoul(v9 + 1, &endptr, 10);
    if ( v10 == endptr )
      goto LABEL_13;
    v12 = *endptr;
    if ( *endptr == 32 )
    {
      v13 = endptr + 1;
      do
      {
        endptr = v13;
        v12 = *v13++;
      }
      while ( v12 == 32 );
    }
    if ( v12 )
      goto LABEL_13;
    v43 = (const char *)*v7;
    v44 = v10 - v8;
    v45 = *v7;
    if ( v44 == 1 )
    {
      if ( v43 )
      {
        v7[1] = 0;
        qfree();
        *v7 = 0;
        v7[2] = 0;
      }
    }
    else
    {
      v46 = v7[1];
      if ( v46 < v44 )
      {
        if ( v7[2] < v44 )
        {
          v45 = qvector_reserve();
          *v7 = v45;
          v46 = v7[1];
        }
        memset((void *)(v45 + v46), 0, v44 - v46);
        v7[1] = v44;
        v43 = (const char *)*v7;
      }
      else if ( v46 != v44 )
      {
        v7[1] = v44;
      }
      v43[v44 - 1] = 0;
    }
    *(_WORD *)(a1 + 24) = v11;
    goto LABEL_47;
  }
LABEL_16:
  if ( v5 )
  {
    v4 = v53;
    if ( !(_QWORD)v53 )
    {
LABEL_22:
      *(_QWORD *)&v53 = 0;
      qfree();
      return v58 - __readfsqword(0x28u);
    }
LABEL_18:
    v14 = 0;
    do
    {
      v15 = &v5[3 * v14];
      if ( *v15 )
      {
        v15[1] = 0;
        qfree();
        v5 = v52;
      }
      ++v14;
    }
    while ( v4 != v14 );
    goto LABEL_22;
  }
  return v58 - __readfsqword(0x28u);
}

