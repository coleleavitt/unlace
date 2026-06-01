unsigned __int64 __fastcall sub_307580(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  bool (__fastcall *v3)(__int64); // rax
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm0
  int v13; // esi
  char v14; // cl
  _BYTE *v15; // rdx
  char v16; // dl
  unsigned __int64 v17; // rbp
  _BYTE *v18; // rdi
  _BYTE *v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // rax
  __m128i v25; // xmm0
  _QWORD *exception; // rdi
  int *v27; // [rsp+18h] [rbp-80h] BYREF
  __m128i v28; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-68h] BYREF
  char v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  __m128i *v32; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  switch_dbctx();
  v28 = 0u;
  v1 = a1[5];
  v2 = v1 + 48LL * a1[6];
  if ( v2 == v1 )
    goto LABEL_10;
  do
  {
    while ( 1 )
    {
      v3 = **(bool (__fastcall ***)(__int64))v1;
      if ( v3 == sub_2A8560 )
        break;
      if ( v3(v1) )
        goto LABEL_6;
LABEL_3:
      v1 += 48;
      if ( v2 == v1 )
        goto LABEL_10;
    }
    if ( *(_DWORD *)(v1 + 8) == *(_DWORD *)(v1 + 40) )
      goto LABEL_3;
LABEL_6:
    v4 = (unsigned __int64 *)v28.m128i_i64[0];
    v27 = (int *)(v1 + 8);
    if ( !v28.m128i_i64[0] )
    {
      v22 = qalloc();
      v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
      if ( !v22 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v22 + 48) = 0;
      *(_OWORD *)(v22 + 16) = 0;
      *(_OWORD *)(v22 + 32) = 0;
      *(__m128i *)(v22 + 8) = v23;
      *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v28.m128i_i64[0] = v22;
      *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 3LL;
      v24 = v28.m128i_i64[0];
      v25 = (__m128i)v28.m128i_u64[0];
      *(_QWORD *)v28.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64(v25, v25);
      *(_QWORD *)v28.m128i_i64[0] |= 2uLL;
      v4 = (unsigned __int64 *)v28.m128i_i64[0];
LABEL_8:
      v5 = sub_307420(&v28, v4, 1, &v27);
      goto LABEL_9;
    }
    if ( !v28.m128i_i64[1] )
      goto LABEL_8;
    v5 = *(_QWORD *)v28.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v16 = 1;
LABEL_24:
      v5 = sub_307420(&v28, v4, v16, &v27);
      goto LABEL_9;
    }
    v13 = *(_DWORD *)(v1 + 8);
    v14 = 1;
    while ( 1 )
    {
      if ( v13 < *(_DWORD *)(v5 + 24) )
      {
        v15 = *(_BYTE **)(v5 + 8);
        v14 = 1;
        if ( (*v15 & 2) != 0 )
          goto LABEL_22;
        goto LABEL_36;
      }
      if ( v13 <= *(_DWORD *)(v5 + 24) )
        break;
      v15 = *(_BYTE **)(v5 + 16);
      v14 = 0;
      if ( (*v15 & 2) != 0 )
        goto LABEL_22;
LABEL_36:
      v5 = (unsigned __int64)v15;
    }
    if ( !v5 )
    {
LABEL_22:
      v16 = v14;
      v4 = (unsigned __int64 *)v5;
      goto LABEL_24;
    }
LABEL_9:
    sub_2ABF30(v5 + 32, v1 + 16);
    v1 += 48;
  }
  while ( v2 != v1 );
LABEL_10:
  v6 = a1[10];
  v7 = a1[8];
  v30 = 108;
  v29[1] = v6;
  v31 = 0;
  v32 = &v28;
  v29[0] = &off_4B3D88;
  sub_2B1600(v7, (__int64)v29);
  v8 = v28.m128i_i64[0];
  if ( !v28.m128i_i64[0] )
    return v33 - __readfsqword(0x28u);
  v9 = *(_QWORD *)v28.m128i_i64[0];
  if ( v28.m128i_i64[1] )
  {
    v17 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_33:
      *(_QWORD *)v8 = v9 & 3 | v8 & 0xFFFFFFFFFFFFFFFCLL;
      v20 = v28.m128i_i64[0];
      v21 = (__m128i)v28.m128i_u64[0];
      *(_QWORD *)v28.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v21, v21);
      *(_QWORD *)v28.m128i_i64[0] |= 2uLL;
      v28.m128i_i64[1] = 0;
      goto LABEL_13;
    }
    v18 = *(_BYTE **)(v17 + 8);
    if ( (*v18 & 2) != 0 )
    {
      v19 = *(_BYTE **)(v17 + 16);
      if ( (*v19 & 2) != 0 )
        goto LABEL_42;
    }
    else
    {
      sub_2AC490((__int64)v18);
      v19 = *(_BYTE **)(v17 + 16);
      if ( (*v19 & 2) != 0 )
        goto LABEL_29;
    }
    sub_2AC490((__int64)v19);
LABEL_29:
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
LABEL_30:
      if ( v9 > 3 )
        qfree();
      v8 = v28.m128i_i64[0];
      v9 = *(_QWORD *)v28.m128i_i64[0];
      goto LABEL_33;
    }
LABEL_42:
    if ( *(_QWORD *)(v17 + 32) )
    {
      *(_QWORD *)(v17 + 40) = 0;
      qfree();
    }
    *(_QWORD *)v17 |= 2uLL;
    goto LABEL_30;
  }
  *(_QWORD *)v28.m128i_i64[0] = *(_QWORD *)v28.m128i_i64[0] & 3LL | v28.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v10 = v28.m128i_i64[0];
  v11 = (__m128i)v28.m128i_u64[0];
  *(_QWORD *)v28.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v11, v11);
  *(_QWORD *)v28.m128i_i64[0] |= 2uLL;
LABEL_13:
  if ( v28.m128i_i64[0] )
    qfree();
  return v33 - __readfsqword(0x28u);
}

