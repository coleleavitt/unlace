unsigned __int64 __fastcall sub_240A0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  char v8; // al
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  char *v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  __m128 v20; // xmm0
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rbx
  unsigned int v25; // r13d
  __int64 v26; // rax
  unsigned __int64 *v28; // rax
  unsigned __int64 *i; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int v33; // r14d
  __int64 v34; // rbx
  unsigned int v35; // r14d
  __int64 v36; // rbx
  unsigned int v37; // r14d
  __int64 v38; // rbx
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // [rsp+0h] [rbp-6A8h]
  unsigned __int64 v41; // [rsp+8h] [rbp-6A0h]
  unsigned __int64 v42; // [rsp+10h] [rbp-698h]
  unsigned __int64 v43; // [rsp+18h] [rbp-690h]
  unsigned __int64 v44; // [rsp+20h] [rbp-688h] BYREF
  unsigned __int64 v45; // [rsp+28h] [rbp-680h] BYREF
  __int128 v46; // [rsp+30h] [rbp-678h]
  __int128 v47; // [rsp+40h] [rbp-668h]
  __int64 v48; // [rsp+50h] [rbp-658h]
  __int64 v49; // [rsp+58h] [rbp-650h]
  __int64 selector; // [rsp+60h] [rbp-648h]
  __int128 v51; // [rsp+68h] [rbp-640h]
  __int128 v52; // [rsp+78h] [rbp-630h]
  __int128 v53; // [rsp+88h] [rbp-620h]
  __int128 v54; // [rsp+98h] [rbp-610h]
  __int128 v55; // [rsp+A8h] [rbp-600h]
  __int128 v56; // [rsp+B8h] [rbp-5F0h]
  __int128 v57; // [rsp+C8h] [rbp-5E0h]
  __int128 v58; // [rsp+D8h] [rbp-5D0h]
  unsigned __int64 v59; // [rsp+E8h] [rbp-5C0h]
  _BYTE v60[1392]; // [rsp+F0h] [rbp-5B8h] BYREF
  char v61; // [rsp+660h] [rbp-48h] BYREF
  unsigned __int64 v62; // [rsp+668h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v42 = -1;
  if ( !(unsigned __int8)sub_1C380((_QWORD *)a2, &v44, &v45) )
    return v42;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v43 = v44;
  v6 = v5 & v44;
  v42 = v45 & v5;
  if ( !(unsigned __int8)is_loaded() )
  {
    v28 = *(unsigned __int64 **)(a2 + 528);
    for ( i = &v28[4 * *(_QWORD *)(a2 + 536)]; i != v28; v28 += 4 )
    {
      if ( v43 >= *v28 && v28[1] >= v43 - *v28 )
        break;
    }
    file2base();
  }
  v46 = 0;
  v47 = 0;
  v51 = -1;
  v52 = -1;
  v53 = -1;
  v54 = -1;
  v55 = -1;
  v56 = -1;
  v57 = -1;
  v58 = -1;
  v48 = 0;
  v49 = 0;
  selector = 0;
  v59 = 0xFFFFFFFF00000000LL;
  selector = allocate_selector();
  v7 = v6 + 20;
  LOWORD(v49) = 513;
  *((_QWORD *)&v46 + 1) = v42;
  v8 = *(_BYTE *)(a1 + 13692);
  *(_QWORD *)&v46 = v6;
  BYTE3(v49) = v8 + 1;
  add_segm_ex();
  sub_19130();
  create_strlit();
  set_cmt();
  v9 = getinf();
  if ( v9 < v6 + 16 || v7 < v9 )
    create_32bit_data();
  set_cmt();
  num_flag();
  v10 = v6 + 24;
  set_op_type();
  v11 = getinf();
  if ( v11 < v7 || v10 < v11 )
    create_32bit_data();
  set_cmt();
  num_flag();
  v12 = v6 + 28;
  set_op_type();
  v13 = getinf();
  if ( v13 < v10 || v12 < v13 )
    create_32bit_data();
  v14 = v6 + 32;
  set_cmt();
  num_flag();
  set_op_type();
  v15 = getinf();
  if ( v15 < v12 || v14 < v15 )
    create_32bit_data();
  set_cmt();
  num_flag();
  v16 = v60;
  set_op_type();
  v17 = *(unsigned int *)(a2 + 32);
  qmemcpy(v60, &off_66640, sizeof(v60));
  v40 = v17;
  while ( 1 )
  {
    v20 = (__m128)_mm_loadu_si128((const __m128i *)(v16 + 8));
    a5 = _mm_movehl_ps(a5, v20);
    if ( v40 < _mm_add_epi64((__m128i)v20, _mm_srli_si128((__m128i)v20, 8)).m128i_u64[0] )
      break;
    switch ( a5.m128_u64[0] )
    {
      case 1uLL:
        v30 = getinf();
        v22 = v14 + 1;
        if ( v30 >= v14 && v22 >= v30 )
          goto LABEL_29;
        create_data();
        if ( **(_BYTE **)v16 )
LABEL_51:
          set_cmt();
LABEL_30:
        num_flag();
        v16 += 24;
        v14 = v22;
        set_op_type();
        if ( v16 == &v61 )
          goto LABEL_31;
        break;
      case 4uLL:
        v31 = getinf();
        v22 = v14 + 4;
        if ( v31 < v14 || v22 < v31 )
          create_32bit_data();
LABEL_29:
        if ( **(_BYTE **)v16 )
          goto LABEL_51;
        goto LABEL_30;
      case 8uLL:
        v21 = getinf();
        v22 = v14 + 8;
        if ( v21 < v14 || v22 < v21 )
          create_data();
        goto LABEL_29;
      default:
        v18 = getinf();
        v19 = a5.m128_u64[0] + v14;
        if ( v18 < v14 || v19 < v18 )
        {
          create_data();
          v19 = a5.m128_u64[0] + v14;
        }
        if ( **(_BYTE **)v16 )
        {
          v41 = v19;
          set_cmt();
          v19 = v41;
        }
        v16 += 24;
        v14 = v19;
        if ( v16 == &v61 )
          goto LABEL_31;
        break;
    }
  }
