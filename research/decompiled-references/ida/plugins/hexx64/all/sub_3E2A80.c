unsigned __int64 __fastcall sub_3E2A80(__int64 *a1, double a2, __m128 a3, __m128i a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int64 *func; // rax
  __int64 *v15; // rdx
  signed int v16; // r14d
  __m128i v17; // xmm0
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  __m128i v22; // rax
  const __m128i *v23; // r11
  volatile signed __int32 *v24; // rax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rbx
  __int64 v27; // r13
  __int64 *v28; // rdi
  __int64 *v29; // rdi
  __int64 v30; // r13
  __int64 *v31; // rdi
  __int64 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  char v35; // r8
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  char v39; // r8
  unsigned __int64 v40; // rdi
  __int64 v41; // r10
  __int64 *v42; // rax
  __int64 *v43; // rdx
  __int64 v44; // rcx
  volatile signed __int32 *v45; // rdi
  _BYTE *v46; // rax
  __int64 v47; // rax
  volatile signed __int32 *v48; // rdi
  __int64 v49; // rsi
  volatile signed __int32 *v50; // rdi
  unsigned __int64 v51; // [rsp+0h] [rbp-C8h]
  const __m128i *v52; // [rsp+0h] [rbp-C8h]
  const __m128i *v53; // [rsp+0h] [rbp-C8h]
  __int64 *v54; // [rsp+8h] [rbp-C0h]
  __int64 v55; // [rsp+8h] [rbp-C0h]
  __int64 v56; // [rsp+8h] [rbp-C0h]
  __int64 v57; // [rsp+8h] [rbp-C0h]
  __int64 v58; // [rsp+8h] [rbp-C0h]
  __int64 v59; // [rsp+8h] [rbp-C0h]
  __int64 *v60; // [rsp+8h] [rbp-C0h]
  __m128i v61; // [rsp+10h] [rbp-B8h] BYREF
  __int64 *v62; // [rsp+20h] [rbp-A8h]
  __int64 v63; // [rsp+28h] [rbp-A0h]
  _QWORD v64[2]; // [rsp+30h] [rbp-98h] BYREF
  __m128i v65; // [rsp+40h] [rbp-88h] BYREF
  __int64 v66; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v67; // [rsp+58h] [rbp-70h]
  _QWORD v68[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v69; // [rsp+70h] [rbp-58h]
  __int128 v70; // [rsp+78h] [rbp-50h]
  unsigned __int64 v71; // [rsp+88h] [rbp-40h]

  v7 = a1[262];
  v62 = a1;
  v71 = __readfsqword(0x28u);
  v8 = (__int64 *)a1[261];
  v9 = &v8[v7];
  if ( v8 == v9 )
    return v71 - __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = *v8;
    if ( !*v8 )
      goto LABEL_19;
    v13 = *(_QWORD *)(v12 + 64);
    if ( !v13 )
      goto LABEL_19;
    if ( (unsigned int)(*(_DWORD *)(v13 + 60) - 1) > 1 )
      goto LABEL_19;
    func = (unsigned __int64 *)get_func();
    v15 = (__int64 *)func;
    if ( !func )
      goto LABEL_19;
    v16 = *(_DWORD *)(v12 + 56);
    v68[0] = 0;
    v68[1] = -1;
    v69 = 0;
    v70 = 0;
    v51 = *func;
    if ( !v11 )
    {
      v60 = (__int64 *)func;
      v47 = qalloc();
      v11 = v47;
      v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v47);
      if ( !v47 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v47 + 48) = 0;
      v15 = v60;
      *(_OWORD *)(v47 + 16) = 0;
      *(_OWORD *)(v47 + 32) = 0;
      *(__m128i *)(v47 + 8) = v17;
      *(_QWORD *)v47 = v47 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_9:
      v54 = v15;
      v61 = v17;
      v18 = qalloc();
      v19 = v18;
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
      if ( !v18 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      a4 = 0;
      v17 = _mm_load_si128(&v61);
      *(_OWORD *)(v18 + 32) = 0;
      *(_DWORD *)(v18 + 32) = v16;
      ++v10;
      v20 = v18 + 24;
      *(_QWORD *)(v18 + 24) = v51;
      v15 = v54;
      *(_OWORD *)(v18 + 40) = 0;
      *(_QWORD *)v18 = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v18 + 8) = v17;
      v21 = *(_QWORD *)v11;
      *(__m128 *)(v11 + 8) = a3;
      *(_QWORD *)v11 = v19 & 0xFFFFFFFFFFFFFFFCLL | v21 & 3;
      *(_QWORD *)v19 = v11 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 2LL;
LABEL_11:
      v22.m128i_i64[0] = *(_QWORD *)(v20 + 16);
      v23 = (const __m128i *)&v66;
      if ( !v22.m128i_i64[0] )
        goto LABEL_54;
      goto LABEL_12;
    }
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
    if ( !v10 )
      goto LABEL_9;
    v35 = 1;
    v36 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v36 = v11;
      v35 = 1;
      goto LABEL_47;
    }
    while ( 1 )
    {
      v20 = v36 + 24;
      if ( v51 < *(_QWORD *)(v36 + 24) )
      {
LABEL_64:
        v46 = *(_BYTE **)(v36 + 8);
        v35 = 1;
        goto LABEL_65;
      }
      if ( v51 == *(_QWORD *)(v36 + 24) )
      {
        if ( *(_DWORD *)(v36 + 32) > v16 )
          goto LABEL_64;
        if ( *(_DWORD *)(v36 + 32) >= v16 )
          break;
      }
      v46 = *(_BYTE **)(v36 + 16);
      v35 = 0;
LABEL_65:
      if ( (*v46 & 2) != 0 )
        goto LABEL_47;
      v36 = (unsigned __int64)v46;
    }
    if ( v36 )
      goto LABEL_11;
