unsigned __int64 __fastcall sub_478E0(__int64 a1, __int64 a2)
{
  const char *v2; // rcx
  bool v3; // zf
  const char *v4; // rax
  __int64 v5; // rdi
  const char *v6; // rax
  char v7; // r12
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  size_t v16; // r13
  char v17; // r13
  __int64 v18; // rdi
  __int64 v19; // r14
  _QWORD *v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r14
  _QWORD *v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  void *v28; // r12
  size_t v29; // r13
  size_t v30; // r14
  size_t v31; // r8
  size_t v32; // r9
  __int64 v33; // rsi
  size_t v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // r12
  __int64 v37; // r15
  _QWORD *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rax
  size_t v44; // rax
  const char *v45; // [rsp+8h] [rbp-1E8h]
  __int64 v46; // [rsp+18h] [rbp-1D8h]
  size_t n; // [rsp+20h] [rbp-1D0h]
  size_t v48; // [rsp+28h] [rbp-1C8h]
  size_t v49; // [rsp+28h] [rbp-1C8h]
  _QWORD *v51; // [rsp+58h] [rbp-198h]
  char tinfo_details; // [rsp+68h] [rbp-188h]
  __int64 v53; // [rsp+68h] [rbp-188h]
  __int64 v54; // [rsp+68h] [rbp-188h]
  int v55; // [rsp+74h] [rbp-17Ch] BYREF
  __int64 v56; // [rsp+78h] [rbp-178h] BYREF
  __int64 v57; // [rsp+80h] [rbp-170h] BYREF
  __int64 v58; // [rsp+88h] [rbp-168h] BYREF
  __int64 tinfo_property; // [rsp+90h] [rbp-160h] BYREF
  __int64 v60; // [rsp+98h] [rbp-158h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-150h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-148h] BYREF
  const char *v63; // [rsp+B0h] [rbp-140h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-138h]
  __int64 v65; // [rsp+C0h] [rbp-130h]
  void *src; // [rsp+D0h] [rbp-120h] BYREF
  size_t v67[3]; // [rsp+D8h] [rbp-118h]
  _BYTE v68[24]; // [rsp+F0h] [rbp-100h] BYREF
  int v69; // [rsp+108h] [rbp-E8h]
  __int16 v70; // [rsp+10Ch] [rbp-E4h]
  _QWORD *v71; // [rsp+110h] [rbp-E0h] BYREF
  __int128 v72; // [rsp+118h] [rbp-D8h]
  __int128 v73; // [rsp+128h] [rbp-C8h]
  __int64 v74; // [rsp+138h] [rbp-B8h]
  int v75; // [rsp+140h] [rbp-B0h]
  _BYTE v76[24]; // [rsp+150h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+168h] [rbp-88h]
  __int64 v78; // [rsp+170h] [rbp-80h] BYREF
  __int64 v79; // [rsp+178h] [rbp-78h] BYREF
  __int128 v80; // [rsp+180h] [rbp-70h]
  __int64 v81; // [rsp+190h] [rbp-60h]
  __int128 v82; // [rsp+198h] [rbp-58h]
  char v83; // [rsp+1A8h] [rbp-48h]
  unsigned __int64 v84; // [rsp+1B8h] [rbp-38h]

  v2 = ::src;
  v84 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8) == 0;
  v55 = 0;
  v65 = 0;
  if ( !v3 )
    v2 = *(const char **)a2;
  v63 = nullptr;
  v64 = 0;
  sub_47410(a1, (__int64 *)&v63, &v55, v2, 0);
  v4 = ::src;
  v56 = 0;
  if ( v64 )
    v4 = v63;
  v46 = (__int64)v63;
  v45 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v76[8] = v4;
    *(_WORD *)&v76[16] = 256;
    *(_QWORD *)v76 = get_idati(a1, &v63);
    create_tinfo(&v56, 13, 61, v76);
    v5 = v56;
  }
  else
  {
    v5 = 0;
  }
  v71 = nullptr;
  v74 = 0;
  v75 = 1;
  v72 = 0;
  v73 = 0;
  get_tinfo_details(v5, 13, &v71);
  v6 = ::src;
  v57 = 0;
  if ( *(_QWORD *)(a2 + 8) )
    v6 = *(const char **)a2;
  if ( v6 )
  {
    *(_QWORD *)&v76[8] = v6;
    *(_WORD *)&v76[16] = 256;
    *(_QWORD *)v76 = get_idati(v5, 13);
    create_tinfo(&v57, 13, 61, v76);
  }
  v58 = 0;
  src = nullptr;
  *(_QWORD *)v68 = 0;
  *(_OWORD *)v76 = 0;
  copy_tinfo_t(&v76[8], v68);
  *(_QWORD *)&v76[16] = 0;
  copy_tinfo_t(&v76[16], &src);
  LODWORD(v77) = 0;
  WORD2(v77) = 0;
  clear_tinfo_t(v68);
  clear_tinfo_t(&src);
  copy_tinfo_t(v76, &v57);
  create_tinfo(&v58, 10, 10, v76);
  v7 = 0;
  clear_tinfo_t(&v76[16]);
  clear_tinfo_t(&v76[8]);
  clear_tinfo_t(v76);
  v8 = v71 + 8;
  v51 = &v71[18 * v72];
  if ( v51 == v71 )
  {
LABEL_74:
    clear_tinfo_t(&v58);
    clear_tinfo_t(&v57);
    v35 = v71;
    if ( v71 )
    {
      v36 = v72;
      if ( (_QWORD)v72 )
      {
        v37 = 0;
        do
        {
          v38 = &v35[18 * v37];
          clear_tinfo_t(v38 + 8);
          v39 = v38[5];
          if ( v39 )
          {
            v38[6] = 0;
            qfree(v39);
          }
          v40 = v38[2];
          if ( v40 )
          {
            v38[3] = 0;
            qfree(v40);
          }
          v35 = v71;
          ++v37;
        }
        while ( v36 != v37 );
      }
      *(_QWORD *)&v72 = 0;
      qfree(v35);
    }
    clear_tinfo_t(&v56);
    if ( v46 )
      goto LABEL_24;
    return v84 - __readfsqword(0x28u);
  }
  while ( !*(v8 - 5) || strcmp((const char *)*(v8 - 6), "QueryInterface") )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(*v8, 9);
    memset(v76, 0, sizeof(v76));
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 16;
    v80 = 0;
    v82 = 0;
    tinfo_details = get_tinfo_details(tinfo_property, 140, v76);
    if ( tinfo_details && *(_QWORD *)&v76[8] && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)v76 + 64LL), 2) & 0xF) == 0xA )
    {
      v16 = *(v8 - 5);
      if ( v16 )
      {
        if ( *(_BYTE *)*(v8 - 6) != 126 )
          goto LABEL_31;
        v28 = (void *)qalloc_or_throw(*(v8 - 5));
        memcpy(v28, (const void *)*(v8 - 6), v16);
      }
      else
      {
        if ( byte_B3721 != 126 )
        {
LABEL_31:
          *(_QWORD *)v68 = 0;
          *(_QWORD *)v68 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)v76 + 64LL), 10);
          v17 = compare_tinfo(v57, *(_QWORD *)v68, 1);
          clear_tinfo_t(v68);
          if ( !v17 )
          {
            *(_QWORD *)v68 = 0;
            copy_tinfo_t(v68, &v58);
            copy_tinfo_t(*(_QWORD *)v76 + 64LL, v68);
            clear_tinfo_t(v68);
            *(_OWORD *)v67 = 0;
            src = nullptr;
            print_tinfo(&src, 0, 0, 0, 0, v8, 0, 0);
            v60 = 0;
            create_tinfo(&v60, 12, 12, v76);
            v61 = 0;
            v62 = 0;
            *(_OWORD *)v68 = 0;
            copy_tinfo_t(&v68[8], &v62);
            *(_QWORD *)&v68[16] = 0;
            copy_tinfo_t(&v68[16], &v61);
            v69 = 0;
            v70 = 0;
            clear_tinfo_t(&v62);
            clear_tinfo_t(&v61);
            copy_tinfo_t(v68, &v60);
            create_tinfo(&v60, 10, 10, v68);
            clear_tinfo_t(&v68[16]);
            clear_tinfo_t(&v68[8]);
            clear_tinfo_t(v68);
            clear_tinfo_t(v8);
            copy_tinfo_t(v8, &v60);
            memset(v68, 0, sizeof(v68));
            print_tinfo(v68, 0, 0, 0, 0, v8, 0, 0);
            if ( *(_QWORD *)v68 )
            {
              *(_QWORD *)&v68[8] = 0;
              qfree(*(_QWORD *)v68);
            }
            clear_tinfo_t(&v60);
            if ( src )
            {
              v67[0] = 0;
              qfree(src);
            }
            v7 = tinfo_details;
          }
          if ( v81 )
          {
            *(_QWORD *)&v82 = 0;
            qfree(v81);
          }
          cleanup_argloc(&v79);
          clear_tinfo_t(&v78);
          v18 = *(_QWORD *)v76;
          if ( *(_QWORD *)v76 )
          {
            v19 = *(_QWORD *)&v76[8];
            if ( *(_QWORD *)&v76[8] )
            {
              v53 = 0;
              do
              {
                v20 = (_QWORD *)(v18 + 80 * v53);
                clear_tinfo_t(v20 + 8);
                v21 = v20[5];
                if ( v21 )
                {
                  v20[6] = 0;
                  qfree(v21);
                }
                v22 = v20[2];
                if ( v22 )
                {
                  v20[3] = 0;
                  qfree(v22);
                }
                cleanup_argloc(v20);
                ++v53;
                v18 = *(_QWORD *)v76;
              }
              while ( v19 != v53 );
            }
            *(_QWORD *)&v76[8] = 0;
            qfree(v18);
          }
          goto LABEL_48;
        }
        v28 = nullptr;
      }
      *(_OWORD *)v67 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(&src, 0, 2, 1);
      v67[0] = 2;
      *(_BYTE *)src = 126;
      *((_BYTE *)src + 1) = 0;
      v29 = v67[0];
      memset(v68, 0, sizeof(v68));
      if ( v67[0] )
      {
        *(_QWORD *)v68 = qalloc_or_throw(v67[0]);
        *(_QWORD *)&v68[16] = v29;
        memcpy(*(void **)v68, src, v29);
        *(_QWORD *)&v68[8] = v29;
        v31 = *(_QWORD *)&v68[16];
        v33 = *(_QWORD *)v68;
        v43 = *(_QWORD *)(a2 + 8);
        if ( v43 && (v44 = v43 - 1, (v32 = v44) != 0) )
        {
          --v29;
          v34 = v44 + v29;
          v30 = v34 + 1;
          if ( *(_QWORD *)&v68[16] < v34 + 1 )
          {
            v31 = v34;
LABEL_68:
            n = v32;
            v48 = v31;
            *(_QWORD *)v68 = qvector_reserve(v68, v33, v30, 1);
            v33 = *(_QWORD *)v68;
            v32 = n;
            v34 = v48;
          }
          *(_QWORD *)&v68[8] = v30;
          *(_BYTE *)(v33 + v34) = 0;
          memcpy((void *)(v29 + *(_QWORD *)v68), *(const void **)a2, v32);
          v30 = *(_QWORD *)&v68[8];
          v33 = *(_QWORD *)v68;
          v31 = *(_QWORD *)&v68[16];
        }
        else
        {
          v30 = v29;
        }
      }
      else
      {
        v30 = *(_QWORD *)(a2 + 8);
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v30 != 1 )
          {
            v32 = v30 - 1;
            v33 = 0;
            goto LABEL_68;
          }
          v30 = 0;
          v33 = 0;
        }
        else
        {
          v31 = 0;
          v33 = 0;
        }
      }
      memset(v68, 0, sizeof(v68));
      v41 = *(v8 - 6);
      if ( v41 )
      {
        *(v8 - 5) = 0;
        v49 = v31;
        qfree(v41);
        v42 = *(_QWORD *)v68;
        *(v8 - 5) = v30;
        *(v8 - 6) = v33;
        *(v8 - 4) = v49;
        if ( v42 )
        {
          *(_QWORD *)&v68[8] = 0;
          qfree(v42);
        }
      }
      else
      {
        *(v8 - 6) = v33;
        *(v8 - 5) = v30;
        *(v8 - 4) = v31;
      }
      if ( src )
      {
        v67[0] = 0;
        qfree(src);
      }
      if ( v28 )
        qfree(v28);
      v7 = tinfo_details;
      goto LABEL_31;
    }
    if ( v81 )
    {
      *(_QWORD *)&v82 = 0;
      qfree(v81);
    }
    cleanup_argloc(&v79);
    clear_tinfo_t(&v78);
    v23 = *(_QWORD *)v76;
    if ( *(_QWORD *)v76 )
    {
      v24 = *(_QWORD *)&v76[8];
      if ( *(_QWORD *)&v76[8] )
      {
        v54 = 0;
        do
        {
          v25 = (_QWORD *)(v23 + 80 * v54);
          clear_tinfo_t(v25 + 8);
          v26 = v25[5];
          if ( v26 )
          {
            v25[6] = 0;
            qfree(v26);
          }
          v27 = v25[2];
          if ( v27 )
          {
            v25[3] = 0;
            qfree(v27);
          }
          cleanup_argloc(v25);
          ++v54;
          v23 = *(_QWORD *)v76;
        }
        while ( v24 != v54 );
      }
      *(_QWORD *)&v76[8] = 0;
      qfree(v23);
    }
