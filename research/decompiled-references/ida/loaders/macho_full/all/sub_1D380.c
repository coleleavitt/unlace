unsigned __int64 __fastcall sub_1D380(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        const __m128i *a4,
        char a5,
        unsigned __int64 a6,
        __int64 *a7)
{
  __int32 v11; // eax
  const __m128i *v12; // rcx
  unsigned int v13; // r13d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char v33; // al
  char v34; // al
  char v35; // al
  unsigned __int64 v36; // rdx
  __m128i v37; // xmm0
  unsigned __int64 v38; // rax
  char v40; // r8
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  __m128i si128; // xmm0
  __int64 v47; // rax
  __int64 v48; // r12
  __m128i v49; // xmm1
  __int64 v50; // rdi
  __m128i v51; // xmm1
  unsigned __int64 i; // r12
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v56; // [rsp+8h] [rbp-180h]
  __m128i v57; // [rsp+10h] [rbp-178h] BYREF
  __int64 *v58; // [rsp+20h] [rbp-168h]
  unsigned __int64 v59; // [rsp+28h] [rbp-160h]
  __int64 v60[4]; // [rsp+30h] [rbp-158h] BYREF
  __int64 v61; // [rsp+50h] [rbp-138h] BYREF
  __m128i v62; // [rsp+58h] [rbp-130h] BYREF
  __m128i v63[2]; // [rsp+70h] [rbp-118h] BYREF
  __int64 v64; // [rsp+90h] [rbp-F8h]
  __int64 v65; // [rsp+98h] [rbp-F0h]
  __int64 selector; // [rsp+A0h] [rbp-E8h]
  __int128 v67; // [rsp+A8h] [rbp-E0h]
  __int128 v68; // [rsp+B8h] [rbp-D0h]
  __int128 v69; // [rsp+C8h] [rbp-C0h]
  __int128 v70; // [rsp+D8h] [rbp-B0h]
  __int128 v71; // [rsp+E8h] [rbp-A0h]
  __int128 v72; // [rsp+F8h] [rbp-90h]
  __int128 v73; // [rsp+108h] [rbp-80h]
  __int128 v74; // [rsp+118h] [rbp-70h]
  unsigned __int64 v75; // [rsp+128h] [rbp-60h]
  __int128 s1; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v77; // [rsp+148h] [rbp-40h]

  v59 = a6;
  v58 = a7;
  v77 = __readfsqword(0x28u);
  qstrncpy();
  v11 = a3[4].m128i_i32[0];
  v12 = a4;
  v13 = (unsigned __int8)v11;
  if ( (_BYTE)v11 )
  {
    switch ( (unsigned __int8)a3[4].m128i_i32[0] )
    {
      case 1u:
        goto LABEL_92;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 9u:
      case 0xAu:
      case 0xEu:
        goto LABEL_37;
      case 8u:
        goto LABEL_90;
      default:
        goto LABEL_6;
    }
  }
  if ( (_DWORD)s1 == 1869045599 && WORD2(s1) == 116
    || (_QWORD)s1 == 0x675F687475615F5FLL && *(_DWORD *)((char *)&s1 + 7) == 7630695 )
  {
    v13 = 6;
    v57.m128i_i64[0] = (__int64)"DATA";
  }
  else if ( (_DWORD)s1 == 1702125407 && *(_DWORD *)((char *)&s1 + 3) == 7632997
         || (_QWORD)s1 == 0x65646F6374696E69LL && !BYTE8(s1) )
  {
LABEL_90:
    v57.m128i_i64[0] = (__int64)"CODE";
  }
  else
  {
LABEL_6:
    v57.m128i_i64[0] = (__int64)"CODE";
    if ( (v11 & 0x80000400) == 0 )
    {
      if ( (_DWORD)s1 == 1935826783 && WORD2(s1) == 115 || (_QWORD)s1 == 0x6E6F6D6D6F635F5FLL && !BYTE8(s1) )
      {
LABEL_92:
        v57.m128i_i64[0] = (__int64)"BSS";
      }
      else
      {
        if ( !(*((_QWORD *)&s1 + 1) ^ 0x6874656D5F7473LL | (unsigned __int64)s1 ^ 0x6E695F7461635F5FLL)
          || (_QWORD)s1 == 0x6D5F74736E695F5FLL && DWORD2(s1) == 6845541 )
        {
          goto LABEL_37;
        }
        if ( (_QWORD)s1 == 0x656D5F736C635F5FLL && *(_DWORD *)((char *)&s1 + 7) == 6845541 )
          goto LABEL_37;
        if ( (_DWORD)s1 == 1633967967 && *(_DWORD *)((char *)&s1 + 3) == 6386785 )
          goto LABEL_37;
        if ( (_QWORD)s1 == 0x74736E6F635F5FLL
          || (_QWORD)s1 == 0x6F67657461635F5FLL && *(_DWORD *)((char *)&s1 + 7) == 7959151 )
        {
          goto LABEL_37;
        }
        if ( (_QWORD)s1 == 0x636F746F72705F5FLL && *(_DWORD *)((char *)&s1 + 7) == 7106403 )
          goto LABEL_37;
        if ( !(*((_QWORD *)&s1 + 1) ^ 0x737261765F6563LL | (unsigned __int64)s1 ^ 0x6E6174736E695F5FLL)
          || (_QWORD)s1 == 0x656C75646F6D5F5FLL && *(_QWORD *)((char *)&s1 + 6) == 0x6F666E695F656CLL )
        {
          goto LABEL_37;
        }
        v14 = strcmp((const char *)&s1, "__cfstring");
        v12 = a4;
        v57.m128i_i64[0] = (__int64)"DATA";
        if ( v14 )
        {
          v15 = strcmp((const char *)&s1, "__symbols");
          v12 = a4;
          if ( v15 )
          {
            v16 = strcmp((const char *)&s1, "__class");
            v12 = a4;
            if ( v16 )
            {
              v17 = strcmp((const char *)&s1, "__meta_class");
              v12 = a4;
              if ( v17 )
              {
                v18 = strcmp((const char *)&s1, "__objc_classlist");
                v12 = a4;
                if ( v18 )
                {
                  v19 = strcmp((const char *)&s1, "__objc_nlclslist");
                  v12 = a4;
                  if ( v19 )
                  {
                    v20 = strcmp((const char *)&s1, "__objc_superrefs");
                    v12 = a4;
                    if ( v20 )
                    {
                      v21 = strcmp((const char *)&s1, "__objc_classrefs");
                      v12 = a4;
                      if ( v21 )
                      {
                        v22 = strcmp((const char *)&s1, "__objc_protorefs");
                        v12 = a4;
                        if ( v22 )
                        {
                          v23 = strcmp((const char *)&s1, "__objc_protolist");
                          v12 = a4;
                          if ( v23 )
                          {
                            v24 = strcmp((const char *)&s1, "__objc_catlist");
                            v12 = a4;
                            if ( v24 )
                            {
                              v25 = strcmp((const char *)&s1, "__objc_nlcatlist");
                              v12 = a4;
                              if ( v25 )
                              {
                                v26 = strcmp((const char *)&s1, "__objc_selrefs");
                                v12 = a4;
                                if ( v26 )
                                {
                                  v27 = strcmp((const char *)&s1, "__objc_msgrefs");
                                  v12 = a4;
                                  if ( v27 )
                                  {
                                    v28 = strcmp((const char *)&s1, "__objc_classname");
                                    v12 = a4;
                                    if ( v28 )
                                    {
                                      v29 = strcmp((const char *)&s1, "__objc_imageinfo");
                                      v12 = a4;
                                      if ( v29 )
                                      {
                                        v30 = strcmp((const char *)&s1, "__objc_methname");
                                        v12 = a4;
                                        if ( v30 )
                                        {
                                          v31 = strcmp((const char *)&s1, "__objc_methtype");
                                          v12 = a4;
                                          if ( v31 )
                                          {
                                            v32 = strcmp((const char *)&s1, "__dyld");
                                            v57.m128i_i64[0] = 0;
                                            v12 = a4;
                                            if ( !v32 )
LABEL_37:
                                              v57.m128i_i64[0] = (__int64)"DATA";
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v64 = 0;
  v63[1] = 0;
  v67 = -1;
  v68 = -1;
  v69 = -1;
  v70 = -1;
  v71 = -1;
  v72 = -1;
  v73 = -1;
  v74 = -1;
  v65 = 0;
  selector = 0;
  v75 = 0xFFFFFFFF00000000LL;
  v63[0] = _mm_loadu_si128(v12);
  switch ( a3[3].m128i_i32[1] )
  {
    case 0:
      v33 = 1;
      break;
    case 1:
      v33 = 2;
      break;
    case 2:
      v33 = 5;
      break;
    case 3:
      v33 = 10;
      break;
    case 5:
      v33 = 8;
      break;
    case 6:
      v33 = 9;
      break;
    default:
      v33 = 3;
      break;
  }
  LOBYTE(v65) = v33;
  v34 = *(_BYTE *)(a1 + 13692);
  BYTE1(v65) = 2;
  BYTE3(v65) = v34 + 1;
  v35 = (4 * a5) & 4;
  if ( (a5 & 2) != 0 )
    v35 = (4 * a5) & 4 | 2;
  if ( (a5 & 4) != 0 )
    v35 |= 1u;
  BYTE2(v65) = v35;
  selector = allocate_selector();
  sub_1CE50(&v61, a2);
  sub_18750(v60, (const char *)&s1, (__int64)&v61);
  if ( v61 )
  {
    v62.m128i_i64[0] = 0;
    qfree();
  }
  add_segm_ex();
  v36 = v63[0].m128i_i64[0];
  if ( v63[0].m128i_i64[0] < (unsigned __int64)v63[0].m128i_i64[1] )
  {
    sub_132E0(v58, (unsigned __int64 *)v63);
    v36 = v63[0].m128i_i64[0];
  }
  v37 = _mm_loadu_si128(a3 + 2);
  v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & _mm_add_epi64(v37, _mm_srli_si128(v37, 8)).m128i_u64[0];
  v63[0].m128i_i64[1] = v38;
  if ( (_QWORD)s1 == 0x7274736E6F635F5FLL && *(_QWORD *)((char *)&s1 + 6) == 0x726F7463757274LL )
  {
    v40 = 0;
    v13 = 9;
LABEL_67:
    v41 = v38 - v36;
    if ( v41 > v59 )
      v41 = v59;
    v42 = v41 + v36;
    if ( v36 < v41 + v36 )
    {
      v43 = *(_QWORD *)(a1 + 5216);
      v44 = *(_QWORD *)(a1 + 5208);
      if ( *(_QWORD *)(a1 + 5224) < (unsigned __int64)(v43 + 1) )
      {
        v57.m128i_i8[0] = v40;
        v54 = qvector_reserve();
        *(_QWORD *)(a1 + 5208) = v54;
        v44 = v54;
        v40 = v57.m128i_i8[0];
        v43 = *(_QWORD *)(a1 + 5216);
      }
      v45 = v44 + 48 * v43;
      *(_OWORD *)v45 = 0;
      *(_OWORD *)(v45 + 24) = 0;
      si128 = _mm_load_si128(v63);
      *(_QWORD *)(v45 + 16) = 0;
      ++*(_QWORD *)(a1 + 5216);
      *(_DWORD *)(v45 + 40) = v13;
      *(_BYTE *)(v45 + 44) = v40;
      *(__m128i *)v45 = si128;
      v57.m128i_i64[0] = v45;
      sub_1CE50(&v61, a2);
      v47 = v57.m128i_i64[0];
      v48 = v61;
      v61 = 0;
      v49 = _mm_loadu_si128(&v62);
      v62 = 0;
      if ( *(_QWORD *)(v57.m128i_i64[0] + 16) )
      {
        *(_QWORD *)(v57.m128i_i64[0] + 24) = 0;
        v56 = v47;
        v57 = v49;
        qfree();
        v50 = v61;
        v51 = _mm_load_si128(&v57);
        *(_QWORD *)(v56 + 16) = v48;
        *(__m128i *)(v56 + 24) = v51;
        if ( v50 )
        {
          v62.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        *(_QWORD *)(v57.m128i_i64[0] + 16) = v48;
        *(__m128i *)(v47 + 24) = v49;
      }
      for ( i = v63[0].m128i_i64[0]; i < v42; i += v53 )
      {
        create_data();
        get_default_reftype();
        op_offset();
        v53 = (-(__int64)(*(_BYTE *)(a1 + 13692) == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) - i < v53 )
          break;
      }
    }
    goto LABEL_61;
  }
  if ( (_QWORD)s1 == 0x7572747365645F5FLL && *(_QWORD *)((char *)&s1 + 5) == 0x726F7463757274LL )
  {
    v40 = 0;
    v13 = 10;
    goto LABEL_67;
  }
  if ( v13 == 2 )
  {
    rangeset_t_add();
    goto LABEL_61;
  }
  if ( v13 <= 1 )
  {
LABEL_61:
    if ( (_QWORD)s1 == 0x6972747366635F5FLL && *(_DWORD *)((char *)&s1 + 7) == 6778473 )
      rangeset_t_add();
    goto LABEL_62;
  }
  if ( v13 > 0xA )
  {
    if ( v13 == 16 )
    {
LABEL_99:
      v40 = 1;
      goto LABEL_67;
    }
    goto LABEL_61;
  }
  if ( v13 > 8 || v13 - 5 <= 2 )
    goto LABEL_99;
  if ( (_QWORD)s1 == 0x6972747366635F5FLL && *(_DWORD *)((char *)&s1 + 7) == 6778473 )
    rangeset_t_add();
  if ( v13 == 8 && *(char *)(a2 + 364) < 0 )
    rangeset_t_add();
LABEL_62:
  if ( v60[0] )
  {
    v60[1] = 0;
    qfree();
  }
  return v77 - __readfsqword(0x28u);
}

