unsigned __int64 __fastcall sub_1469D0(__m128i *a1, unsigned __int64 **a2, __int64 a3, __int64 *a4, char a5, double a6)
{
  _QWORD *exception; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rsi
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v16; // rax
  _QWORD *v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 i; // rax
  __int64 *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 j; // rdx
  __int64 *v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 *v33; // rsi
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  char v36; // si
  unsigned __int64 v37; // rcx
  _BYTE *v38; // rcx
  char v39; // al
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  __m128i v42; // xmm0
  const void *v43; // r13
  void *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  unsigned __int64 v47; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 *v48; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+28h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( !*a2 )
  {
    if ( !under_debugger )
      sub_383060(0xCDCAu, a6);
    BUG();
  }
  v7 = **a2;
  v8 = (unsigned __int64 *)a1->m128i_i64[0];
  v48 = &v47;
  v47 = v7;
  if ( !v8 )
  {
    v41 = qalloc();
    v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v41);
    if ( !v41 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    memset((void *)v41, 0, 0x58u);
    *(__m128i *)(v41 + 8) = v42;
    *(_QWORD *)v41 = v41 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v41;
    *(_QWORD *)v41 = v41 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v41 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v8 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_4;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_4:
    v13 = sub_1453D0(a1, v8, 1, (__int64 **)&v48) + 24;
    goto LABEL_5;
  }
  v35 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v35 & 2) != 0 )
  {
    v39 = 1;
LABEL_45:
    v13 = sub_1453D0(a1, v8, v39, (__int64 **)&v48) + 24;
    goto LABEL_5;
  }
  v36 = 1;
  while ( 1 )
  {
    v37 = *(_QWORD *)(v35 + 24);
    v13 = v35 + 24;
    if ( v7 < v37 )
    {
      v38 = *(_BYTE **)(v35 + 8);
      v36 = 1;
      if ( (*v38 & 2) != 0 )
        goto LABEL_43;
      goto LABEL_51;
    }
    if ( v37 >= v7 )
      break;
    v38 = *(_BYTE **)(v35 + 16);
    v36 = 0;
    if ( (*v38 & 2) != 0 )
      goto LABEL_43;
LABEL_51:
    v35 = (unsigned __int64)v38;
  }
  if ( !v35 )
  {
LABEL_43:
    v39 = v36;
    v8 = (unsigned __int64 *)v35;
    goto LABEL_45;
  }
LABEL_5:
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 104))-- == 1 )
    {
      v18 = *(_QWORD **)(v13 + 8);
      if ( v18 )
      {
        sub_258970(*(__int64 **)(v13 + 8));
        v19 = v18[23];
        if ( v19 )
        {
          v20 = v18[24];
          if ( v20 )
          {
            for ( i = 0; i != v20; ++i )
            {
              v22 = (__int64 *)(v19 + 24 * i);
              v23 = *v22;
              if ( *v22 )
              {
                v22[1] = 0;
                v45 = i;
                qfree(v23);
                v19 = v18[23];
                i = v45;
              }
            }
          }
          v18[24] = 0;
          qfree(v19);
        }
        v24 = v18[20];
        if ( v24 )
        {
          v18[21] = 0;
          qfree(v24);
        }
        v25 = v18[16];
        if ( v25 )
        {
          v26 = v18[17];
          if ( v26 )
          {
            for ( j = 0; j != v26; ++j )
            {
              v28 = (__int64 *)(v25 + 32 * j);
              v29 = *v28;
              if ( *v28 )
              {
                v28[1] = 0;
                v46 = j;
                qfree(v29);
                v25 = v18[16];
                j = v46;
              }
            }
          }
          v18[17] = 0;
          qfree(v25);
        }
        sub_255050((__int64)(v18 + 2));
        j__qfree((__int64)v18);
      }
    }
  }
  v16 = *a4;
  *(_QWORD *)(v13 + 8) = *a4;
  if ( v16 )
    ++*(_DWORD *)(v16 + 104);
  *(_BYTE *)(v13 + 56) = a5;
  if ( !*a4 )
  {
    v30 = (unsigned int)(*(_DWORD *)a3 + 34);
    if ( (unsigned int)v30 > 0x10 || (v31 = 67585, !_bittest64(&v31, v30)) )
    {
      *(_DWORD *)(v13 + 16) = *(_DWORD *)a3;
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(a3 + 8);
      if ( v13 + 32 != a3 + 16 )
      {
        v40 = *(_QWORD *)(a3 + 24);
        if ( v40 > 1 )
        {
          v43 = *(const void **)(a3 + 16);
          v44 = *(void **)(v13 + 32);
          if ( *(_QWORD *)(v13 + 48) < v40 )
          {
            v44 = (void *)qvector_reserve(v13 + 32, *(_QWORD *)(v13 + 32), *(_QWORD *)(a3 + 24), 1);
            *(_QWORD *)(v13 + 32) = v44;
          }
          *(_QWORD *)(v13 + 40) = v40;
          memmove(v44, v43, v40 - 1);
          *(_BYTE *)(*(_QWORD *)(v13 + 32) + v40 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v13 + 40) = 0;
        }
      }
      return v49 - __readfsqword(0x28u);
    }
    sub_146740(a1[2].m128i_i64[0], v47);
    v32 = (__int64 *)a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v33 = (__int64 *)(*v32 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v33 )
        goto LABEL_57;
      while ( (*(_BYTE *)v33 & 2) == 0 )
      {
        v34 = v33[3];
        if ( v47 < v34 )
        {
          v33 = (__int64 *)v33[1];
        }
        else
        {
          if ( v34 >= v47 )
          {
            if ( v33 != v32 )
LABEL_57:
              sub_145A20((unsigned __int64 **)a1, v33);
            return v49 - __readfsqword(0x28u);
          }
          v33 = (__int64 *)v33[2];
        }
      }
    }
  }
  return v49 - __readfsqword(0x28u);
}

