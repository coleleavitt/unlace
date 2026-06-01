__int64 __fastcall sub_2D500(__int64 a1, const char *a2, unsigned __int8 *a3)
{
  const char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  __m128i v11; // xmm2
  __int64 regvar; // rax
  __m128 v13; // xmm4
  const char *v14; // rax
  __m128 v15; // xmm3
  __int64 v16; // rax
  const __m128i *v17; // r15
  __int64 v18; // rax
  __int64 *v19; // r12
  unsigned __int64 v20; // r13
  const char *v21; // rdi
  int v22; // r9d
  const void *v23; // rbx
  unsigned __int64 v24; // rbx
  const void *v25; // r9
  void *v26; // rax
  unsigned __int64 v27; // rbx
  const void *v28; // r9
  void *v29; // rax
  __m128i v30; // xmm0
  void *v31; // rdi
  int v32; // r9d
  unsigned int v33; // eax
  char *v34; // rax
  const char *v35; // rsi
  int v36; // r9d
  __m128i v38; // [rsp+10h] [rbp-158h] BYREF
  __int64 v39; // [rsp+20h] [rbp-148h]
  __int64 v40; // [rsp+28h] [rbp-140h]
  __int64 *v41; // [rsp+30h] [rbp-138h]
  __int64 *v42; // [rsp+38h] [rbp-130h]
  __int64 v43; // [rsp+40h] [rbp-128h]
  const void *v44; // [rsp+48h] [rbp-120h]
  __int64 v45; // [rsp+58h] [rbp-110h] BYREF
  __int64 v46; // [rsp+60h] [rbp-108h] BYREF
  __int128 v47; // [rsp+68h] [rbp-100h]
  __m128i v48; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v49; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-C8h]
  __int64 v51; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v52[24]; // [rsp+B8h] [rbp-B0h] BYREF
  void *dest; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-90h]
  void *v55; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-78h]
  __int64 v57; // [rsp+100h] [rbp-68h]
  char v58; // [rsp+108h] [rbp-60h]
  __m128i v59; // [rsp+110h] [rbp-58h] BYREF
  char v60; // [rsp+120h] [rbp-48h]
  unsigned __int64 v61; // [rsp+128h] [rbp-40h]

  v3 = a2;
  v39 = a1;
  v61 = __readfsqword(0x28u);
  v4 = sub_135E0(a1, a2);
  v5 = *(unsigned int *)(v4 + 1832);
  v48.m128i_i64[0] = 0;
  v6 = v4;
  v50 = 0;
  v49 = 0;
  if ( !(unsigned __int8)sub_27CC0(v4, &v45, &v48, v5, v7, v8) )
    return 0;
  v11 = _mm_load_si128(&v49);
  v41 = &v51;
  v40 = v50;
  v42 = &v46;
  LOBYTE(v51) = 1;
  *(_QWORD *)&v52[16] = 0;
  v46 = -1;
  v38 = v11;
  *(__m128i *)v52 = v11;
  if ( !(unsigned __int8)sub_2CA10((_QWORD *)(v6 + 1040), &v46, &v51) || !get_func() )
    return 0;
  regvar = find_regvar();
  if ( regvar )
  {
    v14 = *(const char **)(regvar + 24);
    if ( v14 )
    {
      if ( *v14 )
        v3 = v14;
    }
  }
  v15 = (__m128)_mm_load_si128(&v38);
  v43 = v15.m128_u64[0];
  v38.m128i_i64[0] = _mm_movehl_ps(v13, v15).m128_u64[0];
  v16 = sub_2C930((_QWORD *)(v6 + 1040), v15.m128_u64[0], v38.m128i_i64[0]);
  if ( !v16 )
    return 0;
  memset(v52, 0, sizeof(v52));
  dest = nullptr;
  v55 = nullptr;
  v58 = 0;
  v60 = 0;
  v54 = 0;
  v56 = 0;
  v17 = *(const __m128i **)(v16 + 144);
  v18 = 15LL * *(_QWORD *)(v16 + 152);
  v19 = &v17->m128i_i64[v18];
  if ( v18 * 8 )
  {
    while ( 1 )
    {
      v20 = v17[1].m128i_u64[0];
      v21 = nptr;
      if ( v20 )
        v21 = (const char *)v17->m128i_i64[1];
      if ( !strcmp(v21, v3) )
        break;
      v17 = (const __m128i *)((char *)v17 + 120);
      if ( v17 == (const __m128i *)v19 )
      {
        v9 = 0;
        goto LABEL_37;
      }
    }
    v51 = v17->m128i_i64[0];
    if ( v52 != (_BYTE *)&v17->m128i_u64[1] && v20 >= 2 )
    {
      v23 = (const void *)v17->m128i_i64[1];
      *(_QWORD *)v52 = qvector_reserve();
      *(_QWORD *)&v52[8] = v20;
      memmove(*(void **)v52, v23, v20 - 1);
      *(_BYTE *)(*(_QWORD *)v52 + v20 - 1) = 0;
    }
    if ( &dest != (void **)&v17[2] )
    {
      v24 = v17[2].m128i_u64[1];
      if ( v24 < 2 )
      {
        *(_QWORD *)&v54 = 0;
      }
      else
      {
        v25 = (const void *)v17[2].m128i_i64[0];
        v26 = dest;
        if ( *((_QWORD *)&v54 + 1) < v24 )
        {
          v44 = (const void *)v17[2].m128i_i64[0];
          v26 = (void *)qvector_reserve();
          dest = v26;
          v25 = v44;
        }
        *(_QWORD *)&v54 = v24;
        memmove(v26, v25, v24 - 1);
        *((char *)dest + v24 - 1) = 0;
      }
    }
    if ( &v55 != (void **)&v17[3].m128i_u64[1] )
    {
      v27 = v17[4].m128i_u64[0];
      if ( v27 < 2 )
      {
        *(_QWORD *)&v56 = 0;
      }
      else
      {
        v28 = (const void *)v17[3].m128i_i64[1];
        v29 = v55;
        if ( *((_QWORD *)&v56 + 1) < v27 )
        {
          v44 = (const void *)v17[3].m128i_i64[1];
          v29 = (void *)qvector_reserve();
          v55 = v29;
          v28 = v44;
        }
        *(_QWORD *)&v56 = v27;
        memmove(v29, v28, v27 - 1);
        *((char *)v55 + v27 - 1) = 0;
      }
    }
    v30 = _mm_loadl_epi64(v17 + 5);
    v57 = v30.m128i_i64[0];
    v59 = _mm_loadu_si128(v17 + 6);
    v60 = v17[7].m128i_i8[0];
    if ( v40 < v51 || v40 >= v51 + _mm_cvtsi128_si32(v30) )
    {
      v58 = 0;
      v31 = v55;
      v9 = 0;
      goto LABEL_35;
    }
    v58 = 1;
    if ( a3 )
    {
      if ( strchr("[BCLFDIJSVZstglc", (char)*a3) )
      {
        v33 = sub_27EB0(v6, (__int64)v41, v43, v38.m128i_i64[0], a3, v32);
LABEL_44:
        v9 = v33;
        if ( (_BYTE)v33 )
        {
          v46 = 0;
          v47 = 0;
          v9 = sub_19B20(v39, v42, v59.m128i_i8);
          if ( !(_BYTE)v9 && (unsigned __int64)v47 > 1 )
            sub_11340((__int64)"%s\n", (const char *)v46);
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree();
          }
        }
        v31 = v55;
LABEL_35:
        if ( v31 )
        {
          *(_QWORD *)&v56 = 0;
          qfree();
        }
LABEL_37:
        if ( dest )
        {
          *(_QWORD *)&v54 = 0;
          qfree();
        }
        goto LABEL_39;
      }
      sub_11340((__int64)"Wrong target type '%s' specified\n", (const char *)a3);
    }
    v34 = &byte_7FAF1;
    if ( (_QWORD)v54 )
      v34 = (char *)dest;
    if ( *v34 )
    {
      v33 = sub_27EB0(v6, (__int64)v41, v43, v38.m128i_i64[0], nullptr, v22);
    }
    else
    {
      v35 = nptr;
      if ( *(_QWORD *)&v52[8] )
        v35 = *(const char **)v52;
      sub_11340((__int64)"The type of variable '%s' is unknown, fallback to 'int'\n", v35);
      v33 = sub_27EB0(v6, (__int64)v41, v43, v38.m128i_i64[0], "I", v36);
    }
    goto LABEL_44;
  }
  v9 = 0;
LABEL_39:
  if ( *(_QWORD *)v52 )
  {
    *(_QWORD *)&v52[8] = 0;
    qfree();
  }
  return v9;
}

