__int64 __fastcall sub_20F230(__int64 a1, const char *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rbx
  int v9; // eax
  __int64 v11; // rax
  __int64 tinfo_property; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  size_t v15; // r12
  bool v16; // r14
  char *v17; // r15
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // rdx
  const char *v21; // rsi
  char *v22; // rdi
  char v23; // r15
  unsigned int v24; // r12d
  __int64 v26; // r12
  int v27; // eax
  _BYTE *v28; // rax
  char v29; // dl
  _BYTE *v30; // rax
  __int64 v31; // rsi
  const char *v32; // rcx
  __int64 *v33; // r14
  __int64 v34; // r12
  __int64 j; // rdx
  char v36; // al
  bool v37; // r15
  __int64 v38; // r12
  unsigned __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // rsi
  int v42; // eax
  int tinfo_size; // eax
  const char *v44; // rsi
  size_t v45; // r12
  __int64 v46; // r13
  unsigned __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  __int64 v52; // rbx
  size_t v53; // r12
  __int64 v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rax
  char v57; // di
  int v58; // r12d
  bool v59; // al
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // r13
  __int64 v65; // rsi
  __int64 v66; // rax
  char *v67; // rdi
  char v68; // al
  char *v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // r12
  unsigned __int64 v73; // r13
  __int64 v74; // rsi
  unsigned int v75; // edi
  __int64 v76; // rax
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // r13
  __int64 v82; // rax
  const void *v83; // r14
  char *v84; // r12
  __int64 v85; // rax
  char *v86; // rdi
  const void *v87; // r12
  __int64 v88; // rdx
  char *v89; // rsi
  char *v90; // rdx
  const char *v91; // rdi
  int v92; // eax
  __int64 v93; // [rsp+8h] [rbp-168h]
  const char *v94; // [rsp+8h] [rbp-168h]
  char *s; // [rsp+10h] [rbp-160h]
  char *sa; // [rsp+10h] [rbp-160h]
  __int64 v98; // [rsp+28h] [rbp-148h] BYREF
  char *endptr[2]; // [rsp+30h] [rbp-140h] BYREF
  char *v100; // [rsp+40h] [rbp-130h] BYREF
  __int128 v101; // [rsp+48h] [rbp-128h]
  char *s1; // [rsp+60h] [rbp-110h] BYREF
  __int64 v103; // [rsp+68h] [rbp-108h]
  __int64 v104; // [rsp+80h] [rbp-F0h]
  __int128 v105; // [rsp+88h] [rbp-E8h]
  _BYTE v106[24]; // [rsp+A0h] [rbp-D0h] BYREF
  __m128i v107; // [rsp+B8h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-A8h]
  __int128 v109; // [rsp+D0h] [rbp-A0h]
  __int128 v110[3]; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v111; // [rsp+110h] [rbp-60h]
  int v112; // [rsp+118h] [rbp-58h]
  __int64 v113; // [rsp+120h] [rbp-50h]
  char v114; // [rsp+128h] [rbp-48h]
  unsigned __int64 i; // [rsp+138h] [rbp-38h]

  v8 = a4;
  v9 = *(_DWORD *)(a4 + 8);
  for ( i = __readfsqword(0x28u); v9 == 48; v9 = *(_DWORD *)(v8 + 8) )
    v8 = *(_QWORD *)(v8 + 24);
  switch ( v9 )
  {
    case '4':
      if ( !(unsigned __int8)sub_20F230(a1, a2, a3, *(_QWORD *)(v8 + 24), a5 | 1) )
        return 0;
      if ( !a1 )
        return 1;
      if ( !sub_20CA50((__int64 *)a1) )
        return 0;
      v49 = *(_QWORD *)(a1 + 8);
      v50 = *(_QWORD *)a1;
      v51 = *(_QWORD *)(a1 + 16);
      if ( v49 )
      {
        v52 = v49 + 2;
        v53 = v49 - 1;
        v54 = v49 + 1;
        if ( v51 >= v49 + 2 )
          goto LABEL_94;
      }
      else
      {
        if ( v51 > 2 )
        {
          *(_QWORD *)(a1 + 8) = 3;
          *(_BYTE *)(v50 + 2) = 0;
LABEL_96:
          **(_WORD **)a1 = 24432;
          return 1;
        }
        v53 = 0;
        v52 = 3;
        v54 = 2;
      }
      v82 = qvector_reserve(a1, v50, v52, 1);
      *(_QWORD *)a1 = v82;
      v50 = v82;
LABEL_94:
      *(_QWORD *)(a1 + 8) = v52;
      *(_BYTE *)(v50 + v54) = 0;
      if ( v53 )
        memmove((void *)(*(_QWORD *)a1 + 2LL), *(const void **)a1, v53);
      goto LABEL_96;
    case '9':
      memset(v106, 0, sizeof(v106));
      v31 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v31 + 8) != 68 )
        goto LABEL_50;
      if ( *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL) != 1 )
        goto LABEL_50;
      v94 = (const char *)((**(_BYTE **)(v31 + 24) == 83) + *(_QWORD *)(v31 + 24));
      v31 = *(_QWORD *)(v8 + 24);
      if ( (int)strlen(v94) <= 5 )
        goto LABEL_50;
      v42 = *(unsigned __int8 *)v94;
      if ( v42 == 76 && v94[1] == 79 )
      {
        s = "_low";
      }
      else
      {
        if ( v42 != 72 || v94[1] != 73 )
          goto LABEL_50;
        s = "_high";
      }
      tinfo_size = get_tinfo_size();
      if ( tinfo_size > 4 || (tinfo_size & (tinfo_size - 1)) != 0 )
        goto LABEL_152;
      v44 = "BYTE";
      if ( tinfo_size != 1 )
      {
        v44 = "DWORD";
        if ( tinfo_size == 2 )
          v44 = "WORD";
      }
      if ( strcmp(v94 + 2, v44) || !(unsigned __int8)sub_20F230(a1, a2, a3, **(_QWORD **)(v8 + 32), a5) )
      {
LABEL_152:
        v31 = *(_QWORD *)(v8 + 24);
LABEL_50:
        if ( (unsigned __int8)sub_20CED0((__int64 *)v106, v31)
          && (unsigned __int8)sub_20DD40((__int64 *)a1, (__int64)v106, v8) )
        {
          goto LABEL_60;
        }
        if ( a4 != v8 )
          goto LABEL_55;
        v32 = ::s1;
        if ( *(_QWORD *)&v106[8] )
          v32 = *(const char **)v106;
        if ( (unsigned __int8)sub_20D2E0(a1, (__int64)a2, (__int64 *)(v8 + 48), v32, a5) )
        {
LABEL_60:
          v24 = 1;
          v37 = a1 == 0;
        }
        else
        {
LABEL_55:
          if ( (a5 & 0x10) == 0 )
          {
            if ( *(_QWORD *)v106 )
            {
              *(_QWORD *)&v106[8] = 0;
              qfree(*(__int64 *)v106);
            }
            return 0;
          }
          v33 = *(__int64 **)(v8 + 32);
          v34 = *v33;
          for ( j = *v33; v34 != j + 72 * v33[1]; j = *v33 )
          {
            v36 = sub_20E840(a1, *((_QWORD *)a2 + 188), v34);
            v34 += 72;
            if ( v36 )
              goto LABEL_60;
          }
          v37 = 1;
          v24 = 0;
        }
        if ( *(_QWORD *)v106 )
        {
          *(_QWORD *)&v106[8] = 0;
          qfree(*(__int64 *)v106);
        }
        goto LABEL_104;
      }
      if ( !a1 )
        return 1;
      v45 = strlen(s);
      v46 = (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
      v47 = v45 + (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) < v47 )
        *(_QWORD *)a1 = qvector_reserve(a1, *(_QWORD *)a1, v47, 1);
      v48 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 8) = v47;
      *(_BYTE *)(v48 + v45 + v46) = 0;
      qmemcpy((void *)(*(_QWORD *)a1 + v46), s, (unsigned int)v45);
      if ( *(_QWORD *)v106 )
      {
        *(_QWORD *)&v106[8] = 0;
        qfree(*(__int64 *)v106);
      }
