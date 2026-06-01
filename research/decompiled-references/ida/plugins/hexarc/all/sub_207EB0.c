__int64 __fastcall sub_207EB0(__int64 a1, const char *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r13
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
  char *v20; // rdi
  char v21; // r15
  unsigned int v22; // r12d
  __int64 v24; // r12
  int v25; // eax
  _BYTE *v26; // rax
  char v27; // dl
  _BYTE *v28; // rax
  const char *v29; // rcx
  __int64 *v30; // r14
  __int64 v31; // r12
  __int64 j; // rdx
  char v33; // al
  bool v34; // r15
  __int64 v35; // r12
  unsigned __int64 v36; // r13
  __int64 v37; // r14
  int v38; // eax
  int tinfo_size; // eax
  const char *v40; // rsi
  size_t v41; // r12
  __int64 v42; // r13
  size_t v43; // r14
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rsi
  unsigned __int64 v47; // rdx
  __int64 v48; // rbx
  size_t v49; // r12
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdi
  int v54; // r12d
  char v55; // al
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // r13
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdi
  char v64; // al
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // r12
  unsigned __int64 v69; // r13
  __int64 v70; // rsi
  unsigned int v71; // edi
  __int64 v72; // rax
  __m128i v73; // xmm0
  __m128i v74; // xmm1
  __int64 v75; // rax
  __int64 v76; // rax
  _DWORD *v77; // rdi
  unsigned __int64 v78; // r13
  __int64 v79; // rax
  const void *v80; // r14
  char *v81; // r12
  __int64 v82; // rax
  const char *v83; // r12
  __int64 v84; // rdx
  char *v85; // rdx
  const char *v86; // rdi
  int v87; // eax
  __int64 v88; // [rsp+8h] [rbp-168h]
  const char *v89; // [rsp+8h] [rbp-168h]
  char *s; // [rsp+10h] [rbp-160h]
  char *sa; // [rsp+10h] [rbp-160h]
  __int64 v93; // [rsp+28h] [rbp-148h] BYREF
  char *endptr[2]; // [rsp+30h] [rbp-140h] BYREF
  char *v95; // [rsp+40h] [rbp-130h]
  __int128 v96; // [rsp+48h] [rbp-128h]
  char *s1; // [rsp+60h] [rbp-110h] BYREF
  __int64 v98; // [rsp+68h] [rbp-108h]
  __int64 v99; // [rsp+80h] [rbp-F0h]
  __int128 v100; // [rsp+88h] [rbp-E8h]
  _BYTE v101[24]; // [rsp+A0h] [rbp-D0h] BYREF
  __m128i v102; // [rsp+B8h] [rbp-B8h] BYREF
  __int64 v103; // [rsp+C8h] [rbp-A8h]
  __int128 v104; // [rsp+D0h] [rbp-A0h]
  __int128 v105[3]; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v106; // [rsp+110h] [rbp-60h]
  int v107; // [rsp+118h] [rbp-58h]
  __int64 v108; // [rsp+120h] [rbp-50h]
  char v109; // [rsp+128h] [rbp-48h]
  unsigned __int64 i; // [rsp+138h] [rbp-38h]

  v6 = (__int64)a2;
  v8 = a4;
  v9 = *(_DWORD *)(a4 + 8);
  for ( i = __readfsqword(0x28u); v9 == 48; v9 = *(_DWORD *)(v8 + 8) )
    v8 = *(_QWORD *)(v8 + 24);
  switch ( v9 )
  {
    case '4':
      if ( !(unsigned __int8)sub_207EB0(a1, a2, a3, *(_QWORD *)(v8 + 24), a5 | 1) )
        return 0;
      if ( !a1 )
        return 1;
      if ( !sub_2056D0((__int64 *)a1) )
        return 0;
      v45 = *(_QWORD *)(a1 + 8);
      v46 = *(_QWORD *)a1;
      v47 = *(_QWORD *)(a1 + 16);
      if ( v45 )
      {
        v48 = v45 + 2;
        v49 = v45 - 1;
        v50 = v45 + 1;
        if ( v47 >= v45 + 2 )
          goto LABEL_94;
      }
      else
      {
        if ( v47 > 2 )
        {
          *(_QWORD *)(a1 + 8) = 3;
          *(_BYTE *)(v46 + 2) = 0;
LABEL_96:
          **(_WORD **)a1 = 24432;
          return 1;
        }
        v49 = 0;
        v48 = 3;
        v50 = 2;
      }
      v79 = qvector_reserve();
      *(_QWORD *)a1 = v79;
      v46 = v79;
LABEL_94:
      *(_QWORD *)(a1 + 8) = v48;
      *(_BYTE *)(v46 + v50) = 0;
      if ( v49 )
        memmove((void *)(*(_QWORD *)a1 + 2LL), *(const void **)a1, v49);
      goto LABEL_96;
    case '9':
      memset(v101, 0, sizeof(v101));
      a2 = *(const char **)(v8 + 24);
      if ( *((_DWORD *)a2 + 2) != 68 )
        goto LABEL_50;
      if ( *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL) != 1 )
        goto LABEL_50;
      v89 = (const char *)((**((_BYTE **)a2 + 3) == 83) + *((_QWORD *)a2 + 3));
      a2 = *(const char **)(v8 + 24);
      if ( (int)strlen(v89) <= 5 )
        goto LABEL_50;
      v38 = *(unsigned __int8 *)v89;
      if ( v38 == 76 && v89[1] == 79 )
      {
        s = "_low";
      }
      else
      {
        if ( v38 != 72 || v89[1] != 73 )
          goto LABEL_50;
        s = "_high";
      }
      tinfo_size = get_tinfo_size();
      if ( tinfo_size > 4 || (tinfo_size & (tinfo_size - 1)) != 0 )
        goto LABEL_152;
      v40 = "BYTE";
      if ( tinfo_size != 1 )
      {
        v40 = "DWORD";
        if ( tinfo_size == 2 )
          v40 = "WORD";
      }
      if ( strcmp(v89 + 2, v40) || !(unsigned __int8)sub_207EB0(a1, v6, a3, **(_QWORD **)(v8 + 32), a5) )
      {
LABEL_152:
        a2 = *(const char **)(v8 + 24);
LABEL_50:
        if ( (unsigned __int8)sub_205B50((__int64)v101, (__int64)a2) )
        {
          a2 = v101;
          if ( (unsigned __int8)sub_2069C0((__int64 *)a1, (__int64)v101, v8) )
            goto LABEL_60;
        }
        if ( a4 != v8 )
          goto LABEL_55;
        v29 = ::s1;
        if ( *(_QWORD *)&v101[8] )
          v29 = *(const char **)v101;
        a2 = (const char *)v6;
        if ( (unsigned __int8)sub_205F60(a1, v6, (__int64 *)(v8 + 48), v29, a5) )
        {
LABEL_60:
          v22 = 1;
          v34 = a1 == 0;
        }
        else
        {
LABEL_55:
          if ( (a5 & 0x10) == 0 )
          {
            if ( *(_QWORD *)v101 )
            {
              *(_QWORD *)&v101[8] = 0;
              qfree();
            }
            return 0;
          }
          v30 = *(__int64 **)(v8 + 32);
          v31 = *v30;
          for ( j = *v30; v31 != j + 72 * v30[1]; j = *v30 )
          {
            a2 = *(const char **)(v6 + 1504);
            v33 = sub_2074C0(a1, (__int64)a2, v31);
            v31 += 72;
            if ( v33 )
              goto LABEL_60;
          }
          v34 = 1;
          v22 = 0;
        }
        if ( *(_QWORD *)v101 )
        {
          *(_QWORD *)&v101[8] = 0;
          qfree();
        }
        goto LABEL_104;
      }
      if ( !a1 )
        return 1;
      v41 = strlen(s);
      v42 = (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
      v43 = v41 + (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) < v43 )
        *(_QWORD *)a1 = qvector_reserve();
      v44 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 8) = v43;
      *(_BYTE *)(v44 + v41 + v42) = 0;
      qmemcpy((void *)(*(_QWORD *)a1 + v42), s, (unsigned int)v41);
      a2 = &s[(unsigned int)v41];
      if ( *(_QWORD *)v101 )
      {
        *(_QWORD *)&v101[8] = 0;
        qfree();
      }
