__int64 __fastcall sub_3A38E0(__int64 a1, __int64 a2, double a3)
{
  __int64 *v3; // r12
  __int64 v4; // rcx
  _QWORD *v5; // r13
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  char *v8; // r14
  __int8 v9; // dl
  char *v10; // rbp
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 v14; // rdx
  void *v15; // rbp
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // rbx
  char *v19; // rbp
  int v20; // eax
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v22; // [rsp+1Fh] [rbp-39h]

  v3 = (__int64 *)a2;
  v5 = (_QWORD *)sub_258020(*(_QWORD *)(a1 + 24));
  if ( !*v5 )
    return 0;
  v6 = 24;
  v7 = *(_QWORD *)*v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
    goto LABEL_18;
  if ( (*(_BYTE *)v7 & 2) != 0 )
    return 0;
  v8 = *(char **)(a1 + 32);
  v9 = v8 == &byte_1;
  LOBYTE(v4) = v8 == nullptr;
  while ( 1 )
  {
    v10 = *(char **)(v7 + 24);
    v6 = v7 + 24;
    if ( v8 == v10 )
      break;
    if ( !v10 || v9 )
    {
      if ( v10 == &byte_1 || (_BYTE)v4 )
        break;
      goto LABEL_25;
    }
    if ( v10 != &byte_1 && !(_BYTE)v4 )
    {
      a2 = *(_QWORD *)(v7 + 24);
      v22 = 0;
      v21.m128i_i8[0] = 0;
      v11 = sub_2596A0((__int64)v8, a2, a3);
      v9 = 0;
      v4 = 0;
      if ( v11 )
        v12 = v11 >> 31;
      else
        LOBYTE(v12) = *(_QWORD *)v8 < *(_QWORD *)v10;
      if ( !(_BYTE)v12 )
      {
        v19 = *(char **)v6;
        if ( v8 == *(char **)v6 || v19 == &byte_1 )
          break;
        if ( v19 )
        {
          a2 = (__int64)v8;
          v20 = sub_2596A0(*(_QWORD *)v6, (__int64)v8, a3);
          v9 = v21.m128i_i8[0];
          v4 = v22;
          if ( v20 )
          {
            if ( v20 >= 0 )
              break;
          }
          else if ( *(_QWORD *)v19 >= *(_QWORD *)v8 )
          {
            break;
          }
        }
LABEL_25:
        v7 = *(_QWORD *)(v7 + 16);
        goto LABEL_14;
      }
    }
    v7 = *(_QWORD *)(v7 + 8);
LABEL_14:
    if ( (*(_BYTE *)v7 & 2) != 0 )
      return 0;
  }
  if ( *v5 == v7 )
    return 0;
LABEL_18:
  v14 = *(_QWORD *)(v6 + 16);
  v15 = nullptr;
  v16 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  if ( v14 )
  {
    v21 = v16;
    v18 = 16 * v14;
    v15 = (void *)qalloc_or_throw(v18, a2, v18, v4);
    memcpy(v15, *(const void **)(v6 + 8), v18);
    v16 = _mm_load_si128(&v21);
  }
  v17 = *v3;
  if ( *v3 )
  {
    v3[1] = 0;
    v21 = v16;
    qfree(v17);
    v16 = _mm_load_si128(&v21);
  }
  *v3 = (__int64)v15;
  v3[3] = 0;
  *(__m128i *)(v3 + 1) = v16;
  return 1;
}

