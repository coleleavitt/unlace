unsigned __int64 __fastcall sub_142F90(__m128i *a1, unsigned __int64 **a2, __int64 a3, __int64 *a4, char a5)
{
  _QWORD *exception; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v14; // rax
  _QWORD *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 i; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 j; // rdx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 *v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  _BYTE *v32; // rcx
  char v33; // al
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  __m128i v36; // xmm0
  const void *v37; // r13
  void *v38; // rax
  __int64 v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  unsigned __int64 v41; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 *v42; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !*a2 )
  {
    if ( !under_debugger )
      sub_37EEE0(52682);
    BUG();
  }
  v6 = **a2;
  v7 = (unsigned __int64 *)a1->m128i_i64[0];
  v42 = &v41;
  v41 = v6;
  if ( !v7 )
  {
    v35 = qalloc();
    v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)v35);
    if ( !v35 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    memset((void *)v35, 0, 0x58u);
    *(__m128i *)(v35 + 8) = v36;
    *(_QWORD *)v35 = v35 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v35;
    *(_QWORD *)v35 = v35 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v35 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v7 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_4;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_4:
    v11 = sub_141990(a1, v7, 1, (__int64 **)&v42) + 24;
    goto LABEL_5;
  }
  v30 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v30 & 2) != 0 )
  {
    v33 = 1;
LABEL_45:
    v11 = sub_141990(a1, v7, v33, (__int64 **)&v42) + 24;
    goto LABEL_5;
  }
  v7 = (_QWORD *)&byte_1;
  while ( 1 )
  {
    v31 = *(_QWORD *)(v30 + 24);
    v11 = v30 + 24;
    if ( v6 < v31 )
    {
      v32 = *(_BYTE **)(v30 + 8);
      v7 = (_QWORD *)&byte_1;
      if ( (*v32 & 2) != 0 )
        goto LABEL_43;
      goto LABEL_51;
    }
    if ( v31 >= v6 )
      break;
    v32 = *(_BYTE **)(v30 + 16);
    v7 = nullptr;
    if ( (*v32 & 2) != 0 )
      goto LABEL_43;
LABEL_51:
    v30 = (unsigned __int64)v32;
  }
  if ( !v30 )
  {
LABEL_43:
    v33 = (char)v7;
    v7 = (unsigned __int64 *)v30;
    goto LABEL_45;
  }
LABEL_5:
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 104))-- == 1 )
    {
      v16 = *(_QWORD **)(v11 + 8);
      if ( v16 )
      {
        sub_254CF0(*(_QWORD *)(v11 + 8), v7);
        v17 = v16[23];
        if ( v17 )
        {
          v18 = v16[24];
          if ( v18 )
          {
            for ( i = 0; i != v18; ++i )
            {
              v20 = (_QWORD *)(v17 + 24 * i);
              if ( *v20 )
              {
                v20[1] = 0;
                v39 = i;
                qfree();
                v17 = v16[23];
                i = v39;
              }
            }
          }
          v16[24] = 0;
          qfree();
        }
        if ( v16[20] )
        {
          v16[21] = 0;
          qfree();
        }
        v21 = v16[16];
        if ( v21 )
        {
          v22 = v16[17];
          if ( v22 )
          {
            for ( j = 0; j != v22; ++j )
            {
              v24 = (_QWORD *)(v21 + 32 * j);
              if ( *v24 )
              {
                v24[1] = 0;
                v40 = j;
                qfree();
                v21 = v16[16];
                j = v40;
              }
            }
          }
          v16[17] = 0;
          qfree();
        }
        sub_2513D0(v16 + 2);
        j__qfree();
      }
    }
  }
  v14 = *a4;
  *(_QWORD *)(v11 + 8) = *a4;
  if ( v14 )
    ++*(_DWORD *)(v14 + 104);
  *(_BYTE *)(v11 + 56) = a5;
  if ( !*a4 )
  {
    v25 = (unsigned int)(*(_DWORD *)a3 + 34);
    if ( (unsigned int)v25 > 0x10 || (v26 = 67585, !_bittest64(&v26, v25)) )
    {
      *(_DWORD *)(v11 + 16) = *(_DWORD *)a3;
      *(_QWORD *)(v11 + 24) = *(_QWORD *)(a3 + 8);
      if ( v11 + 32 != a3 + 16 )
      {
        v34 = *(_QWORD *)(a3 + 24);
        if ( v34 > 1 )
        {
          v37 = *(const void **)(a3 + 16);
          v38 = *(void **)(v11 + 32);
          if ( *(_QWORD *)(v11 + 48) < v34 )
          {
            v38 = (void *)qvector_reserve();
            *(_QWORD *)(v11 + 32) = v38;
          }
          *(_QWORD *)(v11 + 40) = v34;
          memmove(v38, v37, v34 - 1);
          *(_BYTE *)(*(_QWORD *)(v11 + 32) + v34 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v11 + 40) = 0;
        }
      }
      return v43 - __readfsqword(0x28u);
    }
    sub_142D00(a1[2].m128i_i64[0], v41);
    v27 = (__int64 *)a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v28 = (__int64 *)(*v27 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v28 )
        goto LABEL_57;
      while ( (*(_BYTE *)v28 & 2) == 0 )
      {
        v29 = v28[3];
        if ( v41 < v29 )
        {
          v28 = (__int64 *)v28[1];
        }
        else
        {
          if ( v29 >= v41 )
          {
            if ( v28 != v27 )
LABEL_57:
              sub_141FE0((unsigned __int64 **)a1, v28);
            return v43 - __readfsqword(0x28u);
          }
          v28 = (__int64 *)v28[2];
        }
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}

