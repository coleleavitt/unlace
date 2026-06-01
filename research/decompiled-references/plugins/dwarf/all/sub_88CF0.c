__int64 __fastcall sub_88CF0(unsigned __int64 *a1, unsigned __int64 tinfo_size, __int64 a3, __int64 a4)
{
  __m128i **v6; // r12
  unsigned __int64 v7; // rbx
  bool v8; // zf
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  __m128i *v11; // rsi
  unsigned __int64 v12; // rcx
  __int32 v13; // edx
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rax
  const void *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 *v19; // rax
  __m128i *v20; // rcx
  unsigned __int8 v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+10h] [rbp-98h] BYREF
  __int64 v23; // [rsp+18h] [rbp-90h] BYREF
  __m128i v24; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-78h]
  __m128i *v26; // [rsp+40h] [rbp-68h] BYREF
  __int128 v27; // [rsp+48h] [rbp-60h]
  unsigned __int64 v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v22 = 0;
  copy_tinfo_t(&v22, a3);
  v21 = v22;
  set_tinfo_property(&v22, 6, 192);
  v6 = *(__m128i ***)(a4 + 8);
  v26 = nullptr;
  v27 = 0;
  if ( v6 )
  {
    v16 = (unsigned __int64 *)qalloc_or_throw(24LL * (_QWORD)v6);
    v17 = *(const void **)a4;
    v26 = (__m128i *)v16;
    *((_QWORD *)&v27 + 1) = v6;
    memcpy(v16, v17, 24LL * (_QWORD)v6);
    *(_QWORD *)&v27 = v6;
  }
  v7 = *(_QWORD *)(a4 + 24);
  v8 = *(_DWORD *)(*(_QWORD *)tinfo_size + 124LL) == 8;
  v28 = v7;
  if ( !v8 )
    goto LABEL_5;
  if ( v7 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_5;
  v6 = &v26;
  tinfo_size = get_tinfo_size(0, v22, 0);
  v18 = tinfo_size * sub_81CE0((unsigned __int64 **)&v26);
  if ( v7 >= v18 && (v18 || !tinfo_size || v7 % tinfo_size) )
    goto LABEL_5;
  if ( (debug & 0x400000) != 0 )
    sub_88B80(
      (__int64)"Array has either too many elements for its declared size of %llu bytes, or has a 0-dimension for that val"
               "id declared size. Computing number of elements from declared size.",
      v7);
  v11 = v26;
  if ( (_QWORD)v27 == 1 )
    goto LABEL_33;
  LOBYTE(v25) = 0;
  v19 = (unsigned __int64 *)v26;
  v24 = 0;
  if ( (unsigned __int64)v27 <= 1 )
  {
    if ( &v24 < v26 || &v24 >= (__m128i *)((char *)v26 + 24 * *((_QWORD *)&v27 + 1)) )
    {
      if ( !*((_QWORD *)&v27 + 1) )
        goto LABEL_42;
      goto LABEL_39;
    }
    if ( *((_QWORD *)&v27 + 1)
      || (v19 = (unsigned __int64 *)qvector_reserve(&v26, v26, 1, 24),
          v26 = (__m128i *)v19,
          v11 = (__m128i *)v19,
          !(_QWORD)v27) )
    {
      *((_BYTE *)v19 + 16) = 0;
      *(_OWORD *)v19 = 0;
      v11 = v26;
    }
  }
  while ( 1 )
  {
    *(_QWORD *)&v27 = 1;
LABEL_33:
    v11->m128i_i64[0] = 0;
    v20 = v26;
    v26[1].m128i_i8[0] = 0;
    v20->m128i_i64[1] = v7 / tinfo_size - 1;
LABEL_5:
    if ( !(_QWORD)v27 )
      break;
    if ( (int)v27 <= 0 )
    {
LABEL_18:
      copy_tinfo_t(a1, &v22);
      goto LABEL_19;
    }
    v9 = 24LL * ((int)v27 - 1);
    v10 = 24 * ((int)v27 - 1 - (unsigned __int64)(unsigned int)(v27 - 1));
    while ( 1 )
    {
      v23 = 0;
      v11 = (__m128i *)v26->m128i_i64[v9 / 8 + 1];
      v12 = v26->m128i_u64[v9 / 8];
      if ( (unsigned __int64)v11 < v12 )
        break;
      v13 = 0;
      if ( !v26[1].m128i_i8[v9] )
        v13 = (_DWORD)v11 + 1 - v12;
      v6 = (__m128i **)&v24;
      v24.m128i_i32[2] = 0;
      v24.m128i_i32[3] = v13;
      v24.m128i_i64[0] = 0;
      copy_tinfo_t(&v24, &v22);
      tinfo_size = (unsigned int)create_tinfo(&v23, 11, 11, &v24);
      clear_tinfo_t(&v24);
      if ( !(_BYTE)tinfo_size )
      {
        clear_tinfo_t(&v23);
        goto LABEL_15;
      }
      copy_tinfo_t(&v22, &v23);
      clear_tinfo_t(&v23);
      if ( v9 == v10 )
        goto LABEL_18;
      v9 -= 24LL;
    }
    if ( under_debugger )
      BUG();
    v7 = (unsigned __int64)&v23;
    interr(30369);
LABEL_42:
    v19 = (unsigned __int64 *)qvector_reserve(v6, v11, 1, 24);
    v26 = (__m128i *)v19;
    v11 = (__m128i *)v19;
    if ( !(_QWORD)v27 )
    {
LABEL_39:
      *(__m128i *)v19 = _mm_load_si128(&v24);
      v11 = v26;
      v19[2] = v25;
    }
  }
  v24 = 0u;
  copy_tinfo_t(&v24, &v22);
  create_tinfo(a1, 11, 11, &v24);
  clear_tinfo_t(&v24);
LABEL_19:
  v15 = *a1;
  if ( (unsigned __int8)*a1 )
  {
    LOBYTE(v15) = v15 & 0x3F;
    *a1 = v21 & 0xC0 | v15;
  }
  LODWORD(tinfo_size) = 1;
LABEL_15:
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  clear_tinfo_t(&v22);
  return (unsigned int)tinfo_size;
}
