unsigned __int64 __fastcall sub_84B20(__m128i *a1, __int64 *a2, __int64 a3)
{
  const char *v3; // rbp
  __m128i v4; // xmm0
  unsigned __int64 *v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  char v9; // al
  char v10; // dl
  char v11; // r14
  const char *v12; // r15
  _BYTE *v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm1
  _QWORD *exception; // rdi
  char *s2[2]; // [rsp+0h] [rbp-88h] BYREF
  char v18; // [rsp+17h] [rbp-71h] BYREF
  const char **v19; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 *v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  const char *v22; // [rsp+30h] [rbp-58h] BYREF
  __m128i v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v3 = *(const char **)a3;
  v4 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v24 = __readfsqword(0x28u);
  *(_QWORD *)a3 = 0;
  *(_OWORD *)(a3 + 8) = 0;
  v5 = (unsigned __int64 *)a1->m128i_i64[0];
  v22 = v3;
  v19 = &v22;
  v23 = v4;
  if ( !v5 )
  {
    v14 = qalloc();
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    if ( !v14 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v14 + 16) = 0;
    *(_OWORD *)(v14 + 32) = 0;
    *(__m128i *)(v14 + 8) = v15;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v14;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v6 = sub_849C0(a1, v5, 1, (__int64 **)&v19);
    goto LABEL_4;
  }
  v20 = v5;
  v18 = 1;
  v21 = 0;
  if ( a2 )
  {
    *(__m128i *)s2 = v4;
    v9 = sub_82130((unsigned __int64 *)a1, (__int64)&v22, a2, (unsigned __int64 *)&v20, &v18, &v21);
    v4.m128i_i64[0] = _mm_load_si128((const __m128i *)s2).m128i_u64[0];
    if ( v9 )
    {
      v7 = v21;
      if ( v21 )
        goto LABEL_6;
      v6 = sub_849C0(a1, v20, v18, (__int64 **)&v19);
LABEL_4:
      v7 = v6;
      goto LABEL_5;
    }
  }
  v7 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v10 = 1;
LABEL_15:
    v6 = sub_849C0(a1, v5, v10, (__int64 **)&v19);
    goto LABEL_4;
  }
  v11 = 1;
  while ( 1 )
  {
    if ( *(_QWORD *)(v7 + 32) )
    {
      v12 = s1;
      s2[0] = *(char **)(v7 + 24);
      if ( !v4.m128i_i64[0] )
        goto LABEL_20;
    }
    else
    {
      if ( !v4.m128i_i64[0] )
        break;
      s2[0] = (char *)s1;
    }
    v12 = v3;
LABEL_20:
    if ( strcmp(v12, s2[0]) < 0 )
    {
      v13 = *(_BYTE **)(v7 + 8);
      v11 = 1;
      goto LABEL_22;
    }
    if ( strcmp(s2[0], v12) >= 0 )
      break;
    v13 = *(_BYTE **)(v7 + 16);
    v11 = 0;
LABEL_22:
    if ( (*v13 & 2) != 0 )
      goto LABEL_23;
    v7 = (unsigned __int64)v13;
  }
  if ( !v7 )
  {
LABEL_23:
    v10 = v11;
    v5 = (unsigned __int64 *)v7;
    goto LABEL_15;
  }
LABEL_5:
  v3 = v22;
LABEL_6:
  if ( v3 )
  {
    v23.m128i_i64[0] = 0;
    qfree();
  }
  return v7;
}