LABEL_105:
      if ( *(_QWORD *)(a1 + 8) <= 1u )
        return 0;
      v55 = *(_QWORD *)a1;
      v56 = *(_QWORD *)a1;
      if ( **(_BYTE **)a1 != 95 )
        goto LABEL_120;
      do
        v57 = *(_BYTE *)++v56;
      while ( v57 == 95 );
      if ( v55 == v56 )
        goto LABEL_120;
      v58 = v56 - v55;
      v59 = sub_32E500(v57);
      v60 = *(_QWORD *)(a1 + 8);
      if ( v59 )
      {
        if ( v60 )
        {
          v70 = v58;
          v71 = v60 - 1;
          if ( v60 != 1 )
          {
            if ( v58 )
            {
              v72 = 1;
              v73 = 0;
              if ( v70 < v71 )
              {
                v73 = v71 - v70;
                v72 = v60 - v70;
                memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + v70), v71 - v70);
              }
              v74 = *(_QWORD *)a1;
              if ( *(_QWORD *)(a1 + 16) < v72 )
              {
                v79 = qvector_reserve(a1, v74, v72, 1);
                *(_QWORD *)a1 = v79;
                v74 = v79;
              }
              *(_QWORD *)(a1 + 8) = v72;
              *(_BYTE *)(v74 + v73) = 0;
            }
          }
        }
        goto LABEL_120;
      }
      if ( !v60 )
        return 0;
      v61 = v58 - 1;
      v62 = v60 - 1;
      if ( v60 != 1 && v58 != 1 )
      {
        v63 = 1;
        v64 = 0;
        if ( v61 < v62 )
        {
          v64 = v62 - v61;
          v63 = v60 - v61;
          memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + v61), v62 - v61);
        }
        v65 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v63 )
        {
          v80 = qvector_reserve(a1, v65, v63, 1);
          *(_QWORD *)a1 = v80;
          v65 = v80;
        }
        *(_QWORD *)(a1 + 8) = v63;
        *(_BYTE *)(v65 + v64) = 0;
        v66 = *(_QWORD *)(a1 + 8);
        if ( !v66 )
          return 0;
        v62 = v66 - 1;
      }
      if ( v62 <= 2 )
        return 0;
