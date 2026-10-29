unsigned __int64 __fastcall sub_23AFF0(__int64 a1, __int64 *a2, int a3, double a4)
{
  __int64 v6; // rcx
  __int64 v8; // r14
  char v9; // al
  char v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __m128i v15; // xmm0
  unsigned __int64 *v16; // rax
  __int64 *v17; // rax
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // rdx
  unsigned __int64 *v23; // rcx
  unsigned __int64 *v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // r15
  _DWORD *v27; // rdi
  int v28; // eax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // xmm0
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  __m128i v37; // xmm0
  char i; // dl
  bool v39; // cc
  _BYTE *v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r8
  _QWORD *exception; // rdi
  unsigned __int64 v44; // [rsp+8h] [rbp-70h]
  __int64 *v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+28h] [rbp-50h] BYREF
  signed __int64 v47; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v48 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v6 + 432) + 104LL * a3;
  v9 = sub_1C34E0(v8, &v46, &v47, *(_DWORD *)(v8 + 88), a4);
  if ( !v9 )
  {
    if ( !under_debugger )
      sub_383060(0xCC37u, a4);
    goto LABEL_84;
  }
  v10 = v9;
  v11 = sub_18D080(*(_QWORD *)(a1 + 8));
  if ( v46 < v11 && (*(_BYTE *)(a1 + 136) & 1) == 0 )
  {
    if ( (*(_BYTE *)(v8 + 25) & 4) != 0 )
      return v48 - __readfsqword(0x28u);
    if ( !under_debugger )
      sub_383060(0xCC61u, a4);
LABEL_84:
    BUG();
  }
  if ( a2[1] )
  {
    v19 = (unsigned __int64 *)*a2;
    if ( *a2 )
    {
      v20 = *v19;
      v21 = *v19 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v21 )
      {
        v22 = nullptr;
        if ( v46 >= 0 )
          goto LABEL_25;
        v22 = (unsigned __int64 *)v19[1];
        if ( !v22 )
          goto LABEL_25;
        v22 = nullptr;
LABEL_51:
        v20 = *v22;
        goto LABEL_20;
      }
      v22 = (unsigned __int64 *)*a2;
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_20;
      v33 = *(_QWORD *)(v21 + 8);
      v34 = *(_QWORD *)(v21 + 16);
      if ( v46 > *(_QWORD *)(v21 + 24) )
        goto LABEL_41;
LABEL_38:
      v22 = (unsigned __int64 *)v21;
      while ( (*(_BYTE *)v33 & 2) == 0 )
      {
        v21 = v33;
        v33 = *(_QWORD *)(v33 + 8);
        v34 = *(_QWORD *)(v21 + 16);
        if ( v46 <= *(_QWORD *)(v21 + 24) )
          goto LABEL_38;
LABEL_41:
        v33 = v34;
      }
      if ( v19 != v22 )
      {
        if ( v46 >= (__int64)v22[3] )
          goto LABEL_25;
        if ( (unsigned __int64 *)v19[1] == v22 )
          goto LABEL_24;
        goto LABEL_51;
      }
      v20 = *v19;
    }
    else
    {
      v20 = unk_0;
      v22 = nullptr;
    }
LABEL_20:
    if ( (v20 & 2) != 0 )
    {
      v22 = (unsigned __int64 *)v22[2];
    }
    else
    {
      v23 = (unsigned __int64 *)v22[1];
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        v24 = (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
        v25 = *v24;
        if ( (*v24 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v24[1] == v22 )
          {
            v22 = v24;
            v42 = v25 & 0xFFFFFFFFFFFFFFFCLL;
            v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v25 & 2) != 0 )
            {
              v22 = (unsigned __int64 *)v42;
              goto LABEL_24;
            }
            v24 = (unsigned __int64 *)v42;
          }
        }
        v22 = v24;
      }
      else
      {
        do
        {
          v22 = v23;
          v23 = (unsigned __int64 *)v23[2];
        }
        while ( (*(_BYTE *)v23 & 2) == 0 );
      }
    }
LABEL_24:
    if ( v22 == v19 )
      goto LABEL_8;
LABEL_25:
    v45 = (__int64 *)v22;
    v26 = (int)v47 - (int)v46;
    v27 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * *((int *)v22 + 8));
    v44 = v22[3];
    v28 = sub_1C35C0(v27, v27[22], a4);
    if ( !v26 )
      goto LABEL_8;
    if ( v28 == v44 )
      goto LABEL_8;
    v29 = v26 + v46 - 1;
    if ( v29 < v44 )
      goto LABEL_8;
    v30 = v28 - 1LL;
    if ( v30 < v46 )
      goto LABEL_8;
    if ( *(_DWORD *)v8 != 2 && *v27 != 2 && (*(_BYTE *)(a1 + 136) & 1) == 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCC4Du, a4);
      goto LABEL_84;
    }
    if ( v46 >= v44 )
    {
      if ( v30 >= v29 )
        return v48 - __readfsqword(0x28u);
      if ( v44 != v46 )
        goto LABEL_8;
    }
    else if ( v29 < v30 )
    {
      goto LABEL_8;
    }
    sub_22F840((unsigned __int64 **)a2, v45);
  }
