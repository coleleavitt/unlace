unsigned __int64 __fastcall sub_AEA0(__int64 *a1, _BYTE **a2, _BYTE *a3)
{
  _BYTE *v4; // r13
  char v6; // dl
  bool v7; // r15
  _BYTE *v8; // rax
  void *v9; // rbx
  size_t v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r15
  const char *v16; // rdi
  char v17; // bl
  __int64 v18; // rcx
  char *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  char v25; // r12
  void *v26; // r12
  size_t v27; // r15
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int64 v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rdi
  void *v37; // r12
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rdi
  const void **v41; // [rsp+10h] [rbp-98h]
  size_t v42; // [rsp+18h] [rbp-90h]
  __int64 v44; // [rsp+30h] [rbp-78h] BYREF
  __int128 v45; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t v47[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v4 = *a2;
  v48 = __readfsqword(0x28u);
  v6 = *v4;
  while ( 1 )
  {
    v7 = v4 < a3 && v6 == 32;
    if ( v7 )
    {
      v8 = v4;
      do
        v6 = *++v8;
      while ( v8 < a3 && v6 == 32 );
LABEL_6:
      if ( v8 == v4 )
        goto LABEL_13;
      goto LABEL_7;
    }
    v7 = v4 < a3 && v6 == 9;
    if ( !v7 )
      break;
    v8 = v4;
    while ( 1 )
    {
      v6 = *++v8;
      if ( v6 != 9 )
        break;
      if ( v8 >= a3 )
        goto LABEL_6;
    }
    if ( v8 == v4 )
      goto LABEL_13;
LABEL_7:
    v4 = v8;
  }
  v7 = v4 < a3;
LABEL_13:
  v44 = 0;
  src = nullptr;
  v45 = 0;
  *(_OWORD *)v47 = 0;
  src = (void *)qvector_reserve(&src, 0, 3, 1);
  v9 = nullptr;
  v47[0] = 3;
  strcpy((char *)src, " \t");
  v10 = v47[0];
  if ( v47[0] )
  {
    v9 = (void *)qalloc_or_throw(v47[0]);
    memcpy(v9, src, v10);
  }
  v11 = v45;
  v12 = v44;
  if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
  {
    v44 = qvector_reserve(&v44, v44, v45 + 1, 24);
    v11 = v45;
    v12 = v44;
  }
  v13 = v12 + 24 * v11;
  *(_QWORD *)v13 = v9;
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  *(_QWORD *)&v45 = v45 + 1;
  if ( src )
  {
    v47[0] = 0;
    qfree(src);
  }
  if ( v7 )
  {
    while ( 2 )
    {
      v14 = v45;
      v15 = v44;
      ++v4;
      v16 = s1;
      v17 = *(v4 - 1);
      v18 = v44 + 24 * v45 - 24;
      if ( *(_QWORD *)(v18 + 8) )
        v16 = *(const char **)v18;
      v42 = *(_QWORD *)(v18 + 8);
      v41 = (const void **)(v44 + 24 * v45 - 24);
      v19 = strchr(v16, v17);
      if ( v19 && v19 - v16 != -1 )
      {
        if ( v42 )
        {
          v37 = (void *)qalloc_or_throw(v42);
          memcpy(v37, *v41, v42);
          v38 = v45;
          if ( (_QWORD)v45 )
          {
            *(_QWORD *)&v45 = v45 - 1;
            v39 = (__int64 *)(v44 + 24 * (v38 - 1));
            v40 = *v39;
            if ( *v39 )
            {
              v39[1] = 0;
              qfree(v40);
            }
          }
          if ( v37 )
            qfree(v37);
        }
        else
        {
          if ( !v14 )
            goto LABEL_26;
          *(_QWORD *)&v45 = v14 - 1;
          v35 = (__int64 *)(v15 + 24 * (v14 - 1));
          v36 = *v35;
          if ( *v35 )
          {
            v35[1] = 0;
            qfree(v36);
          }
        }
        if ( !(_QWORD)v45 )
          goto LABEL_48;
        goto LABEL_43;
      }
      if ( v17 == 91 )
      {
        v25 = 93;
      }
      else
      {
        if ( v17 != 123 )
        {
          v25 = 41;
          if ( v17 == 40 )
            break;
LABEL_43:
          v31 = a1[1];
          v32 = 2;
          if ( v31 )
            v32 = v31-- + 1;
          v33 = *a1;
          if ( a1[2] < v32 )
          {
            v34 = qvector_reserve(a1, v33, v32, 1);
            *a1 = v34;
            v33 = v34;
          }
          a1[1] = v32;
          *(_BYTE *)(v33 + v31) = v17;
          *(_BYTE *)(*a1 + v31 + 1) = 0;
          if ( a3 == v4 )
            goto LABEL_48;
          continue;
        }
        v25 = 125;
      }
      break;
    }
    *(_OWORD *)v47 = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 2, 1);
    v47[0] = 2;
    *(_BYTE *)src = v25;
    v26 = nullptr;
    *((_BYTE *)src + 1) = 0;
    v27 = v47[0];
    if ( v47[0] )
    {
      v26 = (void *)qalloc_or_throw(v47[0]);
      memcpy(v26, src, v27);
    }
    v28 = v45;
    v29 = v44;
    if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
    {
      v44 = qvector_reserve(&v44, v44, v45 + 1, 24);
      v29 = v44;
      v28 = v45;
    }
    v30 = v29 + 24 * v28;
    *(_QWORD *)v30 = v26;
    *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
    *(_QWORD *)&v45 = v45 + 1;
    if ( src )
    {
      v47[0] = 0;
      qfree(src);
    }
    goto LABEL_43;
  }
LABEL_48:
  v15 = v44;
LABEL_26:
  *a2 = v4;
  if ( v15 )
  {
    v20 = v45;
    if ( (_QWORD)v45 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v15 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23);
          v15 = v44;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v45 = 0;
    qfree(v15);
  }
  return v48 - __readfsqword(0x28u);
}