LABEL_31:
  if ( !*(_DWORD *)(a2 + 36)
    || (v32 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v43 + *(unsigned int *)(a2 + 32)),
        sub_19130(),
        !*(_DWORD *)(a2 + 36)) )
  {
    if ( *(_DWORD *)(a2 + 44) )
      goto LABEL_59;
LABEL_33:
    if ( *(_DWORD *)(a2 + 468) )
      goto LABEL_63;
    goto LABEL_34;
  }
  v33 = 0;
  do
  {
    ++v33;
    v32 = sub_211A0(a1, v32, "dyld_cache_mapping_info", 0x20u);
  }
  while ( v33 < *(_DWORD *)(a2 + 36) );
  if ( !*(_DWORD *)(a2 + 44) )
    goto LABEL_33;
LABEL_59:
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v43 + *(unsigned int *)(a2 + 40));
  sub_19130();
  if ( !*(_DWORD *)(a2 + 44) )
    goto LABEL_33;
  v35 = 0;
  do
  {
    ++v35;
    v34 = sub_211A0(a1, v34, "dyld_cache_image_info", 0x20u);
  }
  while ( v35 < *(_DWORD *)(a2 + 44) );
  if ( *(_DWORD *)(a2 + 468) )
  {
LABEL_63:
    v36 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v43 + *(unsigned int *)(a2 + 464));
    sub_19130();
    if ( *(_DWORD *)(a2 + 468) )
    {
      v37 = 0;
      do
      {
        ++v37;
        v36 = sub_211A0(a1, v36, "dyld_cache_image_info", 0x20u);
      }
      while ( v37 < *(_DWORD *)(a2 + 468) );
      v23 = *(_QWORD *)(a2 + 152);
      if ( v23 )
        goto LABEL_67;
      goto LABEL_35;
    }
  }
LABEL_34:
  v23 = *(_QWORD *)(a2 + 152);
  if ( v23 )
  {
LABEL_67:
    v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v43 + v23);
    sub_19130();
    if ( *(_QWORD *)(a2 + 160) )
    {
      LODWORD(v39) = 0;
      do
      {
        v38 = sub_211A0(a1, v38, "dyld_cache_image_text_info", 0x20u);
        v39 = (unsigned int)(v39 + 1);
      }
      while ( v39 < *(_QWORD *)(a2 + 160) );
    }
  }
LABEL_35:
  if ( *(_DWORD *)(a2 + 132) )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v43 + *(unsigned int *)(a2 + 128));
    sub_19130();
    if ( *(_DWORD *)(a2 + 132) )
    {
      v25 = 0;
      do
      {
        ++v25;
        get_default_reftype();
        op_offset();
        v26 = 4;
        if ( *(_BYTE *)(a1 + 13692) )
          v26 = 8;
        v24 += v26;
      }
      while ( v25 < *(_DWORD *)(a2 + 132) );
    }
  }
  return v42;
}

