__int64 __fastcall sub_22C830(__int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *exception; // rdi
  __int64 v7; // rbp
  __int64 *v8; // rsi
  unsigned __int64 **v9; // r12
  __int64 *v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i *v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __m128i v23; // xmm0
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v27; // rdx
  char v28; // r12
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rax
  __m128i v33; // xmm0
  unsigned __int64 v34; // rcx
  unsigned __int64 j; // rdx
  _QWORD *v36; // rdx
  __int64 v37; // rdi
  _QWORD *v38; // r8
  _QWORD *v39; // rdx
  __int64 v40; // rdi
  _QWORD *v41; // r8
  const __m128i *v42; // [rsp+8h] [rbp-60h] BYREF
  __m128i v43; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]

  v7 = a3;
  v8 = *(__int64 **)(a1 + 8);
  v44 = __readfsqword(0x28u);
  v9 = *(unsigned __int64 ***)a1;
  if ( **(__int64 ***)a1 == v8 )
    goto LABEL_11;
  if ( v8[3] != a2 || v8[4] < (unsigned __int64)a3 )
  {
    v10 = *(__int64 **)(a1 + 16);
    if ( v8 != v10 )
    {
      while ( 1 )
      {
        v11 = *v8;
        v12 = (unsigned __int64)v8;
        if ( (*v8 & 2) == 0 )
        {
          v13 = v8[2];
          if ( (*(_BYTE *)v13 & 2) != 0 )
          {
            v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
            v15 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v15 & 2) == 0 )
            {
              v16 = (unsigned __int64)v8;
              do
              {
                if ( *(_QWORD *)(v12 + 16) != v16 )
                  break;
                v16 = v12;
                v17 = v15 & 0xFFFFFFFFFFFFFFFCLL;
                v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
                v12 = v17;
              }
              while ( (v15 & 2) == 0 );
            }
          }
          else
          {
            do
            {
              v12 = v13;
              v13 = *(_QWORD *)(v13 + 8);
            }
            while ( (*(_BYTE *)v13 & 2) == 0 );
          }
        }
        sub_22B0E0(v9, v8);
        if ( v10 == (__int64 *)v12 )
          break;
        v8 = (__int64 *)v12;
      }
    }
    *(_QWORD *)(a1 + 8) = v10;
LABEL_11:
    if ( (int)v7 <= 0 )
      return 1;
    v18 = *(__m128i **)a1;
    v43.m128i_i64[0] = a2;
    v43.m128i_i64[1] = v7;
    v19 = *(_QWORD *)(a1 + 8);
    v20 = v18->m128i_i64[0];
    v42 = &v43;
    if ( !v20 )
    {
      v32 = qalloc();
      v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)v32);
      if ( !v32 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v32 + 32) = 0;
      *(_OWORD *)(v32 + 16) = 0;
      *(__m128i *)(v32 + 8) = v33;
      *(_QWORD *)v32 = v32 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v18->m128i_i64[0] = v32;
      *(_QWORD *)v32 = v32 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v32 & 3LL;
      *(__m128i *)(v18->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v18->m128i_u64[0], (__m128i)v18->m128i_u64[0]);
      *(_QWORD *)v18->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v18->m128i_i64[0] |= 2uLL;
      v20 = v18->m128i_i64[0];