LABEL_8:
  v12 = *a2;
  if ( !*a2 )
  {
    v31 = qalloc();
    v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
    if ( !v31 )
      goto LABEL_78;
    *(_QWORD *)(v31 + 32) = 0;
    *(_OWORD *)(v31 + 16) = 0;
    *(__m128i *)(v31 + 8) = v32;
    *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *a2 = v31;
    *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v31 & 3LL;
    *(__m128i *)(*a2 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a2, (__m128i)(unsigned __int64)*a2);
    *(_QWORD *)*a2 &= ~1uLL;
    *(_QWORD *)*a2 |= 2uLL;
    v12 = *a2;
    goto LABEL_10;
  }
  if ( !a2[1] )
  {
LABEL_10:
    v13 = qalloc();
    v14 = v13;
    if ( v13 )
    {
      *(_QWORD *)(v13 + 32) = 0;
      *(_OWORD *)v13 = 0;
      *(_OWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = v46;
      *(_QWORD *)v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      v15 = _mm_loadl_epi64((const __m128i *)a2);
      *(_QWORD *)v13 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v15, v15);
      if ( v12 != *a2 )
      {
        *(_QWORD *)(v12 + 8) = v13;
        v16 = (unsigned __int64 *)*a2;
        if ( v12 != *(_QWORD *)(*a2 + 8) )
          goto LABEL_13;
        goto LABEL_47;
      }
      goto LABEL_61;
    }
    goto LABEL_78;
  }
  v35 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v35 & 2) != 0 )
    goto LABEL_43;
  i = v10;
  v17 = (__int64 *)(v35 + 24);
  v39 = v46 <= *(_QWORD *)(v35 + 24);
  if ( v46 >= *(_QWORD *)(v35 + 24) )
    goto LABEL_59;
LABEL_56:
  v40 = *(_BYTE **)(v35 + 8);
  for ( i = v10; ; i = 0 )
  {
    if ( (*v40 & 2) != 0 )
    {
      v12 = v35;
      v10 = i;
LABEL_43:
      v36 = qalloc();
      v14 = v36;
      if ( v36 )
      {
        *(_QWORD *)(v36 + 32) = 0;
        *(_OWORD *)v36 = 0;
        *(_OWORD *)(v36 + 16) = 0;
        *(_QWORD *)(v36 + 24) = v46;
        *(_QWORD *)v36 = v12 & 0xFFFFFFFFFFFFFFFCLL;
        v37 = _mm_loadl_epi64((const __m128i *)a2);
        *(_QWORD *)v36 = v12 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64(v37, v37);
        if ( *a2 != v12 )
        {
          if ( !v10 )
          {
            *(_QWORD *)(v12 + 16) = v36;
            if ( *(_QWORD *)(*a2 + 16) == v12 )
              *(_QWORD *)(*a2 + 16) = v36;
            goto LABEL_13;
          }
          *(_QWORD *)(v12 + 8) = v36;
          v16 = (unsigned __int64 *)*a2;
          if ( *(_QWORD *)(*a2 + 8) != v12 )
          {
LABEL_13:
            sub_D7DE0(a2, (__int64 *)v14);
LABEL_14:
            ++a2[1];
            v17 = (__int64 *)(v14 + 24);
            goto LABEL_15;
          }
LABEL_47:
          v16[1] = v14;
          goto LABEL_13;
        }
LABEL_61:
        *(_QWORD *)v12 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
        *(_QWORD *)(*a2 + 8) = v14;
        *(_QWORD *)(*a2 + 16) = v14;
        v41 = *(_QWORD *)v14 & 2LL;
        *(_QWORD *)v14 &= ~1uLL;
        *(_QWORD *)v14 = v41 | *a2 & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_14;
      }
LABEL_78:
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v35 = (unsigned __int64)v40;
    v17 = (__int64 *)(v40 + 24);
    v39 = v46 <= *v17;
    if ( v46 < *v17 )
      goto LABEL_56;
LABEL_59:
    if ( v39 )
      break;
    v40 = *(_BYTE **)(v35 + 16);
  }
  if ( !v35 )
  {
    v12 = 0;
    v10 = i;
    goto LABEL_43;
  }
LABEL_15:
  *((_DWORD *)v17 + 2) = a3;
  return v48 - __readfsqword(0x28u);
}

