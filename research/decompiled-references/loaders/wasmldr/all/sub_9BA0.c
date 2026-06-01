__int64 __fastcall sub_9BA0(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // edx
  char *v9; // rsi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  char *v15; // rsi
  int v16; // edx
  char *v17; // rsi
  __int64 v18; // rdx
  unsigned int v19; // esi
  char *v20; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  char *v33; // rsi
  char *v34; // rsi
  int v35; // r14d
  unsigned int v36; // r12d
  __int64 v37; // rsi
  __int64 v38; // rdi
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdi
  char *v44; // rsi
  char *v45; // rsi
  unsigned int j; // ebp
  __int64 v47; // rsi
  __int64 v48; // rdi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdi
  char *v54; // rsi
  char *v55; // rsi
  unsigned int i; // ebp
  __int64 v57; // rsi
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdi
  unsigned int v62; // ebp
  char *v63; // rsi
  char *v64; // rsi
  unsigned __int64 v65; // r9
  void *v66; // r12
  __int64 v67; // rax
  unsigned int v68; // esi
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // r10
  __int64 v74; // rcx
  __int64 v75; // rdx
  void *v76; // rax
  __int64 v77; // rdi
  const char *v78; // rdx
  __int64 v79; // rdi
  char *v80; // rsi
  char *v81; // rsi
  __int64 v82; // rdi
  char *v83; // rsi
  char *v84; // rsi
  __int64 v85; // rsi
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rdi
  char *v90; // rsi
  char *v91; // rsi
  int v92; // r12d
  unsigned int v93; // ebp
  __int64 v94; // rsi
  __int64 v95; // rdi
  unsigned __int64 v96; // rdi
  unsigned __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // rdi
  char *v100; // rsi
  char *v101; // rsi
  unsigned int v102; // r14d
  __int64 v103; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v104; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v105; // [rsp+10h] [rbp-B8h]
  unsigned int v106; // [rsp+18h] [rbp-B0h]
  int v107; // [rsp+1Ch] [rbp-ACh]
  int v108; // [rsp+20h] [rbp-A8h]
  __int64 v109; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v110; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v111; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v112; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v113; // [rsp+28h] [rbp-A0h]
  unsigned int v114; // [rsp+28h] [rbp-A0h]
  __int64 v115; // [rsp+28h] [rbp-A0h]
  unsigned int v116; // [rsp+34h] [rbp-94h] BYREF
  unsigned int v117; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v118; // [rsp+3Ch] [rbp-8Ch] BYREF
  unsigned int v119; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v120; // [rsp+44h] [rbp-84h] BYREF
  unsigned int *v121; // [rsp+48h] [rbp-80h] BYREF
  char *v122; // [rsp+50h] [rbp-78h] BYREF
  __int128 v123; // [rsp+58h] [rbp-70h]
  void *src; // [rsp+70h] [rbp-58h] BYREF
  __int128 v125; // [rsp+78h] [rbp-50h]
  unsigned __int64 v126; // [rsp+88h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 24);
  v104 = *(_QWORD *)(a1 + 32);
  if ( v2 >= v104 )
    return 1;
  v107 = 1;
  v106 = 0;
  do
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = v3 + v2;
    v5 = v104 + v3;
    if ( v4 >= v5 || (v6 = sub_E440(v4, v5, &v116)) == 0 )
      sub_3890((__int64)"name section: couldn't read name type at 0x%llx", *(_QWORD *)(a1 + 40));
    v7 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 40) = v7;
    *(_QWORD *)(a1 + 24) = v6 + v7;
    if ( v107 != 1 )
    {
      if ( v106 == v116 )
        sub_3890((__int64)"name section: duplicate subsection", v5, v6);
      if ( v116 < v106 )
        sub_3890((__int64)"name section: out of order subsection", v5, v6);
    }
    v106 = v116;
    create_data(v7, 0, v6, -1);
    v123 = 0;
    v122 = nullptr;
    v122 = (char *)qvector_reserve(&v122, 0, 11, 1);
    v8 = v116;
    *(_QWORD *)&v123 = 11;
    strcpy(v122, "name type ");
    sub_4EE0((__int64 *)&v122, (__int64)"(%u)", v8);
    v9 = (char *)&unk_10F58;
    if ( (_QWORD)v123 )
      v9 = v122;
    set_cmt(*(_QWORD *)(a1 + 40), v9, 0);
    v10 = *(_QWORD *)(a1 + 8);
    v11 = v10 + *(_QWORD *)(a1 + 24);
    v12 = *(_QWORD *)(a1 + 32) + v10;
    if ( v11 >= v12 || (v13 = sub_E440(v11, v12, &v117)) == 0 )
      sub_3890((__int64)"name section: couldn't read subsection size at 0x%llx", *(_QWORD *)(a1 + 40));
    v14 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 40) = v14;
    *(_QWORD *)(a1 + 24) = v13 + v14;
    create_data(v14, 0, v13, -1);
    v15 = v122;
    if ( *((_QWORD *)&v123 + 1) <= 5u )
    {
      v122 = (char *)qvector_reserve(&v122, v122, 6, 1);
      v15 = v122;
    }
    *(_QWORD *)&v123 = 6;
    *(_DWORD *)v15 = 1702521203;
    v16 = v117;
    v15[4] = 32;
    v122[5] = 0;
    sub_4EE0((__int64 *)&v122, (__int64)"(0x%x)", v16);
    v17 = (char *)&unk_10F58;
    if ( (_QWORD)v123 )
      v17 = v122;
    set_cmt(*(_QWORD *)(a1 + 40), v17, 0);
    v18 = *(_QWORD *)(a1 + 24);
    v19 = v117;
    v105 = v18 + v117;
    v104 = *(_QWORD *)(a1 + 32);
    if ( v104 < v105 )
      sub_3890((__int64)"name section: invalid sub-section size: extends past end", v117);
    *(_QWORD *)(a1 + 32) = v105;
    switch ( v116 )
    {
      case 0u:
        if ( !v19 )
          goto LABEL_28;
        src = nullptr;
        v125 = 0;
        sub_4200((_QWORD *)a1, (__int64 *)&src);
        if ( src )
          qfree(src);
        goto LABEL_36;
      case 1u:
        if ( !v19 )
          goto LABEL_28;
        v22 = *(_QWORD *)(a1 + 8);
        v23 = v22 + v18;
        v24 = v105 + v22;
        if ( v23 >= v24 || (v31 = sub_E440(v23, v24, &v119)) == 0 )
          sub_3890((__int64)"name section: couldn't read name count at 0x%llx", *(_QWORD *)(a1 + 40));
        v32 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 40) = v32;
        *(_QWORD *)(a1 + 24) = v31 + v32;
        create_data(v32, 0, v31, -1);
        v33 = v122;
        if ( *((_QWORD *)&v123 + 1) <= 0xCu )
        {
          v122 = (char *)qvector_reserve(&v122, v122, 13, 1);
          v33 = v122;
        }
        *(_QWORD *)&v123 = 13;
        qmemcpy(v33, "names count ", 12);
        v122[12] = 0;
        sub_4EE0((__int64 *)&v122, (__int64)"(%u)", v119);
        v34 = (char *)&unk_10F58;
        if ( (_QWORD)v123 )
          v34 = v122;
        set_cmt(*(_QWORD *)(a1 + 40), v34, 0);
        v35 = 0;
        v36 = -1;
        v103 = a1 + 128;
        if ( !v119 )
          goto LABEL_36;
        break;
      case 2u:
        if ( !v19 )
          goto LABEL_28;
        v25 = *(_QWORD *)(a1 + 8);
        v26 = v25 + v18;
        v27 = v105 + v25;
        if ( v26 >= v27 || (v52 = sub_E440(v26, v27, &v118)) == 0 )
          sub_3890((__int64)"name section: couldn't read function count at 0x%llx", *(_QWORD *)(a1 + 40));
        v53 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 40) = v53;
        *(_QWORD *)(a1 + 24) = v52 + v53;
        create_data(v53, 0, v52, -1);
        v54 = v122;
        if ( *((_QWORD *)&v123 + 1) <= 0xFu )
        {
          v122 = (char *)qvector_reserve(&v122, v122, 16, 1);
          v54 = v122;
        }
        *(_QWORD *)&v123 = 16;
        qmemcpy(v54, "function count ", 15);
        v122[15] = 0;
        sub_4EE0((__int64 *)&v122, (__int64)"(%u)", v118);
        v55 = (char *)&unk_10F58;
        if ( (_QWORD)v123 )
          v55 = v122;
        set_cmt(*(_QWORD *)(a1 + 40), v55, 0);
        if ( v118 )
        {
          v108 = 0;
          for ( i = -1; ; i = v114 )
          {
            v57 = *(_QWORD *)(a1 + 8);
            v58 = v57 + *(_QWORD *)(a1 + 24);
            v59 = *(_QWORD *)(a1 + 32) + v57;
            if ( v58 >= v59 || (v60 = sub_E440(v58, v59, &v119)) == 0 )
              sub_3890((__int64)"name section: couldn't read function index at 0x%llx", *(_QWORD *)(a1 + 40));
            v82 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 40) = v82;
            *(_QWORD *)(a1 + 24) = v60 + v82;
            create_data(v82, 0, v60, -1);
            v83 = v122;
            if ( *((_QWORD *)&v123 + 1) <= 0xFu )
            {
              v122 = (char *)qvector_reserve(&v122, v122, 16, 1);
              v83 = v122;
            }
            *(_QWORD *)&v123 = 16;
            qmemcpy(v83, "function index ", 15);
            v122[15] = 0;
            sub_4EE0((__int64 *)&v122, (__int64)"(%u)", v119);
            v84 = (char *)&unk_10F58;
            if ( (_QWORD)v123 )
              v84 = v122;
            set_cmt(*(_QWORD *)(a1 + 40), v84, 0);
            v114 = v119;
            if ( v119 >= *(_DWORD *)(a1 + 88) + *(_DWORD *)(a1 + 76) )
              sub_3890((__int64)"name section: invalid function index: %u", v119);
            if ( i != -1 && i >= v119 )
              sub_3890((__int64)"name section: locals function index out of order: %u", v119);
            v85 = *(_QWORD *)(a1 + 8);
            v86 = v85 + *(_QWORD *)(a1 + 24);
            v87 = *(_QWORD *)(a1 + 32) + v85;
            if ( v86 >= v87 || (v88 = sub_E440(v86, v87, &v120)) == 0 )
              sub_3890((__int64)"name section: couldn't read local count at 0x%llx", *(_QWORD *)(a1 + 40));
            v89 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 40) = v89;
            *(_QWORD *)(a1 + 24) = v88 + v89;
            create_data(v89, 0, v88, -1);
            v90 = v122;
            if ( *((_QWORD *)&v123 + 1) <= 0xCu )
            {
              v122 = (char *)qvector_reserve(&v122, v122, 13, 1);
              v90 = v122;
            }
            *(_QWORD *)&v123 = 13;
            qmemcpy(v90, "local count ", 12);
            v122[12] = 0;
            sub_4EE0((__int64 *)&v122, (__int64)"(%u)", v120);
            v91 = (char *)&unk_10F58;
            if ( (_QWORD)v123 )
              v91 = v122;
            set_cmt(*(_QWORD *)(a1 + 40), v91, 0);
            v92 = 0;
            v93 = -1;
            if ( v120 )
            {
              while ( 1 )
              {
                v94 = *(_QWORD *)(a1 + 8);
                v95 = *(_QWORD *)(a1 + 24);
                v125 = 0;
                v96 = v94 + v95;
                v97 = *(_QWORD *)(a1 + 32) + v94;
                if ( v96 >= v97 || (v98 = sub_E440(v96, v97, &v121)) == 0 )
                  sub_3890((__int64)"name section: couldn't read local index at 0x%llx", *(_QWORD *)(a1 + 40));
                v99 = *(_QWORD *)(a1 + 24);
                *(_QWORD *)(a1 + 40) = v99;
                *(_QWORD *)(a1 + 24) = v98 + v99;
                create_data(v99, 0, v98, -1);
                v100 = v122;
                if ( *((_QWORD *)&v123 + 1) <= 0xCu )
                {
                  v122 = (char *)qvector_reserve(&v122, v122, 13, 1);
                  v100 = v122;
                }
                *(_QWORD *)&v123 = 13;
                qmemcpy(v100, "local index ", 12);
                v122[12] = 0;
                sub_4EE0((__int64 *)&v122, (__int64)"(%u)", v119);
                v101 = (char *)&unk_10F58;
                if ( (_QWORD)v123 )
                  v101 = v122;
                set_cmt(*(_QWORD *)(a1 + 40), v101, 0);
                v102 = (unsigned int)v121;
                if ( (_DWORD)v121 == v93 )
                  sub_3890((__int64)"name section: duplicate local index: %u", v93);
                if ( v93 != -1 && v93 >= (unsigned int)v121 )
                  sub_3890((__int64)"name section: local index out of order: %u", (_DWORD)v121);
                src = nullptr;
                sub_4200((_QWORD *)a1, (__int64 *)&src);
                if ( src )
                  qfree(src);
                if ( ++v92 >= v120 )
                  break;
                v93 = v102;
              }
            }
            if ( ++v108 >= v118 )
              break;
          }
        }
        goto LABEL_36;
      case 3u:
        goto LABEL_22;
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xBu:
        if ( v19 )
        {
          v28 = *(_QWORD *)(a1 + 8);
          v29 = v28 + v18;
          v30 = v105 + v28;
          if ( v29 >= v30 || (v42 = sub_E440(v29, v30, &v120)) == 0 )
            sub_3890((__int64)"name section: couldn't read name count at 0x%llx", *(_QWORD *)(a1 + 40));
          v43 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)(a1 + 40) = v43;
          *(_QWORD *)(a1 + 24) = v42 + v43;
          create_data(v43, 0, v42, -1);
          v44 = v122;
          if ( *((_QWORD *)&v123 + 1) <= 0xCu )
          {
            v122 = (char *)qvector_reserve(&v122, v122, 13, 1);
            v44 = v122;
          }
          *(_QWORD *)&v123 = 13;
          qmemcpy(v44, "names count ", 12);
          v122[12] = 0;
          sub_4EE0((__int64 *)&v122, (__int64)"(%u)", v120);
          v45 = (char *)&unk_10F58;
          if ( (_QWORD)v123 )
            v45 = v122;
          set_cmt(*(_QWORD *)(a1 + 40), v45, 0);
          for ( j = 0; j < v120; ++j )
          {
            v47 = *(_QWORD *)(a1 + 8);
            v48 = *(_QWORD *)(a1 + 24);
            v125 = 0;
            v49 = v47 + v48;
            v50 = *(_QWORD *)(a1 + 32) + v47;
            if ( v49 >= v50 || (v51 = sub_E440(v49, v50, &v121)) == 0 )
              sub_3890((__int64)"name section: couldn't read name index %u at 0x%llx", j, *(_QWORD *)(a1 + 40));
            v79 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 40) = v79;
            *(_QWORD *)(a1 + 24) = v51 + v79;
            create_data(v79, 0, v51, -1);
            v80 = v122;
            if ( *((_QWORD *)&v123 + 1) <= 0xBu )
            {
              v122 = (char *)qvector_reserve(&v122, v122, 12, 1);
              v80 = v122;
            }
            *(_QWORD *)&v123 = 12;
            qmemcpy(v80, "name index ", 11);
            v122[11] = 0;
            sub_4EE0((__int64 *)&v122, (__int64)"(%u)", (_DWORD)v121);
            v81 = (char *)&unk_10F58;
            if ( (_QWORD)v123 )
              v81 = v122;
            set_cmt(*(_QWORD *)(a1 + 40), v81, 0);
            src = nullptr;
            sub_4200((_QWORD *)a1, (__int64 *)&src);
            if ( src )
              qfree(src);
          }
          v18 = *(_QWORD *)(a1 + 24);
        }
        goto LABEL_21;
      default:
LABEL_21:
        *(_QWORD *)(a1 + 40) = v18;
LABEL_22:
        *(_QWORD *)(a1 + 24) = v105;
        goto LABEL_23;
    }
    while ( 1 )
    {
      v37 = *(_QWORD *)(a1 + 8);
      v38 = *(_QWORD *)(a1 + 24);
      *((_QWORD *)&v125 + 1) = 0;
      v39 = v37 + v38;
      v40 = *(_QWORD *)(a1 + 32) + v37;
      if ( v39 >= v40 || (v41 = sub_E440(v39, v40, &v120)) == 0 )
        sub_3890((__int64)"name section: couldn't read function index %u at 0x%llx", v35, *(_QWORD *)(a1 + 40));
      v61 = *(_QWORD *)(a1 + 24);
      v62 = v120;
      *(_QWORD *)(a1 + 40) = v61;
      *(_QWORD *)(a1 + 24) = v41 + v61;
      if ( v62 == v36 )
        sub_3890((__int64)"name section: duplicate function name: %u", v36);
      if ( v36 != -1 && v36 >= v62 )
        sub_3890((__int64)"name section: function index out of order: %u", v62);
      if ( v62 >= *(_DWORD *)(a1 + 88) + *(_DWORD *)(a1 + 76) )
        sub_3890((__int64)"name section: invalid function index: %u", v62);
      create_data(v61, 0, v41, -1);
      v63 = v122;
      if ( *((_QWORD *)&v123 + 1) <= 0xFu )
      {
        v122 = (char *)qvector_reserve(&v122, v122, 16, 1);
        v63 = v122;
      }
      *(_QWORD *)&v123 = 16;
      qmemcpy(v63, "function index ", 15);
      v122[15] = 0;
      sub_4EE0((__int64 *)&v122, (__int64)"(%u)", v120);
      v64 = (char *)&unk_10F58;
      if ( (_QWORD)v123 )
        v64 = v122;
      set_cmt(*(_QWORD *)(a1 + 40), v64, 0);
      src = nullptr;
      *(_QWORD *)&v125 = 0;
      sub_4200((_QWORD *)a1, (__int64 *)&src);
      v65 = v125;
      v66 = src;
      if ( (unsigned __int64)v125 > 1 )
      {
        v67 = *(_QWORD *)(a1 + 136);
        v68 = v120;
        if ( v67 )
        {
          v69 = a1 + 128;
          v70 = *(_QWORD *)(a1 + 136);
          do
          {
            while ( 1 )
            {
              v71 = *(_QWORD *)(v70 + 16);
              v72 = *(_QWORD *)(v70 + 24);
              if ( *(_DWORD *)(v70 + 32) < v120 )
                break;
              v69 = v70;
              v70 = *(_QWORD *)(v70 + 16);
              if ( !v71 )
                goto LABEL_83;
            }
            v70 = *(_QWORD *)(v70 + 24);
          }
          while ( v72 );
LABEL_83:
          if ( v69 == v103 || v120 < *(_DWORD *)(v69 + 32) )
          {
LABEL_85:
            v73 = a1 + 128;
            do
            {
              while ( 1 )
              {
                v74 = *(_QWORD *)(v67 + 16);
                v75 = *(_QWORD *)(v67 + 24);
                if ( *(_DWORD *)(v67 + 32) < v68 )
                  break;
                v73 = v67;
                v67 = *(_QWORD *)(v67 + 16);
                if ( !v74 )
                  goto LABEL_89;
              }
              v67 = *(_QWORD *)(v67 + 24);
            }
            while ( v75 );
LABEL_89:
            if ( v103 != v73 && v68 >= *(_DWORD *)(v73 + 32) )
            {
              v76 = *(void **)(v73 + 40);
              v77 = v73 + 40;
              if ( *(_QWORD *)(v73 + 56) >= v65 )
              {
LABEL_92:
                *(_QWORD *)(v73 + 48) = v65;
                v113 = v65;
                v109 = v73;
                memmove(v76, v66, v65 - 1);
                *(_BYTE *)(*(_QWORD *)(v109 + 40) + v113 - 1) = 0;
                goto LABEL_93;
              }
LABEL_142:
              v115 = v73;
              v112 = v65;
              v76 = (void *)qvector_reserve(v77, v76, v65, 1);
              v73 = v115;
              v65 = v112;
              *(_QWORD *)(v115 + 40) = v76;
              goto LABEL_92;
            }
LABEL_141:
            v111 = v65;
            v121 = &v120;
            v73 = sub_8EC0((_QWORD *)(a1 + 120), v73, (__int64)&unk_10F59, &v121);
            v77 = v73 + 40;
            v65 = v111;
            v76 = *(void **)(v73 + 40);
            if ( *(_QWORD *)(v73 + 56) >= v111 )
              goto LABEL_92;
            goto LABEL_142;
          }
          v78 = (const char *)&unk_10F58;
          if ( *(_QWORD *)(v69 + 48) )
            v78 = *(const char **)(v69 + 40);
          v110 = v125;
          sub_3A10((__int64)"overwriting function %u '%s' for '%s'\n", v120, v78, (const char *)src);
          v67 = *(_QWORD *)(a1 + 136);
          v65 = v110;
          if ( v67 )
          {
            v68 = v120;
            goto LABEL_85;
          }
        }
        v73 = a1 + 128;
        goto LABEL_141;
      }
LABEL_93:
      if ( v66 )
        qfree(v66);
      if ( ++v35 >= v119 )
        break;
      v36 = v62;
    }
LABEL_36:
    v18 = *(_QWORD *)(a1 + 24);
LABEL_28:
    if ( v18 != v105 )
      sub_3890((__int64)"name section: unfinished subsection (expected end: 0x%llx)", v105);
LABEL_23:
    v20 = v122;
    *(_QWORD *)(a1 + 32) = v104;
    if ( v20 )
    {
      *(_QWORD *)&v123 = 0;
      qfree(v20);
      v104 = *(_QWORD *)(a1 + 32);
    }
    v2 = *(_QWORD *)(a1 + 24);
    ++v107;
  }
  while ( v2 < v104 );
  return 1;
}
