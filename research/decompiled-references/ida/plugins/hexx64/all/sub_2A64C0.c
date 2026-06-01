__int64 __fastcall sub_2A64C0(__m128i *a1, __int64 a2, _QWORD *a3, __int64 a4, __m128 a5)
{
  _QWORD *exception; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned __int64 *v9; // rsi
  int *v10; // r14
  unsigned __int64 v11; // rax
  bool v12; // zf
  char v13; // dl
  _QWORD *v14; // rdx
  _QWORD *i; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rax
  unsigned int *v23; // r12
  unsigned int *v24; // r13
  int v25; // eax
  int v26; // esi
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  char tinfo_property; // al
  __int64 v34; // [rsp+8h] [rbp-A0h]
  unsigned int *v38; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v39[4]; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v40[4]; // [rsp+50h] [rbp-58h] BYREF
  int v41; // [rsp+60h] [rbp-48h]
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v6 = (_QWORD *)*a3;
  if ( !*a3 )
    return 1;
  if ( !a3[1] )
    return 1;
  v7 = (_QWORD *)v6[1];
  if ( v6 == v7 )
    return 1;
  while ( 1 )
  {
    v9 = (unsigned __int64 *)a1->m128i_i64[0];
    v10 = (int *)(v7 + 3);
    if ( !a1->m128i_i64[0] )
    {
      v38 = (unsigned int *)(v7 + 3);
      v31 = qalloc();
      if ( !v31 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v31 + 16) = 0;
      *(_OWORD *)(v31 + 32) = 0;
      *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
      a1->m128i_i64[0] = v31;
      *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v31 & 3LL;
      a5 = (__m128)_mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
      *(__m128 *)(a1->m128i_i64[0] + 8) = a5;
      *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
      v9 = (unsigned __int64 *)a1->m128i_i64[0];
LABEL_8:
      sub_2A6340(a1, v9, 1, &v38);
      goto LABEL_9;
    }
    v11 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v11 )
      break;
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v12 = a1->m128i_i64[1] == 0;
      v38 = (unsigned int *)(v7 + 3);
      v13 = 1;
      if ( !v12 )
        goto LABEL_26;
      goto LABEL_8;
    }
    v17 = v7[3];
    v18 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 24);
      v34 = v18 + 24;
      if ( v17 >= v19 )
        break;
      v18 = *(_QWORD *)(v18 + 8);
LABEL_19:
      if ( (*(_BYTE *)v18 & 2) != 0 )
        goto LABEL_20;
    }
    if ( v19 < v17 )
    {
      v18 = *(_QWORD *)(v18 + 16);
      goto LABEL_19;
    }
    if ( v9 != (unsigned __int64 *)v18 )
      goto LABEL_30;
LABEL_20:
    v12 = a1->m128i_i64[1] == 0;
    v38 = (unsigned int *)(v7 + 3);
    if ( v12 )
      goto LABEL_8;
    v9 = (unsigned __int64 *)v11;
    v20 = *(_QWORD *)v10;
    v13 = 1;
    v21 = *(_QWORD *)(v11 + 24);
    if ( *(_QWORD *)v10 < v21 )
    {
LABEL_22:
      v22 = (unsigned __int64 *)v9[1];
      v13 = 1;
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_26;
      goto LABEL_23;
    }
    while ( v21 < v20 )
    {
      v22 = (unsigned __int64 *)v9[2];
      v13 = 0;
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_26;
LABEL_23:
      v9 = v22;
      v21 = v22[3];
      if ( v20 < v21 )
        goto LABEL_22;
    }
    if ( !v9 )
LABEL_26:
      sub_2A6340(a1, v9, v13, &v38);
LABEL_9:
    if ( (*v7 & 2) == 0 )
    {
      v14 = (_QWORD *)v7[2];
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
        v28 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
        v29 = *v28;
        if ( (*v28 & 2) == 0 )
        {
          while ( (_QWORD *)v28[2] == v7 )
          {
            v7 = v28;
            v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
            v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v29 & 2) != 0 )
            {
              v7 = (_QWORD *)v30;
              goto LABEL_14;
            }
            v28 = (_QWORD *)v30;
          }
        }
        v7 = v28;
      }
      else
      {
        for ( i = (_QWORD *)v14[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v14 = i;
        v7 = v14;
      }
    }
LABEL_14:
    if ( (_QWORD *)*a3 == v7 )
      return 1;
  }
  v34 = 24;
  v18 = 0;
LABEL_30:
  v23 = (unsigned int *)(v18 + 32);
  v24 = (unsigned int *)(v7 + 4);
  if ( !(unsigned int)sub_29E6F0((__int64)(v7 + 4), v18 + 32, *(double *)a5.m128_u64) )
    goto LABEL_9;
  v25 = *((_DWORD *)v7 + 8);
  v26 = *(_DWORD *)(v34 + 8);
  if ( v25 == 1 )
  {
    if ( v26 != 1 )
    {
      if ( v26 != 6 )
        return 0;
      goto LABEL_55;
    }
    if ( (get_tinfo_property() & 0x2F) != 0xD
      || !(unsigned __int8)sub_29DA00((__int64 **)a1, a2, (int)v18 + 40, (int)v7 + 40, *v10, *(double *)a5.m128_u64) )
    {
      goto LABEL_9;
    }
LABEL_47:
    sub_29F770((__int64)v23, v24, *(double *)a5.m128_u64);
    goto LABEL_9;
  }
  if ( v25 != 6 )
  {
    if ( v26 != 6 )
      return 0;
LABEL_45:
    if ( v25 != 8 )
    {
      v39[0] = 0;
      sub_29F770((__int64)v39, v23, *(double *)a5.m128_u64);
      v40[0] = 0;
      sub_29F770((__int64)v40, v24, *(double *)a5.m128_u64);
      v41 = 1;
      sub_29F770(a4, v39, *(double *)a5.m128_u64);
      sub_29F770(a4 + 16, v40, *(double *)a5.m128_u64);
      v32 = v41;
      v41 = -1;
      *(_DWORD *)(a4 + 32) = v32;
      sub_29EC30((__int64)v40, *(double *)a5.m128_u64);
      sub_29EC30((__int64)v39, *(double *)a5.m128_u64);
    }
    goto LABEL_47;
  }
  if ( v26 != 1 || (tinfo_property = get_tinfo_property(), v26 = *(_DWORD *)(v34 + 8), (tinfo_property & 0x3F) != 1) )
  {
    if ( v26 != 8 )
    {
      v39[0] = 0;
      sub_29F770((__int64)v39, (unsigned int *)v7 + 8, *(double *)a5.m128_u64);
      v40[0] = 0;
      sub_29F770((__int64)v40, v23, *(double *)a5.m128_u64);
      v41 = 1;
      sub_29F770(a4, v39, *(double *)a5.m128_u64);
      sub_29F770(a4 + 16, v40, *(double *)a5.m128_u64);
      v27 = v41;
      v41 = -1;
      *(_DWORD *)(a4 + 32) = v27;
      sub_29EC30((__int64)v40, *(double *)a5.m128_u64);
      sub_29EC30((__int64)v39, *(double *)a5.m128_u64);
    }
    goto LABEL_9;
  }
  if ( v26 != 6 )
    return 0;
  v25 = *((_DWORD *)v7 + 8);
  if ( v25 != 1 )
    goto LABEL_45;
LABEL_55:
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    v25 = *((_DWORD *)v7 + 8);
    goto LABEL_45;
  }
  return 0;
}

