__int64 __fastcall sub_240A0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  char v10; // al
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  char *v27; // r13
  int v28; // r8d
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned __int64 v32; // rax
  __m128 v33; // xmm0
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r15
  _BYTE *v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  int v39; // r9d
  __int64 v40; // rbx
  __int64 v41; // rbx
  unsigned int v42; // r13d
  unsigned __int8 default_reftype; // al
  __int64 v44; // rax
  unsigned __int64 *v46; // rax
  unsigned __int64 *v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rbx
  unsigned int v53; // r14d
  __int64 v54; // rbx
  unsigned int v55; // r14d
  __int64 v56; // rbx
  unsigned int v57; // r14d
  __int64 v58; // rbx
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // [rsp+0h] [rbp-6A8h]
  unsigned __int64 v61; // [rsp+8h] [rbp-6A0h]
  __int64 v62; // [rsp+10h] [rbp-698h]
  unsigned __int64 v63; // [rsp+18h] [rbp-690h]
  unsigned __int64 v64; // [rsp+20h] [rbp-688h] BYREF
  __int64 v65; // [rsp+28h] [rbp-680h] BYREF
  _OWORD v66[2]; // [rsp+30h] [rbp-678h] BYREF
  __int64 v67; // [rsp+50h] [rbp-658h]
  __int64 v68; // [rsp+58h] [rbp-650h]
  __int64 selector; // [rsp+60h] [rbp-648h]
  __int128 v70; // [rsp+68h] [rbp-640h]
  __int128 v71; // [rsp+78h] [rbp-630h]
  __int128 v72; // [rsp+88h] [rbp-620h]
  __int128 v73; // [rsp+98h] [rbp-610h]
  __int128 v74; // [rsp+A8h] [rbp-600h]
  __int128 v75; // [rsp+B8h] [rbp-5F0h]
  __int128 v76; // [rsp+C8h] [rbp-5E0h]
  __int128 v77; // [rsp+D8h] [rbp-5D0h]
  unsigned __int64 v78; // [rsp+E8h] [rbp-5C0h]
  _BYTE v79[1392]; // [rsp+F0h] [rbp-5B8h] BYREF
  char v80; // [rsp+660h] [rbp-48h] BYREF
  unsigned __int64 v81; // [rsp+668h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v62 = -1;
  if ( !(unsigned __int8)sub_1C380(a2, &v64, &v65) )
    return v62;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v63 = v64;
  v8 = v7 & v64;
  v62 = v65 & v7;
  if ( !(unsigned __int8)is_loaded(v64) )
  {
    v46 = *(unsigned __int64 **)(a2 + 528);
    v47 = &v46[4 * *(_QWORD *)(a2 + 536)];
    if ( v46 == v47 )
    {
LABEL_48:
      v49 = -1;
    }
    else
    {
      while ( 1 )
      {
        v48 = *v46;
        if ( v63 >= *v46 && v46[1] >= v63 - v48 )
          break;
        v46 += 4;
        if ( v47 == v46 )
          goto LABEL_48;
      }
      v49 = v46[2] + v63 - v48;
    }
    file2base(*(_QWORD *)(a2 + 8), v49, v8, v62, 1);
  }
  memset(v66, 0, sizeof(v66));
  v70 = -1;
  v71 = -1;
  v72 = -1;
  v73 = -1;
  v74 = -1;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v67 = 0;
  v68 = 0;
  selector = 0;
  v78 = 0xFFFFFFFF00000000LL;
  selector = allocate_selector(0);
  v9 = v8 + 20;
  LOWORD(v68) = 513;
  *((_QWORD *)&v66[0] + 1) = v62;
  v10 = *(_BYTE *)(a1 + 13692);
  *(_QWORD *)&v66[0] = v8;
  BYTE3(v68) = v10 + 1;
  add_segm_ex(v66, "DYLD_CACHE_HEADER", "DATA", 11);
  sub_19130(v8, 1, (unsigned int)"DYLD Header", v11, v12, v13);
  create_strlit(v8, 16, 0);
  set_cmt(v8, "magic", 0);
  v14 = getinf(15);
  if ( v14 < v8 + 16 || v9 < v14 )
    create_32bit_data(v8 + 16, 4);
  set_cmt(v8 + 16, "mappingOffset", 0);
  v15 = num_flag();
  v16 = v8 + 24;
  set_op_type(v8 + 16, v15, 0);
  v17 = getinf(15);
  if ( v17 < v9 || v16 < v17 )
    create_32bit_data(v8 + 20, 4);
  set_cmt(v8 + 20, "mappingCount", 0);
  v18 = num_flag();
  v19 = v8 + 28;
  set_op_type(v8 + 20, v18, 0);
  v20 = getinf(15);
  if ( v20 < v16 || v19 < v20 )
    create_32bit_data(v8 + 24, 4);
  v21 = v8 + 24;
  v22 = v8 + 32;
  set_cmt(v21, "imagesOffset", 0);
  v23 = num_flag();
  set_op_type(v16, v23, 0);
  v24 = getinf(15);
  if ( v24 < v19 || v22 < v24 )
    create_32bit_data(v19, 4);
  set_cmt(v19, "imagesCount", 0);
  v25 = num_flag();
  v26 = v19;
  v27 = v79;
  set_op_type(v26, v25, 0);
  v30 = *(unsigned int *)(a2 + 32);
  qmemcpy(v79, &off_66640, sizeof(v79));
  v31 = 0;
  v60 = v30;
  while ( 1 )
  {
    v33 = (__m128)_mm_loadu_si128((const __m128i *)(v27 + 8));
    a5 = _mm_movehl_ps(a5, v33);
    if ( v60 < _mm_add_epi64((__m128i)v33, _mm_srli_si128((__m128i)v33, 8)).m128i_u64[0] )
      break;
    switch ( a5.m128_u64[0] )
    {
      case 1uLL:
        v50 = getinf(15);
        v35 = v22 + 1;
        if ( v50 >= v22 && v35 >= v50 )
          goto LABEL_29;
        create_data(v22, 0, 1, -1);
        v36 = *(_BYTE **)v27;
        if ( **(_BYTE **)v27 )
LABEL_52:
          set_cmt(v22, v36, 0);
LABEL_30:
        v37 = num_flag();
        v27 += 24;
        v38 = v22;
        v22 = v35;
        set_op_type(v38, v37, 0);
        if ( v27 == &v80 )
          goto LABEL_31;
        break;
      case 4uLL:
        v51 = getinf(15);
        v35 = v22 + 4;
        if ( v51 < v22 || v35 < v51 )
          create_32bit_data(v22, 4);
LABEL_29:
        v36 = *(_BYTE **)v27;
        if ( **(_BYTE **)v27 )
          goto LABEL_52;
        goto LABEL_30;
      case 8uLL:
        v34 = getinf(15);
        v35 = v22 + 8;
        if ( v34 < v22 || v35 < v34 )
          create_data(v22, 805306368, 8, -1);
        goto LABEL_29;
      default:
        v32 = getinf(15);
        v29 = a5.m128_u64[0] + v22;
        if ( v32 < v22 || v29 < v32 )
        {
          create_data(v22, 0, a5.m128_u64[0], -1);
          v29 = a5.m128_u64[0] + v22;
        }
        if ( **(_BYTE **)v27 )
        {
          v61 = v29;
          set_cmt(v22, *(_QWORD *)v27, 0);
          v29 = v61;
        }
        v27 += 24;
        v22 = v29;
        if ( v27 == &v80 )
          goto LABEL_31;
        break;
    }
  }
