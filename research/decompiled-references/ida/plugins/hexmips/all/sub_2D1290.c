__m128i *__fastcall sub_2D1290(unsigned __int8 **a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  unsigned __int8 *v5; // rax
  unsigned __int8 v6; // dl
  int v7; // ebp
  __m128i *v8; // rax
  __m128i *v9; // r14
  int v10; // r13d
  unsigned __int64 *v11; // r15
  bool v12; // cf
  __int64 v13; // r12
  int v14; // ebp
  int v15; // eax
  unsigned __int64 *v16; // rsi
  int v17; // edx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  char v21; // dl
  __int64 v22; // rax
  __m128i v23; // xmm1
  char v25; // r12
  char v26; // dl
  unsigned __int64 *v27; // rax
  unsigned __int64 *v28; // r12
  unsigned __int64 *v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm1
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rbp
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  const __m128i *v41; // [rsp+20h] [rbp-70h] BYREF
  __m128i v42; // [rsp+28h] [rbp-68h] BYREF
  __int64 v43; // [rsp+38h] [rbp-58h] BYREF
  int v44; // [rsp+40h] [rbp-50h]
  int v45; // [rsp+48h] [rbp-48h]
  unsigned __int64 v46; // [rsp+50h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v5 = *a1;
  v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)a2);
  if ( (unsigned __int64)v5 < a2 )
  {
    v6 = *v5;
    v42.m128i_i64[0] = (__int64)(v5 + 1);
    if ( v6 > 1u )
      return nullptr;
  }
  v7 = unpack_dd();
  if ( v42.m128i_i64[1] - v42.m128i_i64[0] < (unsigned __int64)v7 )
    return nullptr;
  v8 = (__m128i *)qalloc();
  v9 = v8;
  if ( !v8 )
    sub_4E45E(16);
  v8->m128i_i64[0] = 0;
  v10 = v7 - 1;
  v11 = nullptr;
  v8->m128i_i64[1] = 0;
  if ( v7 <= 0 )
    goto LABEL_26;
LABEL_8:
  while ( 2 )
  {
    v13 = sub_32D380(&v42, a3);
    v14 = unpack_dd();
    v15 = unpack_dd();
    if ( !v15 )
      goto LABEL_7;
    v45 = v15;
    v43 = v13;
    v44 = v14;
    v16 = (unsigned __int64 *)v9->m128i_i64[0];
    v41 = (const __m128i *)&v43;
    if ( v16 )
    {
      if ( !v9->m128i_i64[1] )
        goto LABEL_25;
      if ( !v11 )
      {
LABEL_29:
        v25 = 1;
        v11 = (unsigned __int64 *)(*v16 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
          v26 = 1;
LABEL_31:
          v11 = (unsigned __int64 *)sub_2D1140(v9, v16, v26, &v41);
          goto LABEL_7;
        }
        while ( 1 )
        {
          if ( (int)sub_2533C0((__int64)&v43, (__int64)(v11 + 3)) >= 0 )
          {
            if ( (int)sub_2533C0((__int64)(v11 + 3), (__int64)&v43) >= 0 )
            {
              if ( !v11 )
              {
LABEL_36:
                v26 = v25;
                v16 = v11;
                goto LABEL_31;
              }
LABEL_7:
              v12 = v10-- == 0;
              if ( v12 )
                goto LABEL_26;
              goto LABEL_8;
            }
            v27 = (unsigned __int64 *)v11[2];
            v25 = 0;
          }
          else
          {
            v27 = (unsigned __int64 *)v11[1];
            v25 = 1;
          }
          if ( (*(_BYTE *)v27 & 2) != 0 )
            goto LABEL_36;
          v11 = v27;
        }
      }
      if ( v16 == v11 )
      {
        v28 = (unsigned __int64 *)v11[2];
        if ( (*(_BYTE *)v28 & 2) != 0 )
          goto LABEL_47;
        if ( (int)sub_2533C0((__int64)(v28 + 3), (__int64)&v43) < 0 )
        {
          v11 = v28;
          v21 = 0;
          goto LABEL_48;
        }
        if ( (int)sub_2533C0((__int64)(v28 + 3), (__int64)&v43) >= 0
          && (int)sub_2533C0((__int64)&v43, (__int64)(v28 + 3)) >= 0 )
        {
          if ( v28 )
          {
            v11 = v28;
            goto LABEL_7;
          }
LABEL_47:
          v21 = 1;
LABEL_48:
          v11 = (unsigned __int64 *)sub_2D1140(v9, v11, v21, &v41);
          goto LABEL_7;
        }
LABEL_42:
        v16 = (unsigned __int64 *)v9->m128i_i64[0];
        goto LABEL_43;
      }
      if ( (int)sub_2533C0((__int64)(v11 + 3), (__int64)&v43) >= 0
        && (int)sub_2533C0((__int64)&v43, (__int64)(v11 + 3)) >= 0 )
      {
        goto LABEL_7;
      }
      v17 = sub_2533C0((__int64)&v43, (__int64)(v11 + 3));
      v18 = *v11;
      v19 = *v11 & 2;
      if ( v17 >= 0 )
      {
        if ( v19 )
        {
          if ( (unsigned __int64 *)v9->m128i_i64[0] != v11 )
          {
            v20 = (unsigned __int64)v11;
            goto LABEL_18;
          }
          v21 = 0;
          if ( (*(_BYTE *)v11[2] & 2) != 0 )
            goto LABEL_48;
LABEL_81:
          v16 = v11;
LABEL_44:
          if ( !v9->m128i_i64[1] )
            goto LABEL_45;
          goto LABEL_29;
        }
        v29 = (unsigned __int64 *)v11[2];
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
          v20 = v18 & 0xFFFFFFFFFFFFFFFCLL;
          v34 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v34 & 2) == 0 )
          {
            v35 = (unsigned __int64)v11;
            do
            {
              if ( *(_QWORD *)(v20 + 16) != v35 )
                break;
              v35 = v20;
              v36 = v34 & 0xFFFFFFFFFFFFFFFCLL;
              v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
              v20 = v36;
            }
            while ( (v34 & 2) == 0 );
          }
          if ( v9->m128i_i64[0] == v20 )
          {
LABEL_79:
            v21 = 0;
            goto LABEL_48;
          }
        }
        else
        {
          do
          {
            v16 = v29;
            v29 = (unsigned __int64 *)v29[1];
          }
          while ( (*(_BYTE *)v29 & 2) == 0 );
          v20 = (unsigned __int64)v16;
          if ( v16 == (unsigned __int64 *)v9->m128i_i64[0] )
          {
LABEL_43:
            if ( !v16 )
            {
              v30 = qalloc();
              v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
              if ( !v30 )
              {
                exception = __cxa_allocate_exception(8u);
                *exception = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_OWORD *)(v30 + 16) = 0;
              *(_OWORD *)(v30 + 32) = 0;
              *(__m128i *)(v30 + 8) = v31;
              *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | 2;
              v9->m128i_i64[0] = v30;
              *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
              *(__m128i *)(v9->m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                     (__m128i)v9->m128i_u64[0],
                                                     (__m128i)v9->m128i_u64[0]);
              *(_QWORD *)v9->m128i_i64[0] &= ~1uLL;
              *(_QWORD *)v9->m128i_i64[0] |= 2uLL;
LABEL_45:
              v11 = (unsigned __int64 *)sub_2D1140(v9, (unsigned __int64 *)v9->m128i_i64[0], 1, &v41);
              goto LABEL_7;
            }
            goto LABEL_44;
          }
        }