LABEL_120:
      if ( *(_DWORD *)(v8 + 8) != 64 && !sub_20CA50((__int64 *)a1) )
        return 0;
      v67 = *(char **)a1;
      if ( **(_BYTE **)a1 == 118 )
      {
        v68 = v67[1];
        if ( v68 )
        {
          v69 = v67 + 1;
          while ( (unsigned __int8)(v68 - 48) <= 9u )
          {
            v68 = *++v69;
            if ( !v68 )
              return 0;
          }
        }
      }
      return sub_32E490(v67);
    case ';':
    case '<':
      v11 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v11 + 8) == 65 && *(_DWORD *)(v11 + 32) == a3 )
        return 0;
      v98 = 0;
      tinfo_property = get_tinfo_property();
      v114 = 0;
      v108 = 0;
      v111 = 1;
      v112 = -1;
      v113 = 0;
      memset(v106, 0, sizeof(v106));
      v107 = 0;
      v109 = 0;
      v110[0] = 0;
      v13 = *(unsigned int *)(v8 + 32);
      v98 = tinfo_property;
      if ( (int)sub_263270((__int128 *)v106, (__int64)&v98, v13, 0) <= 0 )
        goto LABEL_98;
      if ( (a5 & 0x200) != 0 )
        goto LABEL_141;
      v14 = v107.m128i_i64[0];
      if ( v107.m128i_i64[0] > 1uLL )
      {
        v75 = *(char *)(*(_QWORD *)&v106[16] + v107.m128i_i64[0] - 2);
        v93 = *(_QWORD *)&v106[16];
        if ( v75 > 0x7F || !isxdigit(v75) )
          goto LABEL_141;
      }
      else
      {
        if ( !isxdigit(0) )
          goto LABEL_141;
        if ( !v14 )
        {
          LODWORD(v15) = -1;
          v93 = *(_QWORD *)&v106[16];
LABEL_12:
          v16 = v14 != 0;
          v17 = (char *)(v93 + (int)v15 - 1);
          while ( (int)v15 > 0 )
          {
            if ( (_DWORD)v15 == 1 && !v16 )
            {
              LODWORD(v15) = isxdigit(0) == 0;
              break;
            }
            v18 = *v17;
            if ( v18 > 0x7F )
              break;
            --v17;
            if ( !isxdigit(v18) )
              break;
            LODWORD(v15) = v15 - 1;
          }
          v15 = (int)v15;
          v19 = strtol((const char *)((int)v15 + v93), endptr, 16);
          v20 = *(_QWORD *)v106 >> 3;
          if ( v19 == *(_QWORD *)v106 >> 3 && !*endptr[0] )
          {
            if ( !v107.m128i_i64[0] )
            {
              v100 = nullptr;
              v101 = 0;
              goto LABEL_21;
            }
            v100 = nullptr;
            v83 = *(const void **)&v106[16];
            v101 = 0;
            if ( v107.m128i_i64[0] - 1 <= (unsigned __int64)(int)v15 )
              v15 = v107.m128i_i64[0] - 1;
            if ( v15 )
            {
              v100 = (char *)qvector_reserve((__int64)&v100, 0, v15 + 1, 1);
              *(_QWORD *)&v101 = v15 + 1;
              memmove(v100, v83, v15);
              v100[v15] = 0;
              if ( (_QWORD)v101 )
              {
                v84 = v100;
                if ( !strcmp(v100, "field_") )
                {
                  if ( !v84 )
                    goto LABEL_98;
                  goto LABEL_173;
                }
                if ( !strcmp(v84, "field_0x") || !strcmp(v84, "gap") )
                {
                  if ( !v84 )
                    goto LABEL_98;
LABEL_173:
                  *(_QWORD *)&v101 = 0;
                  qfree((__int64)v84);
                  goto LABEL_98;
                }
              }
              v20 = *(_QWORD *)v106 >> 3;
            }
LABEL_21:
            sub_32BAA0((__int64)&s1, (__int64)v110, v20);
            if ( v107.m128i_i64[0] )
            {
              v21 = *(const char **)&v106[16];
              v22 = (char *)::s1;
              if ( !v103 )
                goto LABEL_24;
            }
            else
            {
              v21 = ::s1;
              if ( !v103 )
                goto LABEL_178;
            }
            v22 = s1;
LABEL_24:
            if ( strcmp(v22, v21) )
            {
              endptr[1] = nullptr;
              copy_tinfo_t();
              while ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
              {
                v104 = 0;
                v104 = get_tinfo_property();
                copy_tinfo_t();
                clear_tinfo_t();
              }
              if ( (get_tinfo_property() & 0x2F) == 0xD )
              {
LABEL_29:
                v23 = 0;
                goto LABEL_30;
              }
              set_tinfo_property();
              v104 = 0;
              v105 = 0;
              v23 = print_tinfo();
              if ( !v23 )
              {
                v88 = v104;
                goto LABEL_191;
              }
              if ( (_QWORD)v101 )
              {
                v89 = v100;
                if ( !(_QWORD)v105 )
                {
                  v90 = (char *)v104;
                  v91 = ::s1;
                  goto LABEL_197;
                }
              }
              else
              {
                if ( !(_QWORD)v105 )
                {
                  v88 = v104;
                  goto LABEL_198;
                }
                v89 = (char *)::s1;
              }
              v90 = (char *)v104;
              v91 = (const char *)v104;
LABEL_197:
              sa = v90;
              v92 = strcmp(v91, v89);
              v88 = (__int64)sa;
              if ( v92 )
              {
LABEL_191:
                if ( v88 )
                {
                  *(_QWORD *)&v105 = 0;
                  qfree(v88);
                }
                goto LABEL_29;
              }
LABEL_198:
              if ( v88 )
              {
                *(_QWORD *)&v105 = 0;
                qfree(v88);
              }
LABEL_30:
              clear_tinfo_t();
              if ( s1 )
              {
                v103 = 0;
                qfree((__int64)s1);
              }
              if ( v100 )
              {
                *(_QWORD *)&v101 = 0;
                qfree((__int64)v100);
              }
              if ( !v23 )
                goto LABEL_141;
LABEL_98:
              v37 = 1;
              v24 = 0;
              goto LABEL_99;
            }
LABEL_178:
            if ( s1 )
            {
              v103 = 0;
              qfree((__int64)s1);
              v86 = v100;
              if ( !v100 )
                goto LABEL_98;
            }
            else
            {
              v86 = v100;
              if ( !v100 )
                goto LABEL_98;
            }
            *(_QWORD *)&v101 = 0;
            qfree((__int64)v86);
            goto LABEL_98;
          }
LABEL_141:
          if ( a1 )
          {
            v76 = *(_QWORD *)a1;
            v77 = _mm_loadu_si128((const __m128i *)(a1 + 8));
            v78 = _mm_loadu_si128(&v107);
            *(_QWORD *)a1 = *(_QWORD *)&v106[16];
            *(_QWORD *)&v106[16] = v76;
            *(__m128i *)(a1 + 8) = v78;
            v107 = v77;
          }
          v24 = 1;
          v37 = a1 == 0;
LABEL_99:
          clear_tinfo_t();
          if ( v108 )
          {
            *(_QWORD *)&v109 = 0;
            qfree(v108);
          }
          if ( *(_QWORD *)&v106[16] )
          {
            v107.m128i_i64[0] = 0;
            qfree(*(__int64 *)&v106[16]);
          }
          clear_tinfo_t();
LABEL_104:
          if ( v37 )
            return v24;
          goto LABEL_105;
        }
        v93 = *(_QWORD *)&v106[16];
      }
      LODWORD(v15) = v14 - 2;
      goto LABEL_12;
    case '@':
      if ( (a5 & 0x10) != 0 && (unsigned __int8)sub_20E840(a1, *((_QWORD *)a2 + 188), v8) )
      {
        if ( a1 )
          goto LABEL_105;
        return 1;
      }
      if ( (a5 & 2) == 0 || (get_flags_ex() & 0x4000) == 0 || !(unsigned __int8)sub_20CED0((__int64 *)a1, v8) )
        return 0;
      if ( !a1 )
        return 1;
      v38 = *(_QWORD *)(a1 + 8);
      if ( v38 )
      {
        v39 = v38 + 1;
        v40 = *(_QWORD *)(a1 + 8);
        --v38;
      }
      else
      {
        v40 = 1;
        v39 = 2;
      }
      v41 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v39 )
      {
        v85 = qvector_reserve(a1, v41, v39, 1);
        *(_QWORD *)a1 = v85;
        v41 = v85;
      }
      *(_QWORD *)(a1 + 8) = v39;
      *(_BYTE *)(v41 + v38) = 95;
      *(_BYTE *)(*(_QWORD *)a1 + v40) = 0;
      goto LABEL_105;
    case 'A':
      if ( (a5 & 1) == 0 )
        return 0;
      v26 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32);
      v27 = *(_DWORD *)(v26 + 24);
      if ( (v27 & 4) == 0 )
        return 0;
      if ( (v27 & 0x100) != 0 )
      {
        if ( (unsigned __int8)sub_20D980(*((_DWORD **)a2 + 188), v26 + 32, *(_DWORD *)(v26 + 88)) )
          return 0;
      }
      else if ( *(_QWORD *)(v26 + 40) )
      {
        v28 = *(_BYTE **)(v26 + 32);
        if ( *v28 == 118 )
        {
          v29 = v28[1];
          if ( v29 )
          {
            v30 = v28 + 1;
            while ( (unsigned __int8)(v29 - 48) <= 9u )
            {
              v29 = *++v30;
              if ( !v29 )
                return 0;
            }
          }
        }
      }
      if ( !a1 )
        return 1;
      if ( a1 == v26 + 32 )
        goto LABEL_105;
      v81 = *(_QWORD *)(v26 + 40);
      if ( v81 <= 1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        return 0;
      }
      v87 = *(const void **)(v26 + 32);
      if ( *(_QWORD *)(a1 + 16) < v81 )
        *(_QWORD *)a1 = qvector_reserve(a1, *(_QWORD *)a1, v81, 1);
      *(_QWORD *)(a1 + 8) = v81;
      memmove(*(void **)a1, v87, v81 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v81 - 1) = 0;
      goto LABEL_105;
    default:
      return 0;
  }
}