LABEL_48:
    clear_tinfo_t(&tinfo_property);
    if ( v51 == v8 + 10 )
    {
      if ( v7 )
      {
        if ( (v74 & 0x10000000000LL) != 0 )
          udt_type_data_t__deduplicate_members(&v71);
        create_tinfo(&v56, 13, 13, &v71);
        save_tinfo(&v56, 0, 0, v45, 5);
      }
      goto LABEL_74;
    }
    v8 += 18;
  }
  clear_tinfo_t(&v58);
  clear_tinfo_t(&v57);
  v9 = v71;
  if ( v71 )
  {
    v10 = v72;
    if ( (_QWORD)v72 )
    {
      v11 = 0;
      do
      {
        v12 = &v9[18 * v11];
        clear_tinfo_t(v12 + 8);
        v13 = v12[5];
        if ( v13 )
        {
          v12[6] = 0;
          qfree(v13);
        }
        v14 = v12[2];
        if ( v14 )
        {
          v12[3] = 0;
          qfree(v14);
        }
        v9 = v71;
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v72 = 0;
    qfree(v9);
  }
  clear_tinfo_t(&v56);
  if ( !v46 )
    return v84 - __readfsqword(0x28u);
LABEL_24:
  qfree(v46);
  return v84 - __readfsqword(0x28u);
}

