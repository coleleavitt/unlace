unsigned __int64 __fastcall sub_28700(__int64 *a1, char *a2)
{
  void *v2; // r13
  __int64 v4; // rax
  size_t v5; // r12
  char v7; // r15
  size_t v8; // r8
  void *v9; // r14
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // r14
  const char *v17; // rsi
  _QWORD *v18; // r13
  const char *v19; // rdi
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  const char *v24; // rsi
  const char *v25; // rdi
  __int64 *v26; // rdx
  unsigned __int64 v27; // rax
  __int64 *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v32; // rax
  int v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  _QWORD *v35; // [rsp+8h] [rbp-60h]
  int na; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+10h] [rbp-58h]
  size_t v38; // [rsp+18h] [rbp-50h]
  unsigned __int64 *v39; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v2 = nullptr;
  v4 = a1[1];
  v5 = *((_QWORD *)a2 + 3);
  v40 = __readfsqword(0x28u);
  v7 = *a2;
  v33 = v4;
  v34 = *((_QWORD *)a2 + 1);
  if ( v5 )
  {
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *((const void **)a2 + 2), v5);
  }
  v8 = *((_QWORD *)a2 + 6);
  v9 = nullptr;
  if ( v8 )
  {
    n = *((_QWORD *)a2 + 6);
    v9 = (void *)qalloc_or_throw();
    memcpy(v9, *((const void **)a2 + 5), n);
    v8 = n;
  }
  v10 = a1[1];
  v11 = *((_DWORD *)a2 + 16);
  v12 = *a1;
  if ( a1[2] < (unsigned __int64)(v10 + 1) )
  {
    v38 = v8;
    na = v11;
    v32 = qvector_reserve();
    v10 = a1[1];
    v8 = v38;
    *a1 = v32;
    v12 = v32;
    v11 = na;
  }
  v13 = v12 + 72 * v10;
  *(__m128i *)(v13 + 24) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  *(_BYTE *)v13 = v7;
  *(_QWORD *)(v13 + 8) = v34;
  *(_QWORD *)(v13 + 16) = v2;
  *(_QWORD *)(v13 + 40) = v9;
  *(_DWORD *)(v13 + 64) = v11;
  *(__m128i *)(v13 + 48) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  v14 = (_QWORD *)a1[5];
  ++a1[1];
  v15 = a1 + 4;
  v35 = a1 + 4;
  if ( !v14 )
    goto LABEL_25;
  v16 = *((_QWORD *)a2 + 3);
  v15 = a1 + 4;
  while ( 1 )
  {
    v22 = v14[5];
    if ( !v16 )
      break;
    v17 = *((const char **)a2 + 2);
    v18 = v14;
    v19 = nptr;
    if ( v22 )
      goto LABEL_10;
LABEL_11:
    v20 = strcmp(v19, v17);
    v21 = (_QWORD *)v14[2];
    v14 = (_QWORD *)v14[3];
    if ( v20 >= 0 )
    {
      v15 = v18;
      v14 = v21;
    }
    if ( !v14 )
      goto LABEL_20;
  }
  if ( v22 )
  {
LABEL_18:
    v17 = nptr;
LABEL_10:
    v19 = (const char *)v14[4];
    v18 = v14;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v23 = v14[2];
    if ( !v23 )
      break;
    v15 = v14;
    v14 = (_QWORD *)v14[2];
    if ( *(_QWORD *)(v23 + 40) )
      goto LABEL_18;
  }
  v15 = v14;
LABEL_20:
  if ( v35 == v15 )
    goto LABEL_25;
  if ( v15[5] )
  {
    v24 = (const char *)v15[4];
    v25 = nptr;
    if ( v16 )
      goto LABEL_23;
LABEL_24:
    if ( strcmp(v25, v24) < 0 )
    {
LABEL_25:
      v39 = (unsigned __int64 *)(a2 + 16);
      v15 = sub_285A0(a1 + 3, v15, (__int64 *)&v39);
    }
  }
  else
  {
    v24 = nptr;
    if ( v16 )
    {
LABEL_23:
      v25 = *((const char **)a2 + 2);
      goto LABEL_24;
    }
  }
  *((_DWORD *)v15 + 14) = v33;
  v26 = (__int64 *)a1[11];
  if ( !v26 )
  {
    v28 = a1 + 10;
LABEL_35:
    v39 = (unsigned __int64 *)(a2 + 8);
    v28 = sub_16E80(a1 + 9, v28, &v39);
    goto LABEL_33;
  }
  v27 = *((_QWORD *)a2 + 1);
  v28 = a1 + 10;
  do
  {
    while ( 1 )
    {
      v29 = v26[2];
      v30 = v26[3];
      if ( v26[4] >= v27 )
        break;
      v26 = (__int64 *)v26[3];
      if ( !v30 )
        goto LABEL_31;
    }
    v28 = v26;
    v26 = (__int64 *)v26[2];
  }
  while ( v29 );
LABEL_31:
  if ( a1 + 10 == v28 || v27 < v28[4] )
    goto LABEL_35;
LABEL_33:
  *((_DWORD *)v28 + 10) = v33;
  return v40 - __readfsqword(0x28u);
}

