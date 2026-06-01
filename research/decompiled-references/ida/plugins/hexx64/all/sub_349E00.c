unsigned __int64 __fastcall sub_349E00(__m128i *a1, __int64 *a2, double a3)
{
  _QWORD *v4; // rsi
  unsigned __int64 v5; // rbx
  char v7; // r15
  char *v8; // r14
  char *v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // eax
  char *v12; // r13
  char *v13; // r14
  int v14; // eax
  char v15; // dl
  _BYTE *v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm1
  _QWORD *exception; // rdi
  __int64 *v20; // [rsp+8h] [rbp-50h]
  __int64 *v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v21[1] = (__int64 *)__readfsqword(0x28u);
  v21[0] = a2;
  v4 = (_QWORD *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v17 = qalloc();
    v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
    if ( !v17 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v17 + 64) = 0;
    *(_OWORD *)(v17 + 16) = 0;
    *(_OWORD *)(v17 + 32) = 0;
    *(_OWORD *)(v17 + 48) = 0;
    *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v17 + 8) = v18;
    a1->m128i_i64[0] = v17;
    *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = (_QWORD *)a1->m128i_i64[0];
    return sub_349C10(a1, (__int64)v4, 1, v21);
  }
  if ( !a1->m128i_i64[1] )
    return sub_349C10(a1, (__int64)v4, 1, v21);
  v7 = 1;
  v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v5 & 2) != 0 )
  {
    v15 = 1;
    return sub_349C10(a1, (__int64)v4, v15, v21);
  }
  while ( 1 )
  {
    v8 = *(char **)(v5 + 24);
    v9 = (char *)*a2;
    v20 = (__int64 *)(v5 + 24);
    if ( v8 == (char *)*a2 )
      break;
    if ( v9 == &byte_1 || !v8 )
    {
      if ( !v9 || v8 == &byte_1 )
        break;
      goto LABEL_27;
    }
    if ( v8 != &byte_1 && v9 )
    {
      v10 = sub_2596A0((__int64)v9, (__int64)v8, a3);
      if ( v10 )
        v11 = v10 >> 31;
      else
        LOBYTE(v11) = *(_QWORD *)v9 < *(_QWORD *)v8;
      if ( !(_BYTE)v11 )
      {
        v12 = (char *)*a2;
        v13 = (char *)*v20;
        if ( *a2 == *v20 || v13 == &byte_1 || !v12 )
          break;
        if ( v12 != &byte_1 && v13 )
        {
          v14 = sub_2596A0(*v20, *a2, a3);
          if ( v14 )
          {
            if ( v14 >= 0 )
              break;
          }
          else if ( *(_QWORD *)v13 >= *(_QWORD *)v12 )
          {
            break;
          }
        }
LABEL_27:
        v16 = *(_BYTE **)(v5 + 16);
        v7 = 0;
        goto LABEL_29;
      }
    }
    v16 = *(_BYTE **)(v5 + 8);
    v7 = 1;
LABEL_29:
    if ( (*v16 & 2) != 0 )
      goto LABEL_30;
    v5 = (unsigned __int64)v16;
  }
  if ( v5 )
    return v5;
LABEL_30:
  v15 = v7;
  v4 = (_QWORD *)v5;
  return sub_349C10(a1, (__int64)v4, v15, v21);
}

