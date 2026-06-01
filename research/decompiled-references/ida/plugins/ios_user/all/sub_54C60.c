__int64 __fastcall sub_54C60(__int64 a1, char a2, unsigned int a3, double a4, __m128i a5)
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
  char v29; // dl
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
  const char **v63; // rdx
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
  int v84; // r9d
  char v85; // r13
  const char *v86; // rdx
  int i; // eax
  int v88; // eax
  void *v89; // rdi
  __int64 v90; // rdx
  char v91; // dl
  unsigned __int64 v92; // rdx
  int v93; // eax
  int v94; // eax
  int v95; // eax
  const char *v96; // rdx
  int v97; // eax
  __int64 v98; // rax
  __int64 *v99; // [rsp+0h] [rbp-188h]
  char *s1; // [rsp+8h] [rbp-180h]
  int s1a; // [rsp+8h] [rbp-180h]
  const char **v102; // [rsp+10h] [rbp-178h]
  char *v103; // [rsp+10h] [rbp-178h]
  __int64 v104; // [rsp+18h] [rbp-170h]
  __m128i v105; // [rsp+20h] [rbp-168h] BYREF
  unsigned __int64 v106; // [rsp+30h] [rbp-158h] BYREF
  __int64 v107; // [rsp+38h] [rbp-150h] BYREF
  char *v108; // [rsp+40h] [rbp-148h] BYREF
  __int128 v109; // [rsp+48h] [rbp-140h]
  __int64 v110; // [rsp+58h] [rbp-130h]
  __int64 v111; // [rsp+60h] [rbp-128h] BYREF
  __int128 v112; // [rsp+68h] [rbp-120h]
  __int64 v113; // [rsp+78h] [rbp-110h]
  const char *v114; // [rsp+80h] [rbp-108h] BYREF
  __int128 v115; // [rsp+88h] [rbp-100h]
  int v116; // [rsp+98h] [rbp-F0h]
  char *v117; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v118; // [rsp+A8h] [rbp-E0h]
  int v119; // [rsp+B8h] [rbp-D0h]
  const char *v120; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v121; // [rsp+C8h] [rbp-C0h]
  __int64 v122; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v123; // [rsp+E8h] [rbp-A0h] BYREF
  __int64 v124; // [rsp+100h] [rbp-88h] BYREF
  __int64 v125; // [rsp+108h] [rbp-80h]
  __int64 v126; // [rsp+110h] [rbp-78h]
  __int128 v127; // [rsp+118h] [rbp-70h]
  __int128 v128; // [rsp+128h] [rbp-60h]
  __int128 v129; // [rsp+138h] [rbp-50h]
  unsigned __int64 v130; // [rsp+148h] [rbp-40h]

  LOBYTE(v7) = a2;
  v130 = __readfsqword(0x28u);
  while ( 2 )
  {
    v9 = *(_QWORD *)(a1 + 864);
    v108 = nullptr;
    v109 = 0;
    sub_59210(v9, a3);
    v10 = (__int64)&v108;
    if ( !(unsigned __int8)sub_5ABB0(*(_QWORD *)(a1 + 864), &v108) || (v11 = 0, (unsigned int)sub_59CB0(&v108, 0) != 1) )
    {
      v21 = -*(unsigned __int8 *)(*(_QWORD *)(a1 + 864) + 250LL);
      goto LABEL_24;
    }
    v15 = v109;
    v111 = 0;
    v106 = -1;
    v114 = nullptr;
    v112 = 0;
    v115 = 0;
    if ( !(_QWORD)v109 )
    {
      if ( byte_8FB68 == 84 )
      {
        v107 = 3;
        v17 = 0;
        v104 = -1;
        LODWORD(v99) = -1;
        goto LABEL_55;
      }
      if ( !a2 )
      {
        switch ( byte_8FB68 )
        {
          case 'F':
LABEL_101:
            sub_130A0((__int64)"Host syscalls are not implemented");
            goto LABEL_14;
          case 'O':
LABEL_90:
            if ( v114 )
            {
              *(_QWORD *)&v115 = 0;
              qfree();
            }
            v50 = v111;
            if ( v111 )
            {
              v51 = v112;
              if ( (_QWORD)v112 )
              {
                v52 = 0;
                do
                {
                  v53 = v50 + 32 * v52;
                  if ( *(_QWORD *)(v53 + 8) )
                  {
                    *(_QWORD *)(v53 + 16) = 0;
                    qfree();
                    v50 = v111;
                  }
                  ++v52;
                }
                while ( v51 != v52 );
              }
              *(_QWORD *)&v112 = 0;
              qfree();
            }
            if ( v108 )
            {
              *(_QWORD *)&v109 = 0;
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
      v19 = byte_8FB68;
      v17 = 0;
      if ( byte_8FB68 == 84 )
        goto LABEL_32;
      goto LABEL_12;
    }
    break;
  }
  v16 = v108;
  if ( *v108 != 84 )
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
              v122 = 0;
              v74 = v108;
              v123 = 0;
              v75 = v73 != 0;
              v76 = v73 - v75;
              v77 = v76;
              if ( v76 )
              {
                v89 = nullptr;
                v90 = v76 + 1;
                if ( v90 )
                {
                  v103 = v108;
                  s1 = (char *)v90;
                  v122 = qvector_reserve();
                  v74 = v103;
                  v89 = (void *)v122;
                  v90 = (__int64)s1;
                }
                v123.m128i_i64[0] = v90;
                memmove(v89, &v74[v75], v77);
                *(_BYTE *)(v122 + v77) = 0;
              }
            }
            else
            {
              v122 = 0;
              v123 = 0;
            }
            v99 = &v122;
            v102 = &v120;
            sub_3E320((__int64)&v120, &v122);
            if ( v122 )
            {
              v123.m128i_i64[0] = 0;
              qfree();
            }
            v78 = v121;
            v79 = v120;
            LOBYTE(v122) = 0;
            v80 = v121 + 1;
            if ( &v122 < (__int64 *)v120 || &v122 >= (__int64 *)&v120[*((_QWORD *)&v121 + 1)] )
            {
              if ( *((_QWORD *)&v121 + 1) < v80 )
              {
                v120 = (const char *)qvector_reserve();
                v79 = v120;
                v91 = v122;
                v78 = v121;
              }
              else
              {
                v91 = 0;
              }
              v79[v78] = v91;
            }
            else
            {
              if ( *((_QWORD *)&v121 + 1) < v80 )
              {
                v120 = (const char *)qvector_reserve();
                v79 = v120;
                v78 = v121;
              }
              v79[v78] = 0;
            }
            *(_QWORD *)&v121 = v121 + 1;
            sub_13170((__int64)"gdb>%s\n", v120);
            if ( v120 )
            {
              *(_QWORD *)&v121 = 0;
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
          v35 = v111;
          v36 = v111 + 32 * v112;
          if ( v36 == v111 )
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
                  sub_42940(v18 + 48, v42, *(const void **)(v35 + 8), 0, *(_QWORD *)(v35 + 16));
              }
            }
            v35 += 32;
          }
          while ( v36 != v35 );
