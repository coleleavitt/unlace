unsigned __int64 __fastcall sub_307AF0(_QWORD *a1)
{
  __int64 v1; // r13
  bool (__fastcall *v2)(__int64); // rax
  __int64 v3; // rbx
  unsigned __int64 *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm0
  _BYTE *v21; // rdx
  int v22; // eax
  _BYTE *v23; // rax
  char v24; // al
  unsigned __int64 v25; // rbp
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rcx
  int v31; // eax
  _QWORD *exception; // rdi
  __int64 v33; // [rsp+8h] [rbp-B0h]
  __int64 v34; // [rsp+10h] [rbp-A8h]
  unsigned __int64 *v35; // [rsp+10h] [rbp-A8h]
  __int64 v36; // [rsp+10h] [rbp-A8h]
  char v37; // [rsp+27h] [rbp-91h]
  _BYTE *v38; // [rsp+28h] [rbp-90h]
  unsigned __int64 *v39; // [rsp+28h] [rbp-90h]
  const __m128i *v40; // [rsp+38h] [rbp-80h] BYREF
  __m128i v41; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-68h] BYREF
  char v43; // [rsp+60h] [rbp-58h]
  __m128i *v44; // [rsp+68h] [rbp-50h]
  unsigned __int64 v45; // [rsp+78h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  switch_dbctx();
  v41 = 0u;
  v1 = a1[5];
  v33 = v1 + 88LL * a1[6];
  if ( v33 == v1 )
    goto LABEL_11;
  do
  {
    while ( 1 )
    {
      v2 = **(bool (__fastcall ***)(__int64))v1;
      if ( v2 == sub_2A8A60 )
        break;
      v3 = v1 + 8;
      if ( v2(v1) )
      {
        v4 = (unsigned __int64 *)v41.m128i_i64[0];
        v40 = (const __m128i *)(v1 + 8);
        if ( !v41.m128i_i64[0] )
        {
LABEL_19:
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
          *(_OWORD *)(v16 + 16) = 0;
          *(_OWORD *)(v16 + 32) = 0;
          *(_OWORD *)(v16 + 48) = 0;
          *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | 2;
          v41.m128i_i64[0] = v16;
          v18 = *(_QWORD *)v16;
          *(_OWORD *)(v16 + 64) = 0;
          *(__m128i *)(v16 + 8) = v17;
          *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | v18 & 3;
          v19 = v41.m128i_i64[0];
          v20 = (__m128i)v41.m128i_u64[0];
          *(_QWORD *)v41.m128i_i64[0] &= ~1uLL;
          *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v20, v20);
          *(_QWORD *)v41.m128i_i64[0] |= 2uLL;
          v4 = (unsigned __int64 *)v41.m128i_i64[0];
LABEL_8:
          v5 = sub_307980(&v41, v4, 1, &v40);
LABEL_9:
          v6 = (unsigned __int64 *)v5;
          v7 = v5 + 24;
          goto LABEL_10;
        }
        goto LABEL_7;
      }
LABEL_3:
      v1 += 88;
      if ( v33 == v1 )
        goto LABEL_11;
    }
    v3 = v1 + 8;
    if ( !(unsigned int)sub_253040(v1 + 8, v1 + 64) )
      goto LABEL_3;
    v4 = (unsigned __int64 *)v41.m128i_i64[0];
    v40 = (const __m128i *)(v1 + 8);
    if ( !v41.m128i_i64[0] )
      goto LABEL_19;
