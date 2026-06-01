unsigned __int64 __fastcall sub_39C930(__m128i *a1, char **a2, __int64 **a3, double a4)
{
  unsigned __int64 *v6; // rsi
  __int64 **v7; // rcx
  char v8; // dl
  unsigned __int64 v10; // rbp
  char *v11; // r15
  char *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // eax
  char *v15; // r14
  char *v16; // r15
  int v17; // eax
  _BYTE *v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm1
  _QWORD *exception; // rax
  __int64 *v22; // [rsp+0h] [rbp-48h]
  char v23; // [rsp+Fh] [rbp-39h]

  v6 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v19 = qalloc();
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    if ( !v19 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v19 + 16) = 0;
    *(_OWORD *)(v19 + 32) = 0;
    *(_OWORD *)(v19 + 48) = 0;
    *(_QWORD *)v19 = v19 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v19 + 64) = 0;
    *(__m128i *)(v19 + 8) = v20;
    a1->m128i_i64[0] = v19;
    *(_QWORD *)v19 = v19 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v6 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v7 = a3;
    v8 = 1;
    return sub_39C7C0(a1, v6, v8, v7);
  }
  v8 = 1;
  v10 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v10 & 2) != 0 )
    goto LABEL_29;
  while ( 1 )
  {
    v11 = *(char **)(v10 + 24);
    v12 = *a2;
    v22 = (__int64 *)(v10 + 24);
    if ( v11 == *a2 )
      break;
    if ( v12 == &byte_1 || !v11 )
    {
      if ( v11 == &byte_1 || !v12 )
        break;
      goto LABEL_25;
    }
    v23 = v8;
    if ( v12 && v11 != &byte_1 )
    {
      v13 = sub_2596A0((__int64)v12, (__int64)v11, a4);
      v8 = v23;
      if ( v13 )
        v14 = v13 >> 31;
      else
        LOBYTE(v14) = *(_QWORD *)v12 < *(_QWORD *)v11;
      if ( !(_BYTE)v14 )
      {
        v15 = *a2;
        v16 = (char *)*v22;
        if ( *a2 == (char *)*v22 || v16 == &byte_1 || !v15 )
          break;
        if ( v15 != &byte_1 && v16 )
        {
          v17 = sub_2596A0(*v22, (__int64)*a2, a4);
          v8 = v23;
          if ( v17 )
          {
            if ( v17 >= 0 )
              break;
          }
          else if ( *(_QWORD *)v16 >= *(_QWORD *)v15 )
          {
            break;
          }
        }
LABEL_25:
        v18 = *(_BYTE **)(v10 + 16);
        v8 = 0;
        goto LABEL_27;
      }
    }
    v18 = *(_BYTE **)(v10 + 8);
    v8 = 1;
LABEL_27:
    if ( (*v18 & 2) != 0 )
      goto LABEL_28;
    v10 = (unsigned __int64)v18;
  }
  if ( v10 )
    return v10;
LABEL_28:
  v6 = (unsigned __int64 *)v10;
LABEL_29:
  v7 = a3;
  return sub_39C7C0(a1, v6, v8, v7);
}

