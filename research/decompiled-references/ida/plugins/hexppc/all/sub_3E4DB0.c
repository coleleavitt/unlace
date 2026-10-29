__int64 __fastcall sub_3E4DB0(__m128i *a1, __int64 *a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rax
  _DWORD *exception; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rax
  __m128 v11; // xmm0
  __int16 v12; // ax
  unsigned int v13; // r12d
  __int16 v14; // ax
  int v15; // ebx
  __int16 v16; // ax
  __int64 v17; // r13
  __int64 v18; // rbx
  void *v19; // r13
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  int v22; // ecx
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i *v30; // rbx
  __int16 v31; // ax
  _QWORD *v32; // r12
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  size_t v41; // rbp
  int v42; // ebx
  __int16 v43; // ax
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int8 *v46; // [rsp+18h] [rbp-110h]
  __int64 *v47; // [rsp+20h] [rbp-108h]
  int *v48; // [rsp+28h] [rbp-100h]
  __int64 v49; // [rsp+30h] [rbp-F8h]
  int v50; // [rsp+3Ch] [rbp-ECh]
  _QWORD v51[2]; // [rsp+40h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-C8h]
  __m128i v54; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+78h] [rbp-B0h]
  __int64 v56; // [rsp+80h] [rbp-A8h]
  int v57; // [rsp+88h] [rbp-A0h]
  __int64 v58[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-88h]
  __int64 v60; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-78h]
  __m128i v62; // [rsp+B8h] [rbp-70h] BYREF
  int v63; // [rsp+C8h] [rbp-60h] BYREF
  int v64; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+E8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v9 = a2;
  v10 = j__qalloc_or_throw();
  v11 = 0;
  *(_QWORD *)v10 = -1;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_QWORD *)(v10 + 104) = 0;
  *(_QWORD *)(v10 + 112) = 0;
  *(_QWORD *)(v10 + 136) = 0;
  *(_QWORD *)(v10 + 144) = 0;
  *(_QWORD *)(v10 + 152) = 0;
  *(_QWORD *)(v10 + 176) = 0;
  *(_QWORD *)(v10 + 184) = 0;
  *(_QWORD *)(v10 + 192) = 0;
  *(_QWORD *)(v10 + 216) = 0;
  *(_QWORD *)(v10 + 240) = 0;
  *(_QWORD *)(v10 + 248) = 0;
  *(_QWORD *)(v10 + 256) = 0;
  *(_QWORD *)(v10 + 280) = 0;
  *(_QWORD *)(v10 + 288) = 0;
  *(_OWORD *)(v10 + 32) = 0;
  *(_OWORD *)(v10 + 56) = 0;
  *(_OWORD *)(v10 + 120) = 0;
  *(_OWORD *)(v10 + 160) = 0;
  *(_OWORD *)(v10 + 200) = 0;
  *(_OWORD *)(v10 + 224) = 0;
  *(_OWORD *)(v10 + 264) = 0;
  *(_OWORD *)(v10 + 296) = 0;
  *a2 = v10;
  v12 = a1[67].m128i_i16[2];
  if ( (unsigned __int16)v12 <= 0xD6u )
  {
    if ( (unsigned __int16)v12 > 0xC8u )
    {
      switch ( a1[67].m128i_i16[2] )
      {
        case 0xC9:
          v50 = 48;
          goto LABEL_23;
        case 0xCA:
          v50 = 80;
          goto LABEL_23;
        case 0xCB:
          v50 = 96;
          goto LABEL_23;
        case 0xCC:
          v50 = 112;
          goto LABEL_23;
        case 0xCD:
          v50 = 128;
          goto LABEL_23;
        case 0xCE:
          v50 = 240;
          goto LABEL_23;
        case 0xD5:
          v50 = 224;
          goto LABEL_23;
        case 0xD6:
          v50 = 208;
          goto LABEL_23;
        default:
          break;
      }
    }
    if ( v12 == 62 )
    {
      v50 = 32;
      goto LABEL_6;
    }
LABEL_63:
    exception = __cxa_allocate_exception(4u);
    *exception = 47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v50 = 64;
  if ( v12 != 1031 )
    goto LABEL_63;
LABEL_23:
  sub_3E2460(a1);
  if ( a1[67].m128i_i16[2] != 58 )
  {
    v8 = __cxa_allocate_exception(4u);
    *v8 = 47;
    __cxa_throw(v8, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  while ( 1 )
  {
    sub_3E2460(a1);
    if ( a1[67].m128i_i16[2] == 62 )
      break;
    v32 = (_QWORD *)*v9;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v54 = 0;
    v33 = v32[5];
    v53 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
    v34 = v32[3];
    v51[0] = 0xFFFFFFFF00000000LL;
    v51[1] = 0;
    if ( (unsigned __int64)v51 < v34 || (unsigned __int64)v51 >= v34 + 80 * v33 )
    {
      v35 = v32[4];
      if ( v33 < v35 + 1 )
      {
        v39 = qvector_reserve();
        v32[3] = v39;
        v34 = v39;
        v35 = v32[4];
      }
      v36 = v34 + 80 * v35;
      sub_120000(v36, (unsigned __int8 *)v51);
      v37 = si128.m128i_i64[0];
      *(_QWORD *)(v36 + 24) = 0;
      v46 = (unsigned __int8 *)(v36 + 24);
      *(_QWORD *)(v36 + 16) = v37;
      v45.m128i_i64[0] = (__int64)&si128.m128i_i64[1];
      copy_tinfo_t();
      v38 = v53;
      v11 = (__m128)_mm_loadu_si128(&v54);
      *(_DWORD *)(v36 + 56) = 0;
      v53 = 0;
      *(_QWORD *)(v36 + 32) = v38;
      *(__m128 *)(v36 + 40) = v11;
      v54 = 0;
      copy_argloc();
      *(_DWORD *)(v36 + 72) = v57;
    }
    else
    {
      v46 = (unsigned __int8 *)v58;
      sub_120000((__int64)v58, (unsigned __int8 *)v51);
      v60 = 0;
      v45.m128i_i64[0] = (__int64)&si128.m128i_i64[1];
      v59 = si128.m128i_i64[0];
      v47 = &v60;
      copy_tinfo_t();
      v24 = _mm_loadu_si128(&v54);
      v54 = 0;
      v61 = v53;
      v48 = &v63;
      v53 = 0;
      v63 = 0;
      v62 = v24;
      copy_argloc();
      v64 = v57;
      v25 = v32[4];
      v26 = v32[3];
      if ( v32[5] < (unsigned __int64)(v25 + 1) )
      {
        v40 = qvector_reserve();
        v32[3] = v40;
        v25 = v32[4];
        v26 = v40;
      }
      v27 = v26 + 80 * v25;
      sub_120000(v27, v46);
      v28 = v59;
      *(_QWORD *)(v27 + 24) = 0;
      *(_QWORD *)(v27 + 16) = v28;
      v49 = v27 + 24;
      copy_tinfo_t();
      v29 = v61;
      v61 = 0;
      v11 = (__m128)_mm_loadu_si128(&v62);
      v62 = 0;
      *(_QWORD *)(v27 + 32) = v29;
      *(_DWORD *)(v27 + 56) = 0;
      *(__m128 *)(v27 + 40) = v11;
      copy_argloc();
      *(_DWORD *)(v27 + 72) = v64;
      cleanup_argloc();
      if ( v61 )
      {
        v62.m128i_i64[0] = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_119360((__int64)v46);
    }
    ++v32[4];
    cleanup_argloc();
    if ( v53 )
    {
      v54.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_119360((__int64)v51);
    v30 = (__m128i *)(*(_QWORD *)(*v9 + 24) + 80LL * *(_QWORD *)(*v9 + 32) - 80);
    if ( a1[67].m128i_i16[2] != 2 )
    {
      v7 = __cxa_allocate_exception(4u);
      *v7 = 47;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    sub_3E24A0((__int64)a1, &v30[1].m128i_i64[1]);
    sub_3E2460(a1);
    sub_3E3CD0(a1, v30, 1, v11);
    a2 = (__int64 *)v30[1].m128i_i64[1];
    v30->m128i_i32[1] = get_tinfo_size();
    v31 = a1[67].m128i_i16[2];
    if ( v31 == 62 )
      break;
    if ( v31 != 44 )
    {
      v6 = __cxa_allocate_exception(4u);
      *v6 = 47;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'int, nullptr);
    }
  }
LABEL_6:
  v13 = sub_3E1FC0(a1);
  if ( v13 )
  {
    v3 = __cxa_allocate_exception(4u);
    *v3 = v13;
    __cxa_throw(v3, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v14 = a1[67].m128i_i16[2];
  if ( v14 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
    goto LABEL_49;
  }
  if ( v14 == 15933 )
  {
    v42 = sub_3E1FC0(a1);
    if ( v42 )
    {
      v5 = __cxa_allocate_exception(4u);
      *v5 = v42;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v43 = a1[67].m128i_i16[2];
    if ( v43 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
    }
    else if ( v43 != 2 )
    {
      goto LABEL_62;
    }
    sub_3E24A0((__int64)a1, (_QWORD *)(*v9 + 72));
    v13 = sub_3E4B50(a1, (_QWORD *)*v9, v11);
    goto LABEL_17;
  }
  if ( v14 != 46 )
  {
LABEL_49:
    v58[0] = 1;
    v46 = (unsigned __int8 *)v58;
    copy_tinfo_t();
    clear_tinfo_t();
    goto LABEL_17;
  }
  v15 = sub_3E1FC0(a1);
  if ( v15 )
  {
    v2 = __cxa_allocate_exception(4u);
    *v2 = v15;
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  v16 = a1[67].m128i_i16[2];
  if ( v16 == 4 )
  {
    a1[67].m128i_i16[2] = 2;
LABEL_62:
    sub_5AE3A(a1, a2, *(double *)v11.m128_u64);
  }
  if ( v16 != 3 )
    goto LABEL_62;
  v17 = a1[66].m128i_i64[0];
  if ( v17 != (int)v17 )
    sub_5AE5C(a1);
  sub_3E2460(a1);
  if ( (_DWORD)v17 )
  {
    v44 = a1->m128i_i64[0];
    v46 = (unsigned __int8 *)v58;
    sub_328100(v58, *(_QWORD *)(v44 + 112), v17, 0);
    copy_tinfo_t();
    v13 = v17;
  }
  else
  {
    v58[0] = 1;
    v46 = (unsigned __int8 *)v58;
    copy_tinfo_t();
  }
  clear_tinfo_t();
LABEL_17:
  v18 = *v9;
  v19 = nullptr;
  sub_60E90((__int64 *)(*v9 + 136), (__int64 *)(*v9 + 96));
  v20 = *(_QWORD *)(v18 + 120);
  v21 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
  if ( v20 )
  {
    v45 = v21;
    v41 = 16 * v20;
    v19 = (void *)qalloc_or_throw();
    memcpy(v19, *(const void **)(v18 + 112), v41);
    v21 = _mm_load_si128(&v45);
  }
  if ( *(_QWORD *)(v18 + 152) )
  {
    *(_QWORD *)(v18 + 160) = 0;
    v45 = v21;
    qfree();
    v21 = _mm_load_si128(&v45);
  }
  *(_QWORD *)(v18 + 152) = v19;
  v22 = v50;
  *(__m128i *)(v18 + 160) = v21;
  *(_DWORD *)(*v9 + 280) |= 1u;
  *(_DWORD *)(*v9 + 8) = *(_QWORD *)(*v9 + 32);
  *(_DWORD *)(*v9 + 20) = v22;
  return v13;
}