LABEL_47:
    LOBYTE(v63) = v35;
    v61.m128i_i64[0] = v36;
    v55 = (__int64)v15;
    v37 = qalloc();
    if ( !v37 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v38 = v61.m128i_i64[0];
    *(_OWORD *)(v37 + 32) = 0;
    v15 = (__int64 *)v55;
    v39 = v63;
    *(_OWORD *)(v37 + 40) = 0;
    v40 = v38 & 0xFFFFFFFFFFFFFFFCLL;
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
    *(_QWORD *)(v37 + 24) = v51;
    *(_DWORD *)(v37 + 32) = v16;
    *(__m128i *)(v37 + 8) = v17;
    *(_QWORD *)v37 = v38 & 0xFFFFFFFFFFFFFFFCLL | 1;
    if ( v11 == v38 )
    {
      v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
      v49 = *(_QWORD *)v11 & 3LL;
      *(__m128i *)(v11 + 8) = v17;
      *(_QWORD *)v11 = v37 & 0xFFFFFFFFFFFFFFFCLL | v49;
      *(_QWORD *)v37 = v40 | *(_QWORD *)v37 & 2LL;
    }
    else
    {
      if ( v39 )
      {
        *(_QWORD *)(v38 + 8) = v37;
        if ( v38 == *(_QWORD *)(v11 + 8) )
          *(_QWORD *)(v11 + 8) = v37;
      }
      else
      {
        *(_QWORD *)(v38 + 16) = v37;
        if ( v38 == *(_QWORD *)(v11 + 16) )
          *(_QWORD *)(v11 + 16) = v37;
      }
      v61.m128i_i64[0] = v55;
      v56 = v37;
      v64[0] = v11;
      v64[1] = v10;
      sub_3E27B0(v64, (__int64 *)v37);
      v15 = (__int64 *)v61.m128i_i64[0];
      v37 = v56;
    }
    v20 = v37 + 24;
    ++v10;
    v23 = (const __m128i *)&v66;
    v22.m128i_i64[0] = *(_QWORD *)(v37 + 40);
    if ( v22.m128i_i64[0] )
      goto LABEL_12;
LABEL_54:
    v61.m128i_i64[0] = v20;
    sub_3D1130(&v66, *v62, v15, v16, v68, *(double *)v17.m128i_i64, *(double *)a3.m128_u64, a4, 0.0);
    v41 = v61.m128i_i64[0];
    if ( v66 )
    {
      v63 = v61.m128i_i64[0];
      v61.m128i_i64[0] = (__int64)&v66;
      v57 = v66;
      sub_84290(v66);
      j__qfree(v57);
      v41 = v63;
    }
    v58 = v41;
    v42 = (__int64 *)sub_3D4440((__int64)v62, v51);
    v20 = v58;
    if ( v42 == v43 )
    {
LABEL_76:
      v45 = *(volatile signed __int32 **)(v58 + 24);
      *(_QWORD *)(v58 + 16) = 0;
      *(_QWORD *)(v58 + 24) = 0;
      if ( !v45 )
        goto LABEL_17;
LABEL_61:
      v59 = v20;
      v53 = v23;
      sub_3D56E0(v45);
      v20 = v59;
      v23 = v53;
      v22.m128i_i64[0] = *(_QWORD *)(v59 + 16);
    }
    else
    {
      while ( v16 != *(_DWORD *)(*v42 + 56) )
      {
        if ( v43 == ++v42 )
          goto LABEL_76;
      }
      v52 = v23;
      sub_3DEE30(
        &v65,
        *v42,
        *v62,
        v44,
        *(double *)v17.m128i_i64,
        *(double *)a3.m128_u64,
        *(double *)a4.m128i_i64,
        (__m128)0LL);
      v20 = v58;
      v22 = v65;
      v23 = v52;
      v45 = *(volatile signed __int32 **)(v58 + 24);
      *(__m128i *)(v58 + 16) = v65;
      if ( v45 )
        goto LABEL_61;
    }
    if ( v22.m128i_i64[0] )
    {
LABEL_12:
      v66 = v22.m128i_i64[0];
      v24 = *(volatile signed __int32 **)(v20 + 24);
      if ( v24 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v24 + 2, 1u);
        else
          ++*((_DWORD *)v24 + 2);
      }
      v67 = v24;
      sub_3D5A90(v12, v23);
      if ( v67 )
        sub_3D56E0(v67);
    }
