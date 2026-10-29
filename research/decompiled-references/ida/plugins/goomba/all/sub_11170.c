_QWORD *__fastcall sub_11170(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 sort; // rax
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned int error_code; // eax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r13
  unsigned int v20; // r14d
  __int64 v21; // rax
  _QWORD *exception; // rbx
  const char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r15
  int sort_kind; // eax
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // r15
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // r15
  int v40; // r14d
  __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // r12
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r14
  unsigned int v47; // r15d
  const char *error_msg; // rax
  const char *v49; // rax
  unsigned int v50; // [rsp+Ch] [rbp-7Ch]
  int v51; // [rsp+Ch] [rbp-7Ch]
  int v52; // [rsp+Ch] [rbp-7Ch]
  int v53; // [rsp+Ch] [rbp-7Ch]
  __m128 v54; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v55 = __readfsqword(0x28u);
  sort = Z3_get_sort(*(_QWORD *)(v5 + 8), v6);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = sort;
  error_code = Z3_get_error_code(*(_QWORD *)(v9 + 8));
  if ( error_code && *(_BYTE *)v9 )
  {
    v47 = error_code;
    exception = __cxa_allocate_exception(0x10u);
    error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(v9 + 8), v47);
    sub_105D0(exception, error_msg);
    goto LABEL_53;
  }
  v12 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v12 + 8), v10);
  if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v12 + 8), v10) == 2
    || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v12 + 8), v10) == 3 )
  {
    if ( v10 )
      Z3_dec_ref(*(_QWORD *)(v12 + 8));
    v13 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16));
    v14 = *(_QWORD *)(a3 + 8);
    v15 = v13;
    v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
    if ( v16 && *(_BYTE *)v14 )
      goto LABEL_15;
    v12 = *(_QWORD *)(a3 + 8);
    Z3_inc_ref(*(_QWORD *)(v12 + 8), v15);
    if ( (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v12 + 8), v15) == 2
      || (unsigned int)Z3_get_sort_kind(*(_QWORD *)(v12 + 8), v15) == 3 )
    {
      if ( v15 )
        Z3_dec_ref(*(_QWORD *)(v12 + 8));
      v17 = *(_QWORD *)(a2 + 8);
      v54 = _mm_loadh_ps((const double *)(a3 + 16));
      v18 = Z3_mk_sub(*(_QWORD *)(v17 + 8), 2, &v54);
      goto LABEL_11;
    }
    if ( v15 )
      goto LABEL_18;
  }
  else if ( v10 )
  {
LABEL_18:
    Z3_dec_ref(*(_QWORD *)(v12 + 8));
  }
  v25 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v14 = *(_QWORD *)(a2 + 8);
  v26 = v25;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 && *(_BYTE *)v14 )
    goto LABEL_15;
  v27 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v27 + 8), v26);
  sort_kind = Z3_get_sort_kind(*(_QWORD *)(v27 + 8), v26);
  if ( v26 )
  {
    v51 = sort_kind;
    Z3_dec_ref(*(_QWORD *)(v27 + 8));
    sort_kind = v51;
  }
  if ( sort_kind == 4 )
  {
    v29 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16));
    v14 = *(_QWORD *)(a3 + 8);
    v30 = v29;
    v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
    if ( v16 && *(_BYTE *)v14 )
      goto LABEL_15;
    v31 = *(_QWORD *)(a3 + 8);
    Z3_inc_ref(*(_QWORD *)(v31 + 8), v30);
    v32 = Z3_get_sort_kind(*(_QWORD *)(v31 + 8), v30);
    if ( v30 )
    {
      v52 = v32;
      Z3_dec_ref(*(_QWORD *)(v31 + 8));
      v32 = v52;
    }
    if ( v32 == 4 )
    {
      v18 = Z3_mk_bvsub(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16));
      goto LABEL_11;
    }
  }
  v33 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), *(_QWORD *)(a2 + 16));
  v14 = *(_QWORD *)(a2 + 8);
  v34 = v33;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 && *(_BYTE *)v14 )
    goto LABEL_15;
  v35 = *(_QWORD *)(a2 + 8);
  Z3_inc_ref(*(_QWORD *)(v35 + 8), v34);
  v36 = Z3_get_sort_kind(*(_QWORD *)(v35 + 8), v34);
  if ( v34 )
  {
    v53 = v36;
    Z3_dec_ref(*(_QWORD *)(v35 + 8));
    v36 = v53;
  }
  if ( v36 != 9 )
    goto LABEL_34;
  v37 = Z3_get_sort(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL), *(_QWORD *)(a3 + 16));
  v14 = *(_QWORD *)(a3 + 8);
  v38 = v37;
  v16 = Z3_get_error_code(*(_QWORD *)(v14 + 8));
  if ( v16 )
  {
    if ( *(_BYTE *)v14 )
    {
LABEL_15:
      v50 = v16;
      exception = __cxa_allocate_exception(0x10u);
      v24 = (const char *)Z3_get_error_msg(*(_QWORD *)(v14 + 8), v50);
      sub_105D0(exception, v24);
      goto LABEL_53;
    }
  }
  v39 = *(_QWORD *)(a3 + 8);
  Z3_inc_ref(*(_QWORD *)(v39 + 8), v38);
  v40 = Z3_get_sort_kind(*(_QWORD *)(v39 + 8), v38);
  if ( v38 )
    Z3_dec_ref(*(_QWORD *)(v39 + 8));
  if ( v40 != 9 )
  {
LABEL_34:
    v18 = 0;
    goto LABEL_11;
  }
  v41 = *(_QWORD *)(a2 + 8);
  v42 = *(_QWORD *)(a3 + 16);
  v43 = *(_QWORD *)(a2 + 16);
  v44 = *(_QWORD *)(v41 + 8);
  switch ( *(_DWORD *)(v41 + 4) )
  {
    case 0:
      v45 = Z3_mk_fpa_rna(v44);
      goto LABEL_46;
    case 1:
      v45 = Z3_mk_fpa_rne(v44);
      goto LABEL_46;
    case 2:
      v45 = Z3_mk_fpa_rtp(v44);
      goto LABEL_46;
    case 3:
      v45 = Z3_mk_fpa_rtn(v44);
      goto LABEL_46;
    case 4:
      v45 = Z3_mk_fpa_rtz(v44);
LABEL_46:
      v46 = v45;
      Z3_inc_ref(*(_QWORD *)(v41 + 8), v45);
      v18 = Z3_mk_fpa_sub(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), v46, v43, v42);
      if ( v46 )
        Z3_dec_ref(*(_QWORD *)(v41 + 8));
      break;
    default:
      v18 = Z3_mk_fpa_sub(v44, 0, *(_QWORD *)(a2 + 16), v42);
      break;
  }
LABEL_11:
  v19 = *(_QWORD *)(a2 + 8);
  v20 = Z3_get_error_code(*(_QWORD *)(v19 + 8));
  if ( v20 && *(_BYTE *)v19 )
  {
    exception = __cxa_allocate_exception(0x10u);
    v49 = (const char *)Z3_get_error_msg(*(_QWORD *)(v19 + 8), v20);
    sub_105D0(exception, v49);
LABEL_53:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
  }
  v21 = *(_QWORD *)(a2 + 8);
  a1[2] = v18;
  *a1 = &off_4D850;
  a1[1] = v21;
  Z3_inc_ref(*(_QWORD *)(v21 + 8), v18);
  *a1 = &off_4D890;
  return a1;
}