LABEL_75:
          if ( *(_DWORD *)(a1 + 1360) != 1 )
            *(_DWORD *)(a1 + 1360) = v17 + 2;
LABEL_77:
          v43 = v108[1];
          v44 = v108[2];
          v45 = v44 - 48;
          if ( (unsigned __int8)(v108[1] - 48) <= 9u )
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
              v125 = -1;
              v127 = 0;
              v124 = 0xFFFFFFFFLL;
              v126 = 0;
              v128 = 0;
              v129 = 0;
              if ( !(unsigned __int8)sub_4A5E0(
                                       (_DWORD *)a1,
                                       v18,
                                       v48,
                                       (__int64)&v124,
                                       1,
                                       v106,
                                       0.0,
                                       *(double *)a5.m128i_i64,
                                       0.0,
                                       (__m128)0LL,
                                       (int)v99,
                                       (int)s1,
                                       (int)v102,
                                       v104,
                                       v105.m128i_i32[0],
                                       v105.m128i_i32[2],
                                       v106,
                                       v107,
                                       (int)v108,
                                       v109,
                                       SDWORD2(v109),
                                       v110,
                                       v111,
                                       v112,
                                       SDWORD2(v112),
                                       v113,
                                       (__int64)v114,
                                       v115,
                                       SDWORD2(v115),
                                       v116,
                                       (int)v117,
                                       v118,
                                       SDWORD2(v118),
                                       v119,
                                       (__int64)v120) )
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
              sub_4D910((_QWORD *)(a1 + 120));
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
          v65 = v108[1];
          v66 = v108[2];
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
              v7 = &v124;
              v127 = 0;
              v124 = 0xFFFFFFFFLL;
              v125 = -1;
              v126 = 0;
              v128 = 0;
              v129 = 0;
              set_debug_event_code();
              if ( (((HIDWORD(v126) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
              {
                sub_3CEA0();
                goto LABEL_245;
              }
              v70 = *(_DWORD *)(a1 + 656);
              v71 = *(_QWORD **)(a1 + 168);
              LODWORD(v127) = v10;
              v125 = -1;
              LODWORD(v124) = v70;
              v72 = *(_DWORD *)(a1 + 1364);
              LOBYTE(v126) = 1;
              HIDWORD(v124) = v72;
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
    LODWORD(v12) = (unsigned __int8)*v108;
    v17 = 0;
    goto LABEL_61;
  }
  LODWORD(v99) = -1;
  v28 = 3;
  v17 = 0;
  v107 = 3;
  v104 = -1;
LABEL_42:
  if ( v28 >= v15 - 1 )
    goto LABEL_55;
  v11 = v10;
  s1 = (char *)&v107;
  v117 = nullptr;
  v118 = 0;
  if ( !(unsigned __int8)sub_593F0(&v117, v10, &v107, 58) )
    goto LABEL_221;
  v11 = v10;
  v121 = 0;
  v120 = nullptr;
  v102 = &v120;
  v29 = sub_593F0(&v120, v10, &v107, 59);
  if ( v29 )
  {
    if ( !(_QWORD)v118 || (v30 = *v117) == 0 )
    {
      v32 = 0;
LABEL_122:
      v60 = v112;
      v61 = v111;
      if ( *((_QWORD *)&v112 + 1) < (unsigned __int64)(v112 + 1) )
      {
        s1a = v32;
        v111 = qvector_reserve();
        v61 = v111;
        v32 = s1a;
        v60 = v112;
      }
      v62 = v61 + 32 * v60;
      v11 = (__int64)&v120;
      *(_QWORD *)(v62 + 8) = 0;
      *(_QWORD *)&v112 = v112 + 1;
      *(_DWORD *)v62 = v32;
      *(_OWORD *)(v62 + 16) = 0;
      s1 = (char *)v62;
      sub_3E320((__int64)&v122, &v120);
      v63 = (const char **)v122;
      v122 = 0;
      a5 = _mm_loadu_si128(&v123);
      v123 = 0;
      if ( *((_QWORD *)s1 + 1) )
      {
        *((_QWORD *)s1 + 2) = 0;
        v102 = v63;
        v105 = a5;
        qfree();
        v64 = v122;
        a5 = _mm_load_si128(&v105);
        *((_QWORD *)s1 + 1) = v102;
        *((__m128i *)s1 + 1) = a5;
        if ( v64 )
        {
          v123.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        *((_QWORD *)s1 + 1) = v63;
        *((__m128i *)s1 + 1) = a5;
      }
LABEL_127:
      v55 = v120;
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
            LOBYTE(v102) = v29;
            s1 = v117;
            v54 = strcmp(v117, "thread");
            v12 = v54;
            if ( v54 )
            {
              v11 = (__int64)"library";
              if ( !strcmp(s1, "library") )
              {
                v55 = v120;
                v17 = (unsigned __int8)v102;
                goto LABEL_128;
              }
              v11 = (__int64)"watch";
              if ( !strcmp(s1, "watch")
                || (v11 = (__int64)"awatch", !strcmp(s1, "awatch"))
                || (v11 = (__int64)"rwatch", !strcmp(s1, "rwatch")) )
              {
                v92 = v121;
                v55 = v120;
                if ( (_QWORD)v121 )
                {
                  v93 = *v120;
                  if ( !*v120 )
                  {
                    v92 = 0;
                    goto LABEL_213;
                  }
                  v12 = (__int64)v120;
                  v92 = 0;
                  do
                  {
                    v11 = (unsigned int)(v93 - 48);
                    ++v12;
                    if ( (unsigned __int8)(v93 - 48) > 9u )
                    {
                      v11 = (unsigned int)(v93 - 97);
                      if ( (unsigned __int8)(v93 - 97) <= 5u )
                      {
                        v94 = v93 - 87;
                      }
                      else
                      {
                        v11 = (unsigned int)(v93 - 65);
                        if ( (unsigned __int8)(v93 - 65) > 5u )
                        {
                          v92 = -1;
                          break;
                        }
                        v94 = v93 - 55;
                      }
                    }
                    else
                    {
                      v94 = v93 - 48;
                    }
                    v92 = v94 | (16 * v92);
                    v93 = *(char *)v12;
                  }
                  while ( *(_BYTE *)v12 );
                }
LABEL_213:
                v106 = v92;
                goto LABEL_128;
              }
              v11 = (__int64)"metype";
              if ( !strcmp(s1, "metype") )
              {
                v55 = v120;
                v104 = v121;
                if ( !(_QWORD)v121 )
                  goto LABEL_128;
                v95 = *v120;
                if ( !*v120 )
                {
                  v104 = 0;
                  goto LABEL_128;
                }
                v104 = 0;
                v96 = v120;
                while ( 1 )
                {
                  ++v96;
                  if ( (unsigned __int8)(v95 - 48) > 9u )
                  {
                    if ( (unsigned __int8)(v95 - 97) <= 5u )
                    {
                      v97 = v95 - 87;
                    }
                    else
                    {
                      v12 = (unsigned int)(v95 - 65);
                      if ( (unsigned __int8)(v95 - 65) > 5u )
                      {
                        v104 = -1;
                        goto LABEL_128;
                      }
                      v97 = v95 - 55;
                    }
                  }
                  else
                  {
                    v97 = v95 - 48;
                  }
                  v12 = 16 * v104;
                  v104 = (16 * v104) | v97;
                  v95 = *v96;
                  if ( !*v96 )
                    goto LABEL_128;
                }
              }
              v11 = (__int64)"medata";
              if ( strcmp(s1, "medata") )
                goto LABEL_127;
              v13 = v121;
              if ( (_QWORD)v121 )
              {
                v86 = v120;
                v13 = 0;
                for ( i = *v120; *v86; i = *v86 )
                {
                  v12 = (unsigned int)(i - 48);
                  ++v86;
                  if ( (unsigned __int8)(i - 48) > 9u )
                  {
                    v12 = (unsigned int)(i - 97);
                    if ( (unsigned __int8)(i - 97) <= 5u )
                    {
                      v88 = i - 87;
                    }
                    else
                    {
                      v12 = (unsigned int)(i - 65);
                      if ( (unsigned __int8)(i - 65) > 5u )
                      {
                        v13 = -1;
                        break;
                      }
                      v88 = i - 55;
                    }
                  }
                  else
                  {
                    v88 = i - 48;
                  }
                  v13 = v88 | (16 * v13);
                }
              }
              v98 = v115;
              if ( *((_QWORD *)&v115 + 1) >= (unsigned __int64)(v115 + 1) )
              {
LABEL_239:
                *(_QWORD *)&v114[8 * v98] = v13;
                *(_QWORD *)&v115 = v115 + 1;
                goto LABEL_127;
              }
LABEL_245:
              v11 = (__int64)v114;
              s1 = (char *)v13;
              v114 = (const char *)qvector_reserve();
              v13 = (unsigned __int64)s1;
              v98 = v115;
              goto LABEL_239;
            }
            v55 = v120;
            if ( (_QWORD)v121 )
            {
              v11 = *(unsigned __int8 *)v120;
              v56 = v120;
            }
            else
            {
              v11 = (unsigned __int8)byte_8FB68;
              v56 = s;
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
                    LODWORD(v99) = -1;
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
            LODWORD(v99) = v12;
LABEL_128:
            if ( v55 )
            {
              *(_QWORD *)&v121 = 0;
              qfree();
            }
            if ( v117 )
            {
              *(_QWORD *)&v118 = 0;
              qfree();
            }
            v15 = v109;
            if ( !(_QWORD)v109 )
              goto LABEL_55;
            v28 = v107;
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
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
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
  if ( v34 != nullsub_23 )
  {
    v11 = (__int64)&v106;
    ((void (__fastcall *)(__int64, unsigned __int64 *, __int64, const char **))v34)(a1, &v106, v104, &v114);
  }
  if ( !*(_BYTE *)(a1 + 1168) || (v11 = a1 + 1152, !(unsigned __int8)sub_45C00(a1, a1 + 1152, &v111, v12, v13, v14)) )
  {
LABEL_58:
    v15 = v109;
    v18 = 0;
    if ( !a2 )
    {
LABEL_35:
      v16 = &byte_8FB68;
      if ( v15 )
        v16 = v108;
      goto LABEL_37;
    }
    if ( (_QWORD)v109 )
    {
      v16 = v108;
      LODWORD(v12) = (unsigned __int8)*v108;
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
    v19 = byte_8FB68;
    if ( byte_8FB68 == 84 )
    {
LABEL_28:
      if ( (int)v99 >= 0 )
      {
        if ( !(_DWORD)v99 )
          LODWORD(v99) = -3;
        *(_DWORD *)(a1 + 1364) = (_DWORD)v99;
      }
LABEL_32:
      if ( !*(_BYTE *)(a1 + 1697) )
        sub_4E5C0(a1, v11, v15, v12, v13, v14);
      v27 = sub_45A40(a1);
      v15 = v109;
      v18 = v27;
      goto LABEL_35;
    }
LABEL_12:
    if ( v19 != 83 )
    {
      v15 = 0;
      v18 = 0;
      v20 = byte_8FB68 - 70;
      if ( (unsigned __int8)(byte_8FB68 - 70) > 0x12u )
        goto LABEL_14;
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  v85 = sub_49650(a1, (_DWORD *)(a1 + 1152));
  if ( v85 )
  {
    v11 = a1 + 1056;
    if ( (unsigned int)sub_52DD0(a1, a1 + 1056, v81, v82, v83, v84) == 1 )
    {
      if ( *(int *)(a1 + 1152) >= 0 && *(int *)(a1 + 1156) >= 0 )
        v85 = *(int *)(a1 + 1160) < 0;
      *(_BYTE *)(a1 + 1168) = v85;
      goto LABEL_58;
    }
  }
LABEL_14:
  v21 = 0;
LABEL_15:
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree();
  }
  v22 = v111;
  if ( v111 )
  {
    v23 = v112;
    if ( (_QWORD)v112 )
    {
      v24 = 0;
      do
      {
        v25 = v22 + 32 * v24;
        if ( *(_QWORD *)(v25 + 8) )
        {
          *(_QWORD *)(v25 + 16) = 0;
          qfree();
          v22 = v111;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v112 = 0;
    qfree();
  }
LABEL_24:
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    qfree();
  }
  return v21;
}