LABEL_20:
      v21 = qalloc();
      v22 = v21;
      if ( !v21 )
      {
        v3 = __cxa_allocate_exception(8u);
        *v3 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v3,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v21 + 16) = 0;
      *(_OWORD *)v21 = 0;
      *(__m128i *)(v21 + 24) = _mm_load_si128(&v43);
      *(_QWORD *)v21 = v20 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = _mm_loadl_epi64(v18);
      *(_QWORD *)v21 = v20 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v23, v23);
      if ( v20 != v18->m128i_i64[0] )
        goto LABEL_22;
      goto LABEL_50;
    }
    if ( !v18->m128i_i64[1] )
      goto LABEL_20;
    if ( !v19 )
      goto LABEL_39;
    if ( v19 == v20 )
    {
      v19 = *(_QWORD *)(v20 + 16);
      if ( (*(_BYTE *)v19 & 2) == 0 )
      {
        v27 = *(_QWORD *)(v19 + 24);
        if ( v27 < a2 )
          goto LABEL_72;
        if ( a2 != v27 )
          goto LABEL_39;
        if ( v19 )
          return 1;
      }
LABEL_44:
      v28 = 1;
      goto LABEL_45;
    }
    v24 = *(_QWORD *)(v19 + 24);
    if ( v24 < a2 )
    {
      if ( (*(_QWORD *)v19 & 2) != 0 )
      {
        v20 = v19;
LABEL_36:
        if ( a2 < *(_QWORD *)(v20 + 24) )
        {
          if ( (**(_BYTE **)(v19 + 16) & 2) == 0 )
          {
            if ( (**(_BYTE **)(v20 + 8) & 2) == 0 )
              goto LABEL_39;
            goto LABEL_44;
          }
          goto LABEL_72;
        }
LABEL_39:
        sub_22C580(v18, (unsigned __int64 *)&v43, &v42);
        return 1;
      }
      v25 = *(_QWORD *)(v19 + 16);
      if ( (*(_BYTE *)v25 & 2) == 0 )
      {
        for ( i = *(_QWORD *)(v25 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v25 = i;
        if ( v20 == v25 )
          goto LABEL_39;
        goto LABEL_35;
      }
      v36 = (_QWORD *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL);
      v37 = *v36;
      if ( (*v36 & 2) != 0 )
      {
        if ( (_QWORD *)v20 != v36 && a2 >= v36[3] )
          goto LABEL_39;
      }
      else
      {
        if ( v19 == v36[2] )
        {
          while ( 1 )
          {
            v38 = v36;
            v25 = v37 & 0xFFFFFFFFFFFFFFFCLL;
            v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v37 & 2) != 0 )
              break;
            v36 = (_QWORD *)v25;
            if ( v38 != *(_QWORD **)(v25 + 16) )
              goto LABEL_70;
          }
        }
        else
        {
LABEL_70:
          v25 = (unsigned __int64)v36;
        }
        if ( v20 != v25 )
        {
LABEL_35:
          v20 = v25;
          goto LABEL_36;
        }
      }
LABEL_72:
      v20 = v19;
LABEL_63:
      v28 = 0;
LABEL_45:
      v29 = qalloc();
      v22 = v29;
      if ( !v29 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v29 + 16) = 0;
      *(_OWORD *)v29 = 0;
      *(__m128i *)(v29 + 24) = _mm_load_si128(&v43);
      *(_QWORD *)v29 = v20 & 0xFFFFFFFFFFFFFFFCLL;
      v30 = _mm_loadl_epi64(v18);
      *(_QWORD *)v29 = v20 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64(v30, v30);
      if ( v20 != v18->m128i_i64[0] )
      {
        if ( !v28 )
        {
          *(_QWORD *)(v20 + 16) = v29;
          if ( v20 == *(_QWORD *)(v18->m128i_i64[0] + 16) )
            *(_QWORD *)(v18->m128i_i64[0] + 16) = v29;
          goto LABEL_24;
        }
LABEL_22:
        *(_QWORD *)(v20 + 8) = v22;
        if ( v20 == *(_QWORD *)(v18->m128i_i64[0] + 8) )
          *(_QWORD *)(v18->m128i_i64[0] + 8) = v22;
LABEL_24:
        sub_866D0(v18, (__int64 *)v22);
LABEL_25:
        ++v18->m128i_i64[1];
        return 1;
      }
LABEL_50:
      *(_QWORD *)v20 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v20 & 3LL;
      *(_QWORD *)(v18->m128i_i64[0] + 8) = v22;
      *(_QWORD *)(v18->m128i_i64[0] + 16) = v22;
      v31 = *(_QWORD *)v22 & 2LL;
      *(_QWORD *)v22 &= ~1uLL;
      *(_QWORD *)v22 = v31 | v18->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_25;
    }
    if ( a2 == v24 )
      return 1;
    if ( (*(_QWORD *)v19 & 2) != 0 )
    {
      v20 = v19;
LABEL_60:
      if ( *(_QWORD *)(v20 + 24) >= a2 )
        goto LABEL_39;
      if ( (**(_BYTE **)(v19 + 8) & 2) == 0 )
      {
        if ( (**(_BYTE **)(v20 + 16) & 2) == 0 )
          goto LABEL_39;
        goto LABEL_63;
      }
      goto LABEL_79;
    }
    v34 = *(_QWORD *)(v19 + 8);
    if ( (*(_BYTE *)v34 & 2) == 0 )
    {
      for ( j = *(_QWORD *)(v34 + 16); (*(_BYTE *)j & 2) == 0; j = *(_QWORD *)(j + 16) )
        v34 = j;
      if ( v20 == v34 )
        goto LABEL_39;
      goto LABEL_59;
    }
    v39 = (_QWORD *)(*(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL);
    v40 = *v39;
    if ( (*v39 & 2) != 0 )
    {
      if ( (_QWORD *)v20 != v39 && v39[3] >= a2 )
        goto LABEL_39;
    }
    else
    {
      if ( v39[1] == v19 )
      {
        while ( 1 )
        {
          v41 = v39;
          v34 = v40 & 0xFFFFFFFFFFFFFFFCLL;
          v40 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v40 & 2) != 0 )
            break;
          v39 = (_QWORD *)v34;
          if ( *(_QWORD **)(v34 + 8) != v41 )
            goto LABEL_77;
        }
      }
      else
      {
LABEL_77:
        v34 = (unsigned __int64)v39;
      }
      if ( v20 != v34 )
      {
LABEL_59:
        v20 = v34;
        goto LABEL_60;
      }
    }
LABEL_79:
    v20 = v19;
    goto LABEL_44;
  }
  return 0;
}