LABEL_18:
        if ( (int)sub_2533C0((__int64)&v43, v20 + 24) < 0 )
        {
          if ( (*(_BYTE *)v11[2] & 2) != 0 )
            goto LABEL_79;
          v16 = (unsigned __int64 *)v9->m128i_i64[0];
          if ( v9->m128i_i64[0] != v20 && (**(_BYTE **)(v20 + 8) & 2) != 0 )
          {
            v11 = (unsigned __int64 *)v20;
            v21 = 1;
            goto LABEL_48;
          }
          goto LABEL_43;
        }
        goto LABEL_42;
      }
      if ( v19 )
      {
        if ( (unsigned __int64 *)v9->m128i_i64[0] == v11 )
        {
          if ( (*(_BYTE *)v11[1] & 2) != 0 )
            goto LABEL_47;
          goto LABEL_81;
        }
        v33 = (unsigned __int64)v11;
      }
      else
      {
        v32 = v11[1];
        if ( (*(_BYTE *)v32 & 2) != 0 )
        {
          v33 = v18 & 0xFFFFFFFFFFFFFFFCLL;
          v37 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v37 & 2) == 0 )
          {
            v38 = (unsigned __int64)v11;
            do
            {
              if ( *(_QWORD *)(v33 + 8) != v38 )
                break;
              v38 = v33;
              v39 = v37 & 0xFFFFFFFFFFFFFFFCLL;
              v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
              v33 = v39;
            }
            while ( (v37 & 2) == 0 );
          }
          if ( v9->m128i_i64[0] == v33 )
            goto LABEL_47;
        }
        else
        {
          do
          {
            v33 = v32;
            v32 = *(_QWORD *)(v32 + 16);
          }
          while ( (*(_BYTE *)v32 & 2) == 0 );
          if ( v33 == v9->m128i_i64[0] )
          {
            v16 = (unsigned __int64 *)v33;
            goto LABEL_43;
          }
        }
      }
      if ( (int)sub_2533C0(v33 + 24, (__int64)&v43) < 0 )
      {
        if ( (*(_BYTE *)v11[1] & 2) != 0 )
          goto LABEL_47;
        v16 = (unsigned __int64 *)v9->m128i_i64[0];
        if ( v9->m128i_i64[0] != v33 && (**(_BYTE **)(v33 + 16) & 2) != 0 )
        {
          v11 = (unsigned __int64 *)v33;
          v21 = 0;
          goto LABEL_48;
        }
        goto LABEL_43;
      }
      goto LABEL_42;
    }
    v22 = qalloc();
    v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
    if ( !v22 )
    {
      v4 = __cxa_allocate_exception(8u);
      *v4 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v22 + 16) = 0;
    *(_OWORD *)(v22 + 32) = 0;
    *(__m128i *)(v22 + 8) = v23;
    *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v9->m128i_i64[0] = v22;
    *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 3LL;
    *(__m128i *)(v9->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v9->m128i_u64[0], (__m128i)v9->m128i_u64[0]);
    *(_QWORD *)v9->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v9->m128i_i64[0] |= 2uLL;
    v16 = (unsigned __int64 *)v9->m128i_i64[0];
LABEL_25:
    v11 = (unsigned __int64 *)sub_2D1140(v9, v16, 1, &v41);
    v12 = v10-- == 0;
    if ( !v12 )
      continue;
    break;
  }
LABEL_26:
  *a1 = (unsigned __int8 *)v42.m128i_i64[0];
  return v9;
}