LABEL_105:
      if ( *(_QWORD *)(a1 + 8) <= 1u )
        return 0;
      v51 = *(_QWORD *)a1;
      v52 = *(_QWORD *)a1;
      if ( **(_BYTE **)a1 != 95 )
        goto LABEL_120;
      do
        v53 = (unsigned int)*(char *)++v52;
      while ( (_BYTE)v53 == 95 );
      if ( v51 == v52 )
        goto LABEL_120;
      v54 = v52 - v51;
      v55 = sub_326FC0(v53, a2, v51);
      v56 = *(_QWORD *)(a1 + 8);
      if ( v55 )
      {
        if ( v56 )
        {
          v66 = v54;
          v67 = v56 - 1;
          if ( v56 != 1 )
          {
            if ( v54 )
            {
              v68 = 1;
              v69 = 0;
              if ( v66 < v67 )
              {
                v69 = v67 - v66;
                v68 = v56 - v66;
                memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + v66), v67 - v66);
              }
              v70 = *(_QWORD *)a1;
              if ( *(_QWORD *)(a1 + 16) < v68 )
              {
                v75 = qvector_reserve();
                *(_QWORD *)a1 = v75;
                v70 = v75;
              }
              *(_QWORD *)(a1 + 8) = v68;
              *(_BYTE *)(v70 + v69) = 0;
            }
          }
        }
        goto LABEL_120;
      }
      if ( !v56 )
        return 0;
      v57 = v54 - 1;
      v58 = v56 - 1;
      if ( v56 != 1 && v54 != 1 )
      {
        v59 = 1;
        v60 = 0;
        if ( v57 < v58 )
        {
          v60 = v58 - v57;
          v59 = v56 - v57;
          memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + v57), v58 - v57);
        }
        v61 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v59 )
        {
          v76 = qvector_reserve();
          *(_QWORD *)a1 = v76;
          v61 = v76;
        }
        *(_QWORD *)(a1 + 8) = v59;
        *(_BYTE *)(v61 + v60) = 0;
        v62 = *(_QWORD *)(a1 + 8);
        if ( !v62 )
          return 0;
        v58 = v62 - 1;
      }
      if ( v58 <= 2 )
        return 0;
