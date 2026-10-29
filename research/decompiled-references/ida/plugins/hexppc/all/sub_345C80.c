__int64 __fastcall sub_345C80(__m128i *a1, __int64 *a2)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rbx
  char v6; // r15
  char *v7; // r14
  char *v8; // r13
  unsigned int v9; // eax
  unsigned int v10; // eax
  char *v11; // r13
  char *v12; // r14
  int v13; // eax
  char v14; // dl
  _BYTE *v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm1
  _QWORD *exception; // rdi
  __int64 *v19; // [rsp+8h] [rbp-50h]
  __int64 *v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v20[1] = (__int64 *)__readfsqword(0x28u);
  v20[0] = a2;
  v3 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v16 = qalloc();
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
    if ( !v16 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v16 + 64) = 0;
    *(_OWORD *)(v16 + 16) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(_OWORD *)(v16 + 48) = 0;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v16 + 8) = v17;
    a1->m128i_i64[0] = v16;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v3 = (unsigned __int64 *)a1->m128i_i64[0];
    return sub_345A90(a1, v3, 1, v20);
  }
  if ( !a1->m128i_i64[1] )
    return sub_345A90(a1, v3, 1, v20);
  v6 = 1;
  v4 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v4 & 2) != 0 )
  {
    v14 = 1;
    return sub_345A90(a1, v3, v14, v20);
  }
  while ( 1 )
  {
    v7 = *(char **)(v4 + 24);
    v8 = (char *)*a2;
    v19 = (__int64 *)(v4 + 24);
    if ( v7 == (char *)*a2 )
      break;
    if ( v8 == &byte_1 || !v7 )
    {
      if ( !v8 || v7 == &byte_1 )
        break;
      goto LABEL_27;
    }
    if ( v7 != &byte_1 && v8 )
    {
      v9 = sub_255A20((__int64)v8, (__int64)v7);
      if ( v9 )
        v10 = v9 >> 31;
      else
        LOBYTE(v10) = *(_QWORD *)v8 < *(_QWORD *)v7;
      if ( !(_BYTE)v10 )
      {
        v11 = (char *)*a2;
        v12 = (char *)*v19;
        if ( *a2 == *v19 || v12 == &byte_1 || !v11 )
          break;
        if ( v11 != &byte_1 && v12 )
        {
          v13 = sub_255A20(*v19, *a2);
          if ( v13 )
          {
            if ( v13 >= 0 )
              break;
          }
          else if ( *(_QWORD *)v12 >= *(_QWORD *)v11 )
          {
            break;
          }
        }
LABEL_27:
        v15 = *(_BYTE **)(v4 + 16);
        v6 = 0;
        goto LABEL_29;
      }
    }
    v15 = *(_BYTE **)(v4 + 8);
    v6 = 1;
LABEL_29:
    if ( (*v15 & 2) != 0 )
      goto LABEL_30;
    v4 = (unsigned __int64)v15;
  }
  if ( v4 )
    return v4;
LABEL_30:
  v14 = v6;
  v3 = (unsigned __int64 *)v4;
  return sub_345A90(a1, v3, v14, v20);
}