LABEL_31:
  if ( !*(_DWORD *)(a2 + 36)
    || (v52 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + *(unsigned int *)(a2 + 32)),
        sub_19130(
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + *(_DWORD *)(a2 + 32)),
          1,
          (unsigned int)"Mappings",
          v31,
          v28,
          v29),
        (v28 = *(_DWORD *)(a2 + 36)) == 0) )
  {
    v39 = *(_DWORD *)(a2 + 44);
    if ( v39 )
      goto LABEL_60;
LABEL_33:
    if ( *(_DWORD *)(a2 + 468) )
      goto LABEL_64;
    goto LABEL_34;
  }
  v53 = 0;
  do
  {
    ++v53;
    v52 = sub_21190(a1, v52, "dyld_cache_mapping_info", 32);
  }
  while ( v53 < *(_DWORD *)(a2 + 36) );
  v39 = *(_DWORD *)(a2 + 44);
  if ( !v39 )
    goto LABEL_33;
LABEL_60:
  v54 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + *(unsigned int *)(a2 + 40));
  sub_19130(
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + *(_DWORD *)(a2 + 40)),
    1,
    (unsigned int)"Images",
    v31,
    v28,
    v39);
  if ( !*(_DWORD *)(a2 + 44) )
    goto LABEL_33;
  v55 = 0;
  do
  {
    ++v55;
    v54 = sub_21190(a1, v54, "dyld_cache_image_info", 32);
  }
  while ( v55 < *(_DWORD *)(a2 + 44) );
  if ( *(_DWORD *)(a2 + 468) )
  {
LABEL_64:
    v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + *(unsigned int *)(a2 + 464));
    sub_19130(
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + *(_DWORD *)(a2 + 464)),
      1,
      (unsigned int)"Images (dyld4)",
      v31,
      v28,
      v39);
    v31 = *(_DWORD *)(a2 + 468);
    if ( v31 )
    {
      v57 = 0;
      do
      {
        ++v57;
        v56 = sub_21190(a1, v56, "dyld_cache_image_info", 32);
      }
      while ( v57 < *(_DWORD *)(a2 + 468) );
      v40 = *(_QWORD *)(a2 + 152);
      if ( v40 )
        goto LABEL_68;
      goto LABEL_35;
    }
  }
LABEL_34:
  v40 = *(_QWORD *)(a2 + 152);
  if ( v40 )
  {
LABEL_68:
    v58 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + v40);
    sub_19130(v58, 1, (unsigned int)"Image Text Infos", v63, v28, v39);
    if ( *(_QWORD *)(a2 + 160) )
    {
      LODWORD(v59) = 0;
      do
      {
        v58 = sub_21190(a1, v58, "dyld_cache_image_text_info", 32);
        v59 = (unsigned int)(v59 + 1);
      }
      while ( v59 < *(_QWORD *)(a2 + 160) );
    }
  }
LABEL_35:
  if ( *(_DWORD *)(a2 + 132) )
  {
    v41 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + *(unsigned int *)(a2 + 128));
    sub_19130(
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v63 + *(_DWORD *)(a2 + 128)),
      1,
      (unsigned int)"Branch Islands",
      v31,
      v28,
      v39);
    if ( *(_DWORD *)(a2 + 132) )
    {
      v42 = 0;
      do
      {
        ++v42;
        default_reftype = get_default_reftype(v41);
        op_offset(v41, 0, default_reftype, -1, 0, 0);
        v44 = 4;
        if ( *(_BYTE *)(a1 + 13692) )
          v44 = 8;
        v41 += v44;
      }
      while ( v42 < *(_DWORD *)(a2 + 132) );
    }
  }
  return v62;
}