LABEL_120:
      if ( *(_DWORD *)(v8 + 8) != 64 && !sub_2056D0((__int64 *)a1) )
        return 0;
      v63 = *(_QWORD *)a1;
      if ( **(_BYTE **)a1 == 118 )
      {
        v64 = *(_BYTE *)(v63 + 1);
        if ( v64 )
        {
          v65 = v63 + 1;
          while ( (unsigned __int8)(v64 - 48) <= 9u )
          {
            v64 = *(_BYTE *)++v65;
            if ( !v64 )
              return 0;
          }
        }
      }
      return sub_326F50();
    case ';':
    case '<':
      v11 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v11 + 8) == 65 && *(_DWORD *)(v11 + 32) == a3 )
        return 0;
      v93 = 0;
      tinfo_property = get_tinfo_property();
      v109 = 0;
      a2 = (const char *)&v93;
      v103 = 0;
      v106 = 1;
      v107 = -1;
      v108 = 0;
      memset(v101, 0, sizeof(v101));
      v102 = 0;
      v104 = 0;
      v105[0] = 0;
      v13 = *(unsigned int *)(v8 + 32);
      v93 = tinfo_property;
      if ( (int)sub_25BEF0(v101, &v93, v13, 0) <= 0 )
        goto LABEL_98;
      if ( (a5 & 0x200) != 0 )
        goto LABEL_141;
      v14 = v102.m128i_i64[0];
      if ( v102.m128i_i64[0] > 1uLL )
      {
        v71 = *(char *)(*(_QWORD *)&v101[16] + v102.m128i_i64[0] - 2);
        v88 = *(_QWORD *)&v101[16];
        if ( v71 > 0x7F || !isxdigit(v71) )
          goto LABEL_141;
      }
      else
      {
        if ( !isxdigit(0) )
          goto LABEL_141;
        if ( !v14 )
        {
          LODWORD(v15) = -1;
          v88 = *(_QWORD *)&v101[16];
LABEL_12:
          v16 = v14 != 0;
          v17 = (char *)(v88 + (int)v15 - 1);
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
          a2 = (const char *)endptr;
          v19 = strtol((const char *)((int)v15 + v88), endptr, 16);
          if ( v19 == *(_QWORD *)v101 >> 3 && !*endptr[0] )
          {
            if ( !v102.m128i_i64[0] )
            {
              v95 = nullptr;
              v96 = 0;
              goto LABEL_21;
            }
            v95 = nullptr;
            v80 = *(const void **)&v101[16];
            v96 = 0;
            if ( v102.m128i_i64[0] - 1 <= (unsigned __int64)(int)v15 )
              v15 = v102.m128i_i64[0] - 1;
            if ( v15 )
            {
              v95 = (char *)qvector_reserve();
              *(_QWORD *)&v96 = v15 + 1;
              memmove(v95, v80, v15);
              v95[v15] = 0;
              if ( (_QWORD)v96 )
              {
                v81 = v95;
                a2 = "field_";
                if ( !strcmp(v95, "field_") )
                {
                  if ( !v81 )
                    goto LABEL_98;
                  goto LABEL_175;
                }
                a2 = "field_0x";
                if ( !strcmp(v81, "field_0x") || (a2 = "gap", !strcmp(v81, "gap")) )
                {
                  if ( !v81 )
                    goto LABEL_98;
LABEL_175:
                  *(_QWORD *)&v96 = 0;
                  qfree();
                  goto LABEL_98;
                }
              }
            }
LABEL_21:
            sub_324570(&s1, v105);
            if ( v102.m128i_i64[0] )
            {
              a2 = *(const char **)&v101[16];
              v20 = (char *)::s1;
              if ( !v98 )
                goto LABEL_24;
            }
            else
            {
              a2 = ::s1;
              if ( !v98 )
              {
LABEL_178:
                if ( s1 )
                {
                  v98 = 0;
                  qfree();
                  if ( !v95 )
                    goto LABEL_98;
                }
                else if ( !v95 )
                {
                  goto LABEL_98;
                }
                goto LABEL_175;
              }
            }
            v20 = s1;
LABEL_24:
            if ( strcmp(v20, a2) )
            {
              endptr[1] = nullptr;
              copy_tinfo_t();
              while ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
              {
                v99 = 0;
                v99 = get_tinfo_property();
                copy_tinfo_t();
                clear_tinfo_t();
              }
              a2 = (const char *)&word_2;
              if ( (get_tinfo_property() & 0x2F) == 0xD )
              {
LABEL_29:
                v21 = 0;
                goto LABEL_30;
              }
              set_tinfo_property();
              v99 = 0;
              v100 = 0;
              a2 = nullptr;
              v21 = print_tinfo();
              if ( !v21 )
              {
                v84 = v99;
                goto LABEL_191;
              }
              if ( (_QWORD)v96 )
              {
                a2 = v95;
                if ( !(_QWORD)v100 )
                {
                  v85 = (char *)v99;
                  v86 = ::s1;
                  goto LABEL_197;
                }
              }
              else
              {
                if ( !(_QWORD)v100 )
                {
                  v84 = v99;
                  goto LABEL_198;
                }
                a2 = ::s1;
              }
              v85 = (char *)v99;
              v86 = (const char *)v99;
LABEL_197:
              sa = v85;
              v87 = strcmp(v86, a2);
              v84 = (__int64)sa;
              if ( v87 )
              {
LABEL_191:
                if ( v84 )
                {
                  *(_QWORD *)&v100 = 0;
                  qfree();
                }
                goto LABEL_29;
              }
LABEL_198:
              if ( v84 )
              {
                *(_QWORD *)&v100 = 0;
                qfree();
              }
LABEL_30:
              clear_tinfo_t();
              if ( s1 )
              {
                v98 = 0;
                qfree();
              }
              if ( v95 )
              {
                *(_QWORD *)&v96 = 0;
                qfree();
              }
              if ( !v21 )
                goto LABEL_141;
LABEL_98:
              v34 = 1;
              v22 = 0;
              goto LABEL_99;
            }
            goto LABEL_178;
          }
LABEL_141:
          if ( a1 )
          {
            v72 = *(_QWORD *)a1;
            v73 = _mm_loadu_si128((const __m128i *)(a1 + 8));
            v74 = _mm_loadu_si128(&v102);
            *(_QWORD *)a1 = *(_QWORD *)&v101[16];
            *(_QWORD *)&v101[16] = v72;
            *(__m128i *)(a1 + 8) = v74;
            v102 = v73;
          }
          v22 = 1;
          v34 = a1 == 0;
LABEL_99:
          clear_tinfo_t();
          if ( v103 )
          {
            *(_QWORD *)&v104 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v101[16] )
          {
            v102.m128i_i64[0] = 0;
            qfree();
          }
          clear_tinfo_t();
LABEL_104:
          if ( v34 )
            return v22;
          goto LABEL_105;
        }
        v88 = *(_QWORD *)&v101[16];
      }
      LODWORD(v15) = v14 - 2;
      goto LABEL_12;
    case '@':
      if ( (a5 & 0x10) != 0 )
      {
        a2 = *((const char **)a2 + 188);
        if ( (unsigned __int8)sub_2074C0(a1, (__int64)a2, v8) )
        {
          if ( a1 )
            goto LABEL_105;
          return 1;
        }
      }
      if ( (a5 & 2) == 0 || (get_flags_ex() & 0x4000) == 0 || !(unsigned __int8)sub_205B50(a1, v8) )
        return 0;
      if ( !a1 )
        return 1;
      v35 = *(_QWORD *)(a1 + 8);
      if ( v35 )
      {
        v36 = v35 + 1;
        v37 = *(_QWORD *)(a1 + 8);
        --v35;
      }
      else
      {
        v37 = 1;
        v36 = 2;
      }
      a2 = *(const char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v36 )
      {
        v82 = qvector_reserve();
        *(_QWORD *)a1 = v82;
        a2 = (const char *)v82;
      }
      *(_QWORD *)(a1 + 8) = v36;
      a2[v35] = 95;
      *(_BYTE *)(*(_QWORD *)a1 + v37) = 0;
      goto LABEL_105;
    case 'A':
      if ( (a5 & 1) == 0 )
        return 0;
      v24 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32);
      v25 = *(_DWORD *)(v24 + 24);
      if ( (v25 & 4) == 0 )
        return 0;
      if ( (v25 & 0x100) != 0 )
      {
        v77 = *((_DWORD **)a2 + 188);
        a2 = (const char *)(v24 + 32);
        if ( (unsigned __int8)sub_206600(v77, v24 + 32, *(_DWORD *)(v24 + 88)) )
          return 0;
      }
      else if ( *(_QWORD *)(v24 + 40) )
      {
        v26 = *(_BYTE **)(v24 + 32);
        if ( *v26 == 118 )
        {
          v27 = v26[1];
          if ( v27 )
          {
            v28 = v26 + 1;
            while ( (unsigned __int8)(v27 - 48) <= 9u )
            {
              v27 = *++v28;
              if ( !v27 )
                return 0;
            }
          }
        }
      }
      if ( !a1 )
        return 1;
      if ( a1 == v24 + 32 )
        goto LABEL_105;
      v78 = *(_QWORD *)(v24 + 40);
      if ( v78 <= 1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        return 0;
      }
      v83 = *(const char **)(v24 + 32);
      if ( *(_QWORD *)(a1 + 16) < v78 )
        *(_QWORD *)a1 = qvector_reserve();
      a2 = v83;
      *(_QWORD *)(a1 + 8) = v78;
      memmove(*(void **)a1, v83, v78 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v78 - 1) = 0;
      goto LABEL_105;
    default:
      return 0;
  }
}

