__int64 __fastcall sub_1D9550(__int64 a1, __int64 *a2, char a3)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r13
  _QWORD *v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 *v12; // r13
  __int64 result; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 *v17; // rdi
  char i; // cl
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm0
  _QWORD *exception; // rax
  char v37; // [rsp+Fh] [rbp-39h]

  v5 = sub_3312A0(*(_QWORD *)(a1 + 8));
  if ( a3 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v7 = (_QWORD *)(a1 + 40);
      if ( v6 )
        goto LABEL_4;
LABEL_52:
      v33 = qalloc();
      v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
      if ( !v33 )
        goto LABEL_62;
      *(_QWORD *)(v33 + 32) = 0;
      *(_OWORD *)(v33 + 16) = 0;
      *(__m128i *)(v33 + 8) = v34;
      *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(_QWORD *)(a1 + 40) = v33;
      *(_QWORD *)v33 = v33 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v33 & 3LL;
      *(__m128i *)(*(_QWORD *)(a1 + 40) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 40),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 40));
      **(_QWORD **)(a1 + 40) &= ~1uLL;
      **(_QWORD **)(a1 + 40) |= 2uLL;
      v6 = *(_QWORD *)(a1 + 40);
      goto LABEL_4;
    }
    v14 = *(__int64 **)(a1 + 40);
    if ( !v14 )
    {
LABEL_17:
      result = v14[4];
      goto LABEL_12;
    }
    v15 = *v14;
    v16 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v16 )
    {
      v17 = *(__int64 **)(a1 + 40);
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
        if ( (__int64 *)v14[1] == v14 )
          goto LABEL_17;
LABEL_36:
        if ( (v15 & 2) != 0 )
        {
          v25 = (_QWORD *)v17[2];
        }
        else
        {
          v24 = (_QWORD *)v17[1];
          if ( (*(_BYTE *)v24 & 2) != 0 )
          {
            v25 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
            v26 = *v25;
            if ( (*v25 & 2) == 0 && v17 == (__int64 *)v25[1] )
            {
              while ( 1 )
              {
                v27 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v26 & 2) != 0 )
                  break;
                v28 = v25;
                v25 = (_QWORD *)v27;
                if ( v28 != *(_QWORD **)(v27 + 8) )
                  goto LABEL_55;
              }
              v25 = (_QWORD *)v27;
            }
          }
          else
          {
            do
            {
              v25 = v24;
              v24 = (_QWORD *)v24[2];
            }
            while ( (*(_BYTE *)v24 & 2) == 0 );
          }
        }
LABEL_55:
        result = v25[4] + 1LL;
        goto LABEL_12;
      }
      v22 = *(_QWORD *)(v16 + 8);
      v23 = *(_QWORD *)(v16 + 16);
      if ( *(_QWORD *)(v16 + 24) < v5 )
        goto LABEL_31;
LABEL_28:
      v17 = (__int64 *)v16;
      while ( (*(_BYTE *)v22 & 2) == 0 )
      {
        v16 = v22;
        v22 = *(_QWORD *)(v22 + 8);
        v23 = *(_QWORD *)(v16 + 16);
        if ( *(_QWORD *)(v16 + 24) >= v5 )
          goto LABEL_28;
LABEL_31:
        v22 = v23;
      }
      if ( (__int64 *)v14[1] == v17 )
      {
LABEL_58:
        v14 = v17;
        goto LABEL_17;
      }
      if ( v14 == v17 )
        goto LABEL_36;
    }
    else
    {
      v14 = (__int64 *)v14[1];
      v17 = nullptr;
      if ( !v14 )
        goto LABEL_17;
    }
    if ( v17[3] != v5 )
    {
      v15 = *v17;
      goto LABEL_36;
    }
    goto LABEL_58;
  }
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (_QWORD *)(a1 + 40);
  if ( !v6 )
    goto LABEL_52;
  if ( !*(_QWORD *)(a1 + 48) )
  {
LABEL_4:
    v8 = qalloc();
    v9 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 32) = 0;
      *(_OWORD *)(v8 + 16) = 0;
      *(_OWORD *)v8 = 0;
      *(_QWORD *)(v8 + 24) = v5;
      *(_QWORD *)v8 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      v10 = _mm_loadl_epi64((const __m128i *)(a1 + 40));
      *(_QWORD *)v8 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v10, v10);
      if ( *(_QWORD *)(a1 + 40) != v6 )
        goto LABEL_6;
      goto LABEL_43;
    }
    goto LABEL_62;
  }
  i = 1;
  v19 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v19 & 2) != 0 )
    goto LABEL_47;
  v20 = *(_QWORD *)(v19 + 24);
  v12 = (__int64 *)(v19 + 24);
  if ( v5 >= v20 )
    goto LABEL_25;
LABEL_22:
  v21 = *(_QWORD *)(v19 + 8);
  for ( i = 1; ; i = a3 )
  {
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v6 = v19;
LABEL_47:
      v37 = i;
      v30 = qalloc();
      v9 = v30;
      if ( v30 )
      {
        *(_QWORD *)(v30 + 32) = 0;
        *(_OWORD *)(v30 + 16) = 0;
        *(_OWORD *)v30 = 0;
        *(_QWORD *)(v30 + 24) = v5;
        *(_QWORD *)v30 = v6 & 0xFFFFFFFFFFFFFFFCLL;
        v31 = _mm_loadl_epi64((const __m128i *)(a1 + 40));
        *(_QWORD *)v30 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64(v31, v31);
        if ( *(_QWORD *)(a1 + 40) != v6 )
        {
          if ( !v37 )
          {
            *(_QWORD *)(v6 + 16) = v30;
            v32 = *(_QWORD *)(a1 + 40);
            if ( *(_QWORD *)(v32 + 16) == v6 )
              *(_QWORD *)(v32 + 16) = v9;
            goto LABEL_8;
          }
LABEL_6:
          *(_QWORD *)(v6 + 8) = v9;
          v11 = *(_QWORD *)(a1 + 40);
          if ( *(_QWORD *)(v11 + 8) == v6 )
            *(_QWORD *)(v11 + 8) = v9;
LABEL_8:
          sub_89B50(v7, (__int64 *)v9);
LABEL_9:
          ++*(_QWORD *)(a1 + 48);
          v12 = (__int64 *)(v9 + 24);
          goto LABEL_10;
        }
LABEL_43:
        *(_QWORD *)v6 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) = v9;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) = v9;
        v29 = *(_QWORD *)v9 & 2LL;
        *(_QWORD *)v9 &= ~1uLL;
        *(_QWORD *)v9 = v29 | *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_9;
      }
LABEL_62:
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v19 = v21;
    v20 = *(_QWORD *)(v21 + 24);
    v12 = (__int64 *)(v19 + 24);
    if ( v5 < v20 )
      goto LABEL_22;
LABEL_25:
    if ( v20 >= v5 )
      break;
    v21 = *(_QWORD *)(v19 + 16);
  }
  if ( !v19 )
  {
    v6 = 0;
    goto LABEL_47;
  }
LABEL_10:
  result = v12[1];
  if ( !result )
  {
    result = sub_332DF0(*(_QWORD *)(a1 + 8), *a2);
    v12[1] = result;
  }
LABEL_12:
  *a2 = result;
  return result;
}

