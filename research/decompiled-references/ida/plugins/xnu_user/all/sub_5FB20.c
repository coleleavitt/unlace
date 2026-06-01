__int64 __fastcall sub_5FB20(__int64 a1, char a2, unsigned int a3, double a4, __m128i a5)
{
  __int64 *v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rdx
  char *v16; // rax
  unsigned __int8 v17; // r15
  __int64 v18; // r13
  char v19; // al
  char v20; // al
  unsigned int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int8 v29; // dl
  int v30; // eax
  const char *v31; // rcx
  int v32; // r8d
  int v33; // eax
  void (*v34)(); // rax
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rax
  int v38; // esi
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // esi
  int v43; // edx
  int v44; // eax
  unsigned __int8 v45; // cl
  int v46; // edx
  int v47; // eax
  unsigned int v48; // edx
  _QWORD *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // r13
  __int64 v53; // rax
  unsigned int v54; // eax
  const char *v55; // rdi
  const char *v56; // rdx
  const char *v57; // rdx
  int j; // eax
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdi
  signed __int8 v65; // dl
  int v66; // eax
  unsigned __int8 v67; // si
  int v68; // r13d
  int v69; // eax
  int v70; // eax
  _QWORD *v71; // rdi
  int v72; // eax
  __int64 v73; // rdx
  char *v74; // r9
  _BOOL8 v75; // r15
  size_t v76; // rdx
  size_t v77; // r13
  __int64 v78; // rax
  const char *v79; // rsi
  unsigned __int64 v80; // rdi
  __int64 v81; // rdx
  int v82; // ecx
  int v83; // r8d
  char v84; // r13
  const char *v85; // rdx
  int i; // eax
  int v87; // eax
  void *v88; // rdi
  __int64 v89; // rdx
  char v90; // dl
  unsigned __int64 v91; // rdx
  int v92; // eax
  int v93; // eax
  int v94; // eax
  const char *v95; // rdx
  int v96; // eax
  __int64 v97; // rax
  __int64 *v98; // [rsp+0h] [rbp-188h]
  char *s1; // [rsp+8h] [rbp-180h]
  char *s1a; // [rsp+8h] [rbp-180h]
  int s1b; // [rsp+8h] [rbp-180h]
  char *s1c; // [rsp+8h] [rbp-180h]
  char *s1d; // [rsp+8h] [rbp-180h]
  unsigned __int8 v104; // [rsp+10h] [rbp-178h]
  __int64 v105; // [rsp+10h] [rbp-178h]
  char *v106; // [rsp+10h] [rbp-178h]
  __int64 v107; // [rsp+18h] [rbp-170h]
  __m128i v108; // [rsp+20h] [rbp-168h] BYREF
  unsigned __int64 v109; // [rsp+30h] [rbp-158h] BYREF
  __int64 v110; // [rsp+38h] [rbp-150h] BYREF
  char *v111; // [rsp+40h] [rbp-148h] BYREF
  __int128 v112; // [rsp+48h] [rbp-140h]
  __int64 v113; // [rsp+60h] [rbp-128h] BYREF
  __int128 v114; // [rsp+68h] [rbp-120h]
  __int64 v115; // [rsp+80h] [rbp-108h] BYREF
  __int128 v116; // [rsp+88h] [rbp-100h]
  char *v117; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v118; // [rsp+A8h] [rbp-E0h]
  const char *v119; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v120; // [rsp+C8h] [rbp-C0h]
  __int64 v121; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v122; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 v123; // [rsp+100h] [rbp-88h] BYREF
  __int64 v124; // [rsp+108h] [rbp-80h]
  __int64 v125; // [rsp+110h] [rbp-78h]
  __int128 v126; // [rsp+118h] [rbp-70h]
  __int128 v127; // [rsp+128h] [rbp-60h]
  __int128 v128; // [rsp+138h] [rbp-50h]
  unsigned __int64 v129; // [rsp+148h] [rbp-40h]

  LOBYTE(v7) = a2;
  v129 = __readfsqword(0x28u);
  while ( 2 )
  {
    v9 = *(_QWORD *)(a1 + 864);
    v111 = nullptr;
    v112 = 0;
    sub_63D60(v9, a3);
    v10 = (__int64)&v111;
    if ( !(unsigned __int8)sub_656F0(*(_QWORD *)(a1 + 864), &v111) || (v11 = 0, (unsigned int)sub_64800(&v111, 0) != 1) )
    {
      v21 = -*(unsigned __int8 *)(*(_QWORD *)(a1 + 864) + 250LL);
      goto LABEL_24;
    }
    v15 = v112;
    v113 = 0;
    v109 = -1;
    v115 = 0;
    v114 = 0;
    v116 = 0;
    if ( !(_QWORD)v112 )
    {
      if ( byte_9AD48 == 84 )
      {
        v110 = 3;
        v17 = 0;
        v107 = -1;
        LODWORD(v98) = -1;
        goto LABEL_55;
      }
      if ( !a2 )
      {
        switch ( byte_9AD48 )
        {
          case 'F':
LABEL_101:
            sub_14020((__int64)"Host syscalls are not implemented");
            goto LABEL_14;
          case 'O':
LABEL_90:
            if ( v115 )
            {
              *(_QWORD *)&v116 = 0;
              qfree();
            }
            v50 = v113;
            if ( v113 )
            {
              v51 = v114;
              if ( (_QWORD)v114 )
              {
                v52 = 0;
                do
                {
                  v53 = v50 + 32 * v52;
                  if ( *(_QWORD *)(v53 + 8) )
                  {
                    *(_QWORD *)(v53 + 16) = 0;
                    qfree();
                    v50 = v113;
                  }
                  ++v52;
                }
                while ( v51 != v52 );
              }
              *(_QWORD *)&v114 = 0;
              qfree();
            }
            if ( v111 )
            {
              *(_QWORD *)&v112 = 0;
              qfree();
            }
            continue;
          case 'S':
            if ( *(_DWORD *)(a1 + 1360) != 1 )
              *(_DWORD *)(a1 + 1360) = 2;
            goto LABEL_40;
          case 'T':
            v17 = (unsigned __int8)v7;
LABEL_119:
            if ( *(_DWORD *)(a1 + 1360) != 1 )
              *(_DWORD *)(a1 + 1360) = 2 - ((v17 == 0) - 1);
            goto LABEL_40;
          case 'W':
          case 'X':
            *(_DWORD *)(a1 + 1360) = 6;
            goto LABEL_40;
          default:
            goto LABEL_14;
        }
      }
      v19 = byte_9AD48;
      v17 = 0;
      if ( byte_9AD48 == 84 )
        goto LABEL_32;
      goto LABEL_12;
    }
    break;
  }
  v16 = v111;
  if ( *v111 != 84 )
  {
    if ( !a2 )
    {
      v17 = 0;
      v18 = 0;
LABEL_37:
      v20 = *v16 - 70;
LABEL_38:
      switch ( v20 )
      {
        case 0:
          goto LABEL_101;
        case 9:
          if ( a2 )
          {
            if ( v15 )
            {
              v73 = v15 - 1;
              v121 = 0;
              v74 = v111;
              v122 = 0;
              v75 = v73 != 0;
              v76 = v73 - v75;
              v77 = v76;
              if ( v76 )
              {
                v88 = nullptr;
                v89 = v76 + 1;
                if ( v89 )
                {
                  v106 = v111;
                  s1c = (char *)v89;
                  v121 = qvector_reserve();
                  v74 = v106;
                  v88 = (void *)v121;
                  v89 = (__int64)s1c;
                }
                v122.m128i_i64[0] = v89;
                memmove(v88, &v74[v75], v77);
                *(_BYTE *)(v121 + v77) = 0;
              }
            }
            else
            {
              v121 = 0;
              v122 = 0;
            }
            v98 = &v121;
            sub_48780((__int64)&v119, &v121);
            if ( v121 )
            {
              v122.m128i_i64[0] = 0;
              qfree();
            }
            v78 = v120;
            v79 = v119;
            LOBYTE(v121) = 0;
            v80 = v120 + 1;
            if ( &v121 < (__int64 *)v119 || &v121 >= (__int64 *)&v119[*((_QWORD *)&v120 + 1)] )
            {
              if ( *((_QWORD *)&v120 + 1) < v80 )
              {
                v119 = (const char *)qvector_reserve();
                v79 = v119;
                v90 = v121;
                v78 = v120;
              }
              else
              {
                v90 = 0;
              }
              v79[v78] = v90;
            }
            else
            {
              if ( *((_QWORD *)&v120 + 1) < v80 )
              {
                v119 = (const char *)qvector_reserve();
                v79 = v119;
                v78 = v120;
              }
              v79[v78] = 0;
            }
            *(_QWORD *)&v120 = v120 + 1;
            sub_140F0((__int64)"gdb>%s\n", v119);
            if ( v119 )
            {
              *(_QWORD *)&v120 = 0;
              qfree();
            }
          }
          goto LABEL_90;
        case 13:
          if ( *(_DWORD *)(a1 + 1360) != 1 )
            *(_DWORD *)(a1 + 1360) = v17 + 2;
          if ( !(_BYTE)v7 )
            goto LABEL_40;
          goto LABEL_77;
        case 14:
          if ( !(_BYTE)v7 )
            goto LABEL_119;
          v35 = v113;
          v36 = v113 + 32 * v114;
          if ( v36 == v113 )
            goto LABEL_75;
          do
          {
            v37 = *(_QWORD *)(a1 + 1304);
            v38 = *(_DWORD *)v35;
            if ( v37 )
            {
              v39 = a1 + 1296;
              do
              {
                while ( 1 )
                {
                  v40 = *(_QWORD *)(v37 + 16);
                  v41 = *(_QWORD *)(v37 + 24);
                  if ( v38 > *(_DWORD *)(v37 + 32) )
                    break;
                  v39 = v37;
                  v37 = *(_QWORD *)(v37 + 16);
                  if ( !v40 )
                    goto LABEL_70;
                }
                v37 = *(_QWORD *)(v37 + 24);
              }
              while ( v41 );
LABEL_70:
              if ( v39 != a1 + 1296 && v38 >= *(_DWORD *)(v39 + 32) )
              {
                v42 = *(_DWORD *)(v39 + 36);
                if ( v42 != -1 )
                  sub_4D680(v18 + 48, v42, *(const void **)(v35 + 8), 0, *(_QWORD *)(v35 + 16));
              }
            }
            v35 += 32;
          }
          while ( v36 != v35 );
LABEL_75:
          if ( *(_DWORD *)(a1 + 1360) != 1 )
            *(_DWORD *)(a1 + 1360) = v17 + 2;
LABEL_77:
          v43 = v111[1];
          v44 = v111[2];
          v45 = v44 - 48;
          if ( (unsigned __int8)(v111[1] - 48) <= 9u )
          {
            v46 = v43 - 48;
            if ( v45 > 9u )
              goto LABEL_81;
          }
          else if ( (unsigned __int8)(v43 - 97) <= 5u )
          {
            v46 = v43 - 87;
            if ( v45 > 9u )
              goto LABEL_81;
          }
          else
          {
            if ( (unsigned __int8)(v43 - 65) > 5u )
              goto LABEL_224;
            v46 = v43 - 55;
            if ( v45 > 9u )
            {
LABEL_81:
              if ( (unsigned __int8)(v44 - 97) <= 5u )
              {
                v47 = v44 - 87;
                goto LABEL_84;
              }
              if ( (unsigned __int8)(v44 - 65) <= 5u )
              {
                v47 = v44 - 55;
LABEL_84:
                v48 = v47 | (16 * v46);
                goto LABEL_85;
              }
LABEL_224:
              v48 = -1;
LABEL_85:
              v124 = -1;
              v126 = 0;
              v123 = 0xFFFFFFFFLL;
              v125 = 0;
              v127 = 0;
              v128 = 0;
              if ( !(unsigned __int8)sub_553A0(
                                       (_DWORD *)a1,
                                       v18,
                                       v48,
                                       (__int64)&v123,
                                       1,
                                       v109,
                                       0.0,
                                       *(double *)a5.m128i_i64,
                                       0.0,
                                       (__m128)0LL) )
                goto LABEL_145;
              v49 = *(_QWORD **)(a1 + 168);
              if ( v49 != (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
              {
                *v49 = 0xFFFFFFFFLL;
                v49[1] = -1;
                v49[2] = 0;
                copy_debug_event();
                *(_QWORD *)(a1 + 168) += 72LL;
LABEL_145:
                free_debug_event();
LABEL_40:
                v21 = 1;
                goto LABEL_15;
              }
LABEL_214:
              sub_587D0((_QWORD *)(a1 + 120));
              goto LABEL_145;
            }
          }
          v47 = v44 - 48;
          goto LABEL_84;
        case 17:
        case 18:
          *(_DWORD *)(a1 + 1360) = 6;
          if ( !(_BYTE)v7 )
            goto LABEL_40;
          v65 = v111[1];
          v66 = v111[2];
          v67 = v66 - 48;
          if ( (unsigned __int8)(v65 - 48) <= 9u )
          {
            v68 = v65 - 48;
            if ( v67 > 9u )
              goto LABEL_138;
          }
          else if ( (unsigned __int8)(v65 - 97) <= 5u )
          {
            v68 = v65 - 87;
            if ( v67 > 9u )
              goto LABEL_138;
          }
          else
          {
            if ( (unsigned __int8)(v65 - 65) > 5u )
              goto LABEL_225;
            v68 = v65 - 55;
            if ( v67 > 9u )
            {
LABEL_138:
              if ( (unsigned __int8)(v66 - 97) <= 5u )
              {
                v69 = v66 - 87;
                goto LABEL_141;
              }
              if ( (unsigned __int8)(v66 - 65) <= 5u )
              {
                v69 = v66 - 55;
LABEL_141:
                v10 = v69 | (unsigned int)(16 * v68);
                goto LABEL_142;
              }
LABEL_225:
              v10 = 0xFFFFFFFFLL;
LABEL_142:
              a3 = -1;
              v7 = &v123;
              v126 = 0;
              v123 = 0xFFFFFFFFLL;
              v124 = -1;
              v125 = 0;
              v127 = 0;
              v128 = 0;
              set_debug_event_code();
              if ( (((HIDWORD(v125) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
              {
                sub_471A0();
                goto LABEL_245;
              }
              v70 = *(_DWORD *)(a1 + 656);
              v71 = *(_QWORD **)(a1 + 168);
              LODWORD(v126) = v10;
              v124 = -1;
              LODWORD(v123) = v70;
              v72 = *(_DWORD *)(a1 + 1364);
              LOBYTE(v125) = 1;
              HIDWORD(v123) = v72;
              if ( v71 != (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
              {
                *v71 = 0xFFFFFFFFLL;
                v71[1] = -1;
                v71[2] = 0;
                copy_debug_event();
                *(_QWORD *)(a1 + 168) += 72LL;
                goto LABEL_145;
              }
              goto LABEL_214;
            }
          }
          v69 = v66 - 48;
          goto LABEL_141;
        default:
          goto LABEL_14;
      }
    }
    LODWORD(v12) = (unsigned __int8)*v111;
    v17 = 0;
    goto LABEL_61;
  }
  LODWORD(v98) = -1;
  v28 = 3;
  v17 = 0;
  v110 = 3;
  v107 = -1;
LABEL_42:
  if ( v28 >= v15 - 1 )
    goto LABEL_55;
  v11 = v10;
  v117 = nullptr;
  v118 = 0;
  if ( !(unsigned __int8)sub_63F40(&v117, v10, &v110, 58) )
    goto LABEL_221;
  v11 = v10;
  v120 = 0;
  v119 = nullptr;
  v29 = sub_63F40(&v119, v10, &v110, 59);
  if ( v29 )
  {
    if ( !(_QWORD)v118 || (v30 = *v117) == 0 )
    {
      v32 = 0;
LABEL_122:
      v60 = v114;
      v61 = v113;
      if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)(v114 + 1) )
      {
        s1b = v32;
        v113 = qvector_reserve();
        v61 = v113;
        v32 = s1b;
        v60 = v114;
      }
      v62 = v61 + 32 * v60;
      v11 = (__int64)&v119;
      *(_QWORD *)(v62 + 8) = 0;
      *(_QWORD *)&v114 = v114 + 1;
      *(_DWORD *)v62 = v32;
      *(_OWORD *)(v62 + 16) = 0;
      s1a = (char *)v62;
      sub_48780((__int64)&v121, &v119);
      v63 = v121;
      v121 = 0;
      a5 = _mm_loadu_si128(&v122);
      v122 = 0;
      if ( *((_QWORD *)s1a + 1) )
      {
        *((_QWORD *)s1a + 2) = 0;
        v105 = v63;
        v108 = a5;
        qfree();
        v64 = v121;
        a5 = _mm_load_si128(&v108);
        *((_QWORD *)s1a + 1) = v105;
        *((__m128i *)s1a + 1) = a5;
        if ( v64 )
        {
          v122.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        *((_QWORD *)s1a + 1) = v63;
        *((__m128i *)s1a + 1) = a5;
      }
LABEL_127:
      v55 = v119;
      goto LABEL_128;
    }
    v31 = v117;
    v32 = 0;
    while ( 1 )
    {
      ++v31;
      if ( (unsigned __int8)(v30 - 48) > 9u )
      {
        if ( (unsigned __int8)(v30 - 97) <= 5u )
        {
          v33 = v30 - 87;
        }
        else
        {
          if ( (unsigned __int8)(v30 - 65) > 5u )
          {
            v104 = v29;
            s1 = v117;
            v54 = strcmp(v117, "thread");
            v12 = v54;
            if ( v54 )
            {
              v11 = (__int64)"library";
              if ( !strcmp(s1, "library") )
              {
                v55 = v119;
                v17 = v104;
                goto LABEL_128;
              }
              v11 = (__int64)"watch";
              if ( !strcmp(s1, "watch")
                || (v11 = (__int64)"awatch", !strcmp(s1, "awatch"))
                || (v11 = (__int64)"rwatch", !strcmp(s1, "rwatch")) )
              {
                v91 = v120;
                v55 = v119;
                if ( (_QWORD)v120 )
                {
                  v92 = *v119;
                  if ( !*v119 )
                  {
                    v91 = 0;
                    goto LABEL_213;
                  }
                  v12 = (__int64)v119;
                  v91 = 0;
                  do
                  {
                    v11 = (unsigned int)(v92 - 48);
                    ++v12;
                    if ( (unsigned __int8)(v92 - 48) > 9u )
                    {
                      v11 = (unsigned int)(v92 - 97);
                      if ( (unsigned __int8)(v92 - 97) <= 5u )
                      {
                        v93 = v92 - 87;
                      }
                      else
                      {
                        v11 = (unsigned int)(v92 - 65);
                        if ( (unsigned __int8)(v92 - 65) > 5u )
                        {
                          v91 = -1;
                          break;
                        }
                        v93 = v92 - 55;
                      }
                    }
                    else
                    {
                      v93 = v92 - 48;
                    }
                    v91 = v93 | (16 * v91);
                    v92 = *(char *)v12;
                  }
                  while ( *(_BYTE *)v12 );
                }
LABEL_213:
                v109 = v91;
                goto LABEL_128;
              }
              v11 = (__int64)"metype";
              if ( !strcmp(s1, "metype") )
              {
                v55 = v119;
                v107 = v120;
                if ( !(_QWORD)v120 )
                  goto LABEL_128;
                v94 = *v119;
                if ( !*v119 )
                {
                  v107 = 0;
                  goto LABEL_128;
                }
                v107 = 0;
                v95 = v119;
                while ( 1 )
                {
                  ++v95;
                  if ( (unsigned __int8)(v94 - 48) > 9u )
                  {
                    if ( (unsigned __int8)(v94 - 97) <= 5u )
                    {
                      v96 = v94 - 87;
                    }
                    else
                    {
                      v12 = (unsigned int)(v94 - 65);
                      if ( (unsigned __int8)(v94 - 65) > 5u )
                      {
                        v107 = -1;
                        goto LABEL_128;
                      }
                      v96 = v94 - 55;
                    }
                  }
                  else
                  {
                    v96 = v94 - 48;
                  }
                  v12 = 16 * v107;
                  v107 = (16 * v107) | v96;
                  v94 = *v95;
                  if ( !*v95 )
                    goto LABEL_128;
                }
              }
              v11 = (__int64)"medata";
              if ( strcmp(s1, "medata") )
                goto LABEL_127;
              v13 = v120;
              if ( (_QWORD)v120 )
              {
                v85 = v119;
                v13 = 0;
                for ( i = *v119; *v85; i = *v85 )
                {
                  v12 = (unsigned int)(i - 48);
                  ++v85;
                  if ( (unsigned __int8)(i - 48) > 9u )
                  {
                    v12 = (unsigned int)(i - 97);
                    if ( (unsigned __int8)(i - 97) <= 5u )
                    {
                      v87 = i - 87;
                    }
                    else
                    {
                      v12 = (unsigned int)(i - 65);
                      if ( (unsigned __int8)(i - 65) > 5u )
                      {
                        v13 = -1;
                        break;
                      }
                      v87 = i - 55;
                    }
                  }
                  else
                  {
                    v87 = i - 48;
                  }
                  v13 = v87 | (16 * v13);
                }
              }
              v97 = v116;
              if ( *((_QWORD *)&v116 + 1) >= (unsigned __int64)(v116 + 1) )
              {
LABEL_239:
                *(_QWORD *)(v115 + 8 * v97) = v13;
                *(_QWORD *)&v116 = v116 + 1;
                goto LABEL_127;
              }
LABEL_245:
              v11 = v115;
              s1d = (char *)v13;
              v115 = qvector_reserve();
              v13 = (unsigned __int64)s1d;
              v97 = v116;
              goto LABEL_239;
            }
            v55 = v119;
            if ( (_QWORD)v120 )
            {
              v11 = *(unsigned __int8 *)v119;
              v56 = v119;
            }
            else
            {
              v11 = (unsigned __int8)byte_9AD48;
              v56 = src;
            }
            v57 = &v56[(_BYTE)v11 == 45];
            for ( j = *v57; *v57; j = *v57 )
            {
              LODWORD(v13) = j - 48;
              ++v57;
              if ( (unsigned __int8)(j - 48) > 9u )
              {
                LODWORD(v13) = j - 97;
                if ( (unsigned __int8)(j - 97) <= 5u )
                {
                  v59 = j - 87;
                }
                else
                {
                  LODWORD(v13) = j - 65;
                  if ( (unsigned __int8)(j - 65) > 5u )
                  {
                    LODWORD(v98) = -1;
                    goto LABEL_128;
                  }
                  v59 = j - 55;
                }
              }
              else
              {
                v59 = j - 48;
              }
              v12 = v59 | (unsigned int)(16 * v12);
            }
            if ( (_BYTE)v11 == 45 )
              v12 = (unsigned int)-(int)v12;
            LODWORD(v98) = v12;
LABEL_128:
            if ( v55 )
            {
              *(_QWORD *)&v120 = 0;
              qfree();
            }
            if ( v117 )
            {
              *(_QWORD *)&v118 = 0;
              qfree();
            }
            v15 = v112;
            if ( !(_QWORD)v112 )
              goto LABEL_55;
            v28 = v110;
            goto LABEL_42;
          }
          v33 = v30 - 55;
        }
      }
      else
      {
        v33 = v30 - 48;
      }
      v32 = v33 | (16 * v32);
      v30 = *v31;
      if ( !*v31 )
        goto LABEL_122;
    }
  }
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree();
  }
LABEL_221:
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    qfree();
  }
LABEL_55:
  v34 = *(void (**)())(*(_QWORD *)a1 + 688LL);
  if ( v34 != nullsub_5 )
  {
    v11 = (__int64)&v109;
    ((void (__fastcall *)(__int64, unsigned __int64 *, __int64, __int64 *))v34)(a1, &v109, v107, &v115);
  }
  if ( !*(_BYTE *)(a1 + 1168) || (v11 = a1 + 1152, !(unsigned __int8)sub_508C0(a1, a1 + 1152, &v113, v12, v13)) )
  {
LABEL_58:
    v15 = v112;
    v18 = 0;
    if ( !a2 )
    {
LABEL_35:
      v16 = &byte_9AD48;
      if ( v15 )
        v16 = v111;
      goto LABEL_37;
    }
    if ( (_QWORD)v112 )
    {
      v16 = v111;
      LODWORD(v12) = (unsigned __int8)*v111;
      if ( (_BYTE)v12 != 84 )
      {
LABEL_61:
        v18 = 0;
        if ( (_BYTE)v12 != 83 )
          goto LABEL_37;
        goto LABEL_32;
      }
      goto LABEL_28;
    }
    v19 = byte_9AD48;
    if ( byte_9AD48 == 84 )
    {
LABEL_28:
      if ( (int)v98 >= 0 )
      {
        if ( !(_DWORD)v98 )
          LODWORD(v98) = -3;
        *(_DWORD *)(a1 + 1364) = (_DWORD)v98;
      }
LABEL_32:
      if ( !*(_BYTE *)(a1 + 1697) )
        sub_59480(a1, v11, v15, v12, v13, v14);
      v27 = sub_50720(a1);
      v15 = v112;
      v18 = v27;
      goto LABEL_35;
    }
LABEL_12:
    if ( v19 != 83 )
    {
      v15 = 0;
      v18 = 0;
      v20 = byte_9AD48 - 70;
      if ( (unsigned __int8)(byte_9AD48 - 70) > 0x12u )
        goto LABEL_14;
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  v84 = sub_54310(a1, (_DWORD *)(a1 + 1152));
  if ( v84 )
  {
    v11 = a1 + 1056;
    if ( (unsigned int)sub_5DC90(a1, a1 + 1056, v81, v82, v83) == 1 )
    {
      if ( *(int *)(a1 + 1152) >= 0 && *(int *)(a1 + 1156) >= 0 )
        v84 = *(int *)(a1 + 1160) < 0;
      *(_BYTE *)(a1 + 1168) = v84;
      goto LABEL_58;
    }
  }
LABEL_14:
  v21 = 0;
LABEL_15:
  if ( v115 )
  {
    *(_QWORD *)&v116 = 0;
    qfree();
  }
  v22 = v113;
  if ( v113 )
  {
    v23 = v114;
    if ( (_QWORD)v114 )
    {
      v24 = 0;
      do
      {
        v25 = v22 + 32 * v24;
        if ( *(_QWORD *)(v25 + 8) )
        {
          *(_QWORD *)(v25 + 16) = 0;
          qfree();
          v22 = v113;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v114 = 0;
    qfree();
  }
LABEL_24:
  if ( v111 )
  {
    *(_QWORD *)&v112 = 0;
    qfree();
  }
  return v21;
}