LABEL_7:
    if ( !v41.m128i_i64[1] )
      goto LABEL_8;
    v21 = (_BYTE *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*v21 & 2) != 0 )
    {
      v24 = 1;
LABEL_28:
      v5 = sub_307980(&v41, v4, v24, &v40);
      goto LABEL_9;
    }
    v37 = 1;
    while ( 1 )
    {
      v35 = (unsigned __int64 *)v21;
      v38 = v21 + 24;
      v22 = sub_253040(v3, (__int64)(v21 + 24));
      v6 = v35;
      if ( v22 < 0 )
      {
        v37 = 1;
        v23 = (_BYTE *)v35[1];
        goto LABEL_25;
      }
      v30 = (__int64)v38;
      v39 = v35;
      v36 = v30;
      v31 = sub_253040(v30, v3);
      v7 = v36;
      v6 = v39;
      if ( v31 >= 0 )
        break;
      v37 = 0;
      v23 = (_BYTE *)v39[2];
LABEL_25:
      if ( (*v23 & 2) != 0 )
        goto LABEL_26;
      v21 = v23;
    }
    if ( !v39 )
    {
LABEL_26:
      v24 = v37;
      v4 = v6;
      goto LABEL_28;
    }
LABEL_10:
    v34 = v7;
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(v1 + 24);
    *(_BYTE *)(v7 + 20) = *(_BYTE *)(v1 + 28);
    *(_BYTE *)(v7 + 21) = *(_BYTE *)(v1 + 29);
    *(_BYTE *)(v7 + 22) = *(_BYTE *)(v1 + 30);
    *(_BYTE *)(v7 + 23) = *(_BYTE *)(v1 + 31);
    sub_2ABF30((__int64)(v6 + 6), v1 + 32);
    v8 = *(_QWORD *)(v1 + 56);
    v1 += 88;
    *(_QWORD *)(v34 + 48) = v8;
  }
  while ( v33 != v1 );
LABEL_11:
  v9 = a1[10];
  v10 = a1[8];
  v43 = 102;
  v42[1] = v9;
  v42[0] = &off_4B3AB8;
  v44 = &v41;
  sub_2B1600(v10, (__int64)v42);
  v11 = v41.m128i_i64[0];
  if ( !v41.m128i_i64[0] )
    return v45 - __readfsqword(0x28u);
  v12 = *(_QWORD *)v41.m128i_i64[0];
  if ( v41.m128i_i64[1] )
  {
    v25 = v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_37:
      *(_QWORD *)v11 = v12 & 3 | v11 & 0xFFFFFFFFFFFFFFFCLL;
      v28 = v41.m128i_i64[0];
      v29 = (__m128i)v41.m128i_u64[0];
      *(_QWORD *)v41.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v29, v29);
      *(_QWORD *)v41.m128i_i64[0] |= 2uLL;
      v41.m128i_i64[1] = 0;
      goto LABEL_14;
    }
    v26 = *(__int64 **)(v25 + 8);
    if ( (*(_BYTE *)v26 & 2) != 0 )
    {
      v27 = *(__int64 **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_44;
    }
    else
    {
      sub_2AC100(v26);
      v27 = *(__int64 **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_33;
    }
    sub_2AC100(v27);
LABEL_33:
    if ( (*(_BYTE *)v25 & 2) != 0 )
    {
LABEL_34:
      if ( v12 > 3 )
        qfree();
      v11 = v41.m128i_i64[0];
      v12 = *(_QWORD *)v41.m128i_i64[0];
      goto LABEL_37;
    }
LABEL_44:
    if ( *(_QWORD *)(v25 + 48) )
    {
      *(_QWORD *)(v25 + 56) = 0;
      qfree();
    }
    *(_QWORD *)v25 |= 2uLL;
    goto LABEL_34;
  }
  *(_QWORD *)v41.m128i_i64[0] = *(_QWORD *)v41.m128i_i64[0] & 3LL | v41.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v13 = v41.m128i_i64[0];
  v14 = (__m128i)v41.m128i_u64[0];
  *(_QWORD *)v41.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v14, v14);
  *(_QWORD *)v41.m128i_i64[0] |= 2uLL;
LABEL_14:
  if ( v41.m128i_i64[0] )
    qfree();
  return v45 - __readfsqword(0x28u);
}

