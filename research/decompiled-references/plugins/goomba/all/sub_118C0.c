_QWORD *__fastcall sub_118C0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 sort; // rax
  __int64 v9; // r14
  unsigned int error_code; // eax
  unsigned __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __m128 v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned int v22; // eax
  unsigned __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // r12
  unsigned int v27; // eax
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rsi
  _QWORD *v37; // r12
  const char *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r12
  unsigned int v41; // eax
  unsigned __int64 v42; // r12
  __int64 v43; // rdi
  __int64 v44; // rdi
  int sort_kind; // eax
  __int64 v46; // r12
  unsigned int v47; // eax
  __m128i v48; // xmm0
  __int64 v49; // rdi
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // r12
  unsigned int v53; // eax
  unsigned __int64 v54; // rdx
  __int64 v55; // rdi
  int v56; // eax
  __int64 v57; // r12
  unsigned int v58; // eax
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __int64 v61; // rdi
  int v62; // r14d
  _QWORD *v63; // r12
  const char *v64; // rax
  _QWORD *v65; // rbp
  const char *v66; // rax
  _QWORD *v67; // r12
  const char *v68; // rax
  _QWORD *v69; // rbp
  const char *v70; // rax
  _QWORD *v71; // rbp
  const char *v72; // rax
  unsigned int v73; // r15d
  _QWORD *exception; // rbx
  const char *error_msg; // rax
  _QWORD *v76; // rbp
  const char *v77; // rax
  _QWORD *v78; // r12
  const char *v79; // rax
  __int64 v80; // [rsp+0h] [rbp-B8h]
  __int64 v81; // [rsp+0h] [rbp-B8h]
  unsigned int v82; // [rsp+0h] [rbp-B8h]
  __int64 v83; // [rsp+0h] [rbp-B8h]
  int v84; // [rsp+0h] [rbp-B8h]
  int v85; // [rsp+0h] [rbp-B8h]
  __int64 v86; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v87; // [rsp+0h] [rbp-B8h]
  unsigned int v88; // [rsp+0h] [rbp-B8h]
  unsigned int v89; // [rsp+0h] [rbp-B8h]
  unsigned int v90; // [rsp+0h] [rbp-B8h]
  unsigned int v91; // [rsp+0h] [rbp-B8h]
  unsigned int v92; // [rsp+0h] [rbp-B8h]
  __int64 v93; // [rsp+8h] [rbp-B0h]
  unsigned int v94; // [rsp+8h] [rbp-B0h]
  unsigned int v95; // [rsp+8h] [rbp-B0h]
  double v96; // [rsp+10h] [rbp-A8h] BYREF
  int v97; // [rsp+1Ch] [rbp-9Ch]
  _UNKNOWN **v98; // [rsp+20h] [rbp-98h]
  __m128i v99; // [rsp+28h] [rbp-90h]
  _UNKNOWN **v100; // [rsp+40h] [rbp-78h]
  __m128 v101; // [rsp+48h] [rbp-70h]
  _UNKNOWN **v102; // [rsp+60h] [rbp-58h]
  __m128i v103; // [rsp+68h] [rbp-50h]
  unsigned __int64 v104; // [rsp+78h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v104 = __readfsqword(0x28u);
  sort = Z3_get_sort(*(_QWORD *)(v5 + 8), v6);
  v9 = *(_QWORD *)(a2 + 8);
  v93 = sort;
  error_code = Z3_get_error_code(*(_QWORD *)(v9 + 8));
  if ( error_code && *(_BYTE *)v9 )
  {
    v73 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v9 + 8), v73);
    sub_105D0(exception, error_msg);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(v11 + 8);
  v99 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(unsigned __int64)v93);
  Z3_inc_ref(v12, v93);
  v13 = *(_QWORD *)(v5 + 8);
  v98 = &off_4D870;
  v14 = Z3_mk_int(v13, a3, v93);
  v15 = *(_QWORD *)(v5 + 8);
  v96 = v14;
  v16 = Z3_get_error_code(v15);
  v17 = _mm_loadh_ps((const double *)&v96);
  if ( v16 && *(_BYTE *)v5 )
  {
    v88 = v16;
    v63 = __cxa_allocate_exception(0x10u);
    v64 = (const char *)Z3_get_error_msg(*(_QWORD *)(v5 + 8), v88);
    sub_105D0(v63, v64);
    __cxa_throw(v63, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v18 = *(_QWORD *)(v5 + 8);
  v101 = v17;
  Z3_inc_ref(v18, v96);
  v19 = *(_QWORD *)(a2 + 16);
  v100 = &off_4D890;
  v20 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), v19);
  v21 = *(_QWORD *)(a2 + 8);
  v80 = v20;
  v22 = Z3_get_error_code(*(_QWORD *)(v21 + 8));
  if ( v22 && *(_BYTE *)v21 )
  {
    v91 = v22;
    v71 = __cxa_allocate_exception(0x10u);
    v72 = (const char *)Z3_get_error_msg(*(_QWORD *)(v21 + 8), v91);
    sub_105D0(v71, v72);
    __cxa_throw(v71, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v23 = *(_QWORD *)(a2 + 8);
  v24 = *(_QWORD *)(v23 + 8);
  v103 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)(unsigned __int64)v80);
  Z3_inc_ref(v24, v80);
  v25 = *(_QWORD *)(v23 + 8);
  v102 = &off_4D870;
  if ( (unsigned int)Z3_get_sort_kind(v25, v80) == 2 )
  {
    if ( !v80 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v23 + 8), v80) != 3 )
  {
    if ( v80 )
      Z3_dec_ref(*(_QWORD *)(v23 + 8));
    goto LABEL_28;
  }
  if ( v80 )