LABEL_17:
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(v69);
    }
LABEL_19:
    ++v8;
  }
  while ( v9 != v8 );
  if ( !v11 )
    return v71 - __readfsqword(0x28u);
  if ( !v10 )
    goto LABEL_43;
  v25 = *(_QWORD *)v11;
  v26 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v26 & 2) != 0 )
    goto LABEL_43;
  v27 = *(_QWORD *)(v26 + 8);
  if ( (*(_BYTE *)v27 & 2) != 0 )
  {
    v30 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)v30 & 2) == 0 )
      goto LABEL_31;
    goto LABEL_38;
  }
  v28 = *(__int64 **)(v27 + 8);
  if ( (*(_BYTE *)v28 & 2) != 0 )
  {
    v29 = *(__int64 **)(v27 + 16);
    if ( (*(_BYTE *)v29 & 2) == 0 )
    {
LABEL_26:
      sub_3D5D70(v29);
      goto LABEL_27;
    }
    goto LABEL_84;
  }
  sub_3D5D70(v28);
  v29 = *(__int64 **)(v27 + 16);
  if ( (*(_BYTE *)v29 & 2) == 0 )
    goto LABEL_26;
LABEL_27:
  if ( (*(_BYTE *)v27 & 2) == 0 )
  {
LABEL_84:
    v48 = *(volatile signed __int32 **)(v27 + 48);
    if ( v48 )
      sub_3D56E0(v48);
    *(_QWORD *)v27 |= 2uLL;
  }
  if ( v27 )
    qfree(v27);
  v30 = *(_QWORD *)(v26 + 16);
  if ( (*(_BYTE *)v30 & 2) == 0 )
  {
LABEL_31:
    v31 = *(__int64 **)(v30 + 8);
    if ( (*(_BYTE *)v31 & 2) != 0 )
    {
      v32 = *(__int64 **)(v30 + 16);
      if ( (*(_BYTE *)v32 & 2) == 0 )
      {
LABEL_33:
        sub_3D5D70(v32);
        goto LABEL_34;
      }
    }
    else
    {
      sub_3D5D70(v31);
      v32 = *(__int64 **)(v30 + 16);
      if ( (*(_BYTE *)v32 & 2) == 0 )
        goto LABEL_33;
LABEL_34:
      if ( (*(_BYTE *)v30 & 2) != 0 )
      {
LABEL_35:
        if ( v30 )
          qfree(v30);
        goto LABEL_37;
      }
    }
    v50 = *(volatile signed __int32 **)(v30 + 48);
    if ( v50 )
      sub_3D56E0(v50);
    *(_QWORD *)v30 |= 2uLL;
    goto LABEL_35;
  }
LABEL_37:
  if ( (*(_BYTE *)v26 & 2) == 0 )
  {
LABEL_38:
    v33 = *(volatile signed __int32 **)(v26 + 48);
    if ( v33 )
      sub_3D56E0(v33);
    *(_QWORD *)v26 |= 2uLL;
  }
  if ( v25 > 3 )
    qfree(v26);
LABEL_43:
  qfree(v11);
  return v71 - __readfsqword(0x28u);
}

