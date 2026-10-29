__int64 __fastcall sub_10FF0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // rdx
  __int64 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rbx
  const char *v18; // rbp
  __m128i v19; // xmm1
  __int64 v20; // rdi
  __int64 v21; // rax
  const char *v22; // rbp
  __m128i v23; // xmm1
  __int64 v24; // rdi
  const char *v25; // rdi
  __m128i v26; // xmm1
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  const char *v38; // rdx
  const char *v39; // rsi
  __int64 v40; // rax
  const char *v41; // rdx
  __m128i v42; // [rsp+20h] [rbp-88h] BYREF
  const char *v43; // [rsp+30h] [rbp-78h] BYREF
  __int64 v44; // [rsp+38h] [rbp-70h]
  const char *v45; // [rsp+50h] [rbp-58h] BYREF
  __m128i v46[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v47; // [rsp+78h] [rbp-30h]
  int v48; // [rsp+80h] [rbp-28h]
  unsigned __int64 v49; // [rsp+88h] [rbp-20h]

  v49 = __readfsqword(0x28u);
  v8 = sub_BB20();
  if ( (unsigned int)sub_A170(v8) == 7 )
  {
    if ( (*(_BYTE *)(*a1 + 108LL) & 2) != 0 )
    {
      sub_10160(
        (__int64)&v45,
        a2,
        v9,
        v10,
        v11,
        v12,
        (__int128)_mm_loadu_si128((const __m128i *)&a7),
        (__int128)_mm_loadu_si128((const __m128i *)&a8));
      v13 = s1;
      if ( v46[0].m128i_i64[0] )
        v13 = v45;
      sub_7470((__int64)"%-12s %s\n", "enumval", v13);
      if ( v45 )
      {
        v46[0].m128i_i64[0] = 0;
        qfree(v45);
      }
    }
    v14 = (__int64 *)a1[1];
    v15 = v14[1];
    v16 = *v14;
    if ( v14[2] < (unsigned __int64)(v15 + 1) )
    {
      v40 = qvector_reserve(a1[1], v16, v15 + 1, 56);
      v15 = v14[1];
      *v14 = v40;
      v16 = v40;
    }
    v17 = v16 + 56 * v15;
    *(_OWORD *)(v17 + 8) = 0;
    *(_OWORD *)(v17 + 32) = 0;
    *(_QWORD *)v17 = 0;
    *(_QWORD *)(v17 + 24) = 0;
    ++v14[1];
    sub_C260((__int64)&v45);
    v18 = v45;
    v19 = _mm_loadu_si128(v46);
    v45 = nullptr;
    v46[0] = 0;
    v20 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 )
    {
      *(_QWORD *)(v17 + 8) = 0;
      v42 = v19;
      qfree(v20);
      v19 = _mm_load_si128(&v42);
    }
    *(_QWORD *)v17 = v18;
    *(__m128i *)(v17 + 8) = v19;
    if ( v45 )
    {
      v46[0].m128i_i64[0] = 0;
      qfree(v45);
    }
    v21 = sub_BB20();
    *(_QWORD *)(v17 + 48) = sub_AAA0(v21);
    sub_C420((__int64)&v45);
    v22 = v45;
    v23 = _mm_loadu_si128(v46);
    v45 = nullptr;
    v46[0] = 0;
    v24 = *(_QWORD *)(v17 + 24);
    if ( v24 )
    {
      *(_QWORD *)(v17 + 32) = 0;
      v42 = v23;
      qfree(v24);
      v25 = v45;
      v26 = _mm_load_si128(&v42);
      *(_QWORD *)(v17 + 24) = v22;
      *(__m128i *)(v17 + 32) = v26;
      if ( v25 )
      {
        v46[0].m128i_i64[0] = 0;
        qfree(v25);
      }
    }
    else
    {
      *(_QWORD *)(v17 + 24) = v22;
      *(__m128i *)(v17 + 32) = v23;
    }
  }
  else
  {
    v28 = sub_BB20();
    if ( (unsigned int)sub_A170(v28) == 437 )
    {
      if ( (*(_BYTE *)(*a1 + 108LL) & 2) != 0 )
      {
        sub_10160(
          (__int64)&v45,
          a2,
          v29,
          v30,
          v31,
          v32,
          (__int128)_mm_loadu_si128((const __m128i *)&a7),
          (__int128)_mm_loadu_si128((const __m128i *)&a8));
        v41 = s1;
        if ( v46[0].m128i_i64[0] )
          v41 = v45;
        sub_7470((__int64)"%-12s %s\n", "flag_enum", v41);
        if ( v45 )
        {
          v46[0].m128i_i64[0] = 0;
          qfree(v45);
        }
      }
      *(_BYTE *)(a1[1] + 52LL) |= 0x10u;
    }
    else
    {
      v33 = sub_BB20();
      if ( (unsigned int)sub_A170(v33) == 406 )
      {
        if ( (*(_BYTE *)(*a1 + 108LL) & 2) != 0 )
        {
          sub_10160(
            (__int64)&v45,
            a2,
            v34,
            v35,
            v36,
            v37,
            (__int128)_mm_loadu_si128((const __m128i *)&a7),
            (__int128)_mm_loadu_si128((const __m128i *)&a8));
          v38 = s1;
          if ( v46[0].m128i_i64[0] )
            v38 = v45;
          sub_7470((__int64)"%-12s %s\n", "annotate", v38);
          if ( v45 )
          {
            v46[0].m128i_i64[0] = 0;
            qfree(v45);
          }
        }
        sub_C260((__int64)&v43);
        v45 = nullptr;
        v47 = 1;
        v48 = -1;
        if ( (unsigned __int8)value_repr_t__parse_value_repr(&v45, &v43, 45) )
        {
          enum_type_data_t__set_value_repr(a1[1], &v45);
        }
        else
        {
          v39 = s1;
          if ( v44 )
            v39 = v43;
          sub_72C0((__int64)"Unrecognized enum attribute '%s'\n", v39);
        }
        if ( v43 )
        {
          v44 = 0;
          qfree(v43);
        }
      }
    }
  }
  return 1;
}