LABEL_9:
    Z3_dec_ref(*(_QWORD *)(v23 + 8));
LABEL_10:
  v26 = Z3_get_sort(*(_QWORD *)(v5 + 8), v96);
  v27 = Z3_get_error_code(*(_QWORD *)(v5 + 8));
  v28 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(unsigned __int64)v26);
  if ( v27 && *(_BYTE *)v5 )
  {
    v82 = v27;
    v37 = __cxa_allocate_exception(0x10u);
    v38 = (const char *)Z3_get_error_msg(*(_QWORD *)(v5 + 8), v82);
    sub_105D0(v37, v38);
    __cxa_throw(v37, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v29 = *(_QWORD *)(v5 + 8);
  v103 = v28;
  Z3_inc_ref(v29, v26);
  v30 = *(_QWORD *)(v5 + 8);
  v102 = &off_4D870;
  if ( (unsigned int)Z3_get_sort_kind(v30, v26) == 2 || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v5 + 8), v26) == 3 )
  {
    if ( v26 )
      Z3_dec_ref(*(_QWORD *)(v5 + 8));
    v31 = Z3_mk_lt(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16), v96);
    goto LABEL_15;
  }
  if ( v26 )
    Z3_dec_ref(*(_QWORD *)(v5 + 8));
LABEL_28:
  v39 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v40 = *(_QWORD *)(a2 + 8);
  v83 = v39;
  v41 = Z3_get_error_code(*(_QWORD *)(v40 + 8));
  if ( v41 && *(_BYTE *)v40 )
  {
    v90 = v41;
    v69 = __cxa_allocate_exception(0x10u);
    v70 = (const char *)Z3_get_error_msg(*(_QWORD *)(v40 + 8), v90);
    sub_105D0(v69, v70);
    __cxa_throw(v69, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v42 = *(_QWORD *)(a2 + 8);
  v43 = *(_QWORD *)(v42 + 8);
  v103 = _mm_unpacklo_epi64((__m128i)v42, (__m128i)(unsigned __int64)v83);
  Z3_inc_ref(v43, v83);
  v44 = *(_QWORD *)(v42 + 8);
  v102 = &off_4D870;
  sort_kind = Z3_get_sort_kind(v44, v83);
  if ( v83 )
  {
    v84 = sort_kind;
    Z3_dec_ref(*(_QWORD *)(v42 + 8));
    sort_kind = v84;
  }
  if ( sort_kind != 4 )
    goto LABEL_38;
  v46 = Z3_get_sort(*(_QWORD *)(v5 + 8), v96);
  v47 = Z3_get_error_code(*(_QWORD *)(v5 + 8));
  v48 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(unsigned __int64)v46);
  if ( v47 && *(_BYTE *)v5 )
  {
    v89 = v47;
    v67 = __cxa_allocate_exception(0x10u);
    v68 = (const char *)Z3_get_error_msg(*(_QWORD *)(v5 + 8), v89);
    sub_105D0(v67, v68);
    __cxa_throw(v67, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v49 = *(_QWORD *)(v5 + 8);
  v103 = v48;
  Z3_inc_ref(v49, v46);
  v50 = *(_QWORD *)(v5 + 8);
  v102 = &off_4D870;
  v51 = Z3_get_sort_kind(v50, v46);
  if ( v46 )
  {
    v85 = v51;
    Z3_dec_ref(*(_QWORD *)(v5 + 8));
    v51 = v85;
  }
  if ( v51 == 4 )
  {
    v31 = Z3_mk_bvslt(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16), v96);
  }
  else
  {
LABEL_38:
    v52 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
    v86 = *(_QWORD *)(a2 + 8);
    v53 = Z3_get_error_code(*(_QWORD *)(v86 + 8));
    if ( v53 && *(_BYTE *)v86 )
    {
      v94 = v53;
      v65 = __cxa_allocate_exception(0x10u);
      v66 = (const char *)Z3_get_error_msg(*(_QWORD *)(v86 + 8), v94);
      sub_105D0(v65, v66);
      __cxa_throw(v65, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
    }
    v54 = *(_QWORD *)(a2 + 8);
    v55 = *(_QWORD *)(v54 + 8);
    v87 = v54;
    v103 = _mm_unpacklo_epi64((__m128i)v54, (__m128i)(unsigned __int64)v52);
    Z3_inc_ref(v55, v52);
    v102 = &off_4D870;
    v56 = Z3_get_sort_kind(*(_QWORD *)(v87 + 8), v52);
    if ( v52 )
    {
      v97 = v56;
      Z3_dec_ref(*(_QWORD *)(v87 + 8));
      v56 = v97;
    }
    if ( v56 != 9 )
      goto LABEL_43;
    v57 = Z3_get_sort(*(_QWORD *)(v5 + 8), v96);
    v58 = Z3_get_error_code(*(_QWORD *)(v5 + 8));
    v59 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(unsigned __int64)v57);
    if ( v58 && *(_BYTE *)v5 )
    {
      v92 = v58;
      v78 = __cxa_allocate_exception(0x10u);
      v79 = (const char *)Z3_get_error_msg(*(_QWORD *)(v5 + 8), v92);
      sub_105D0(v78, v79);
      __cxa_throw(v78, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
    }
    v60 = *(_QWORD *)(v5 + 8);
    v103 = v59;
    Z3_inc_ref(v60, v57);
    v61 = *(_QWORD *)(v5 + 8);
    v102 = &off_4D870;
    v62 = Z3_get_sort_kind(v61, v57);
    if ( v57 )
      Z3_dec_ref(*(_QWORD *)(v5 + 8));
    if ( v62 != 9 )
    {
LABEL_43:
      v32 = 0;
      goto LABEL_16;
    }
    v31 = Z3_mk_fpa_lt(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16), v96);
  }
LABEL_15:
  v32 = v31;
LABEL_16:
  v81 = *(_QWORD *)(a2 + 8);
  v33 = Z3_get_error_code(*(_QWORD *)(v81 + 8));
  if ( v33 && *(_BYTE *)v81 )
  {
    v95 = v33;
    v76 = __cxa_allocate_exception(0x10u);
    v77 = (const char *)Z3_get_error_msg(*(_QWORD *)(v81 + 8), v95);
    sub_105D0(v76, v77);
    __cxa_throw(v76, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v34 = *(_QWORD *)(a2 + 8);
  a1[2] = v32;
  *a1 = &off_4D850;
  a1[1] = v34;
  Z3_inc_ref(*(_QWORD *)(v34 + 8), v32);
  v35 = v96;
  *a1 = &off_4D890;
  if ( v35 )
    Z3_dec_ref(*(_QWORD *)(v5 + 8));
  if ( v93 )
    Z3_dec_ref(*(_QWORD *)(v11 + 8));
  return a1;
}
