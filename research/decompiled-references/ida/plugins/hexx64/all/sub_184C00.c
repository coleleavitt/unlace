__int64 __fastcall sub_184C00(__int64 a1, char *a2)
{
  __int64 v2; // rdx
  int v3; // r13d
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbp
  char v8; // r12
  int v9; // eax
  int v10; // edx
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // r12d
  int v14; // eax
  int v16; // eax
  char v17; // al
  int v18; // r13d
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  int i; // edx
  char v22; // di
  int v23; // ecx
  int v24; // esi
  unsigned __int64 v25; // rsi
  unsigned int *v26; // r8
  unsigned int *v27; // rdx
  int v28; // eax
  unsigned __int8 v29; // al
  int v30; // ecx
  _BYTE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  const char *v35; // r14
  __int64 v36; // r12
  size_t v37; // rax
  size_t v38; // r13
  size_t v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rdx
  int v42; // r15d
  int v43; // r14d
  int v44; // eax
  int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r10
  int v49; // eax
  int v50; // r12d
  int max_strlit_length; // eax
  int v52; // ecx
  int v53; // edx
  int byte; // r14d
  int v55; // r13d
  int v56; // r12d
  char *v57; // rcx
  char *v58; // rdi
  unsigned int *v59; // rdx
  unsigned int v60; // eax
  int v61; // r10d
  __int64 v62; // r14
  __int64 bytes; // rax
  unsigned int str_type; // eax
  __int64 v65; // rax
  int v66; // eax
  int v67; // edx
  __int64 v68; // r12
  void *v69; // rdi
  char *v70; // rax
  char v71; // al
  void *v72; // r13
  const char *v73; // rdi
  _BYTE *v74; // rax
  unsigned __int64 v75; // r12
  size_t v76; // r15
  __int64 v77; // r13
  unsigned __int64 v78; // r8
  __int64 v79; // rsi
  unsigned __int64 v80; // r13
  size_t v81; // r15
  __int64 v82; // r14
  size_t v83; // r8
  char *v84; // rsi
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // [rsp+0h] [rbp-90h]
  __int64 v90; // [rsp+0h] [rbp-90h]
  int v91; // [rsp+0h] [rbp-90h]
  unsigned __int64 v92; // [rsp+0h] [rbp-90h]
  size_t v93; // [rsp+0h] [rbp-90h]
  void *j; // [rsp+10h] [rbp-80h] BYREF
  unsigned int *v95; // [rsp+18h] [rbp-78h] BYREF
  __int128 v96; // [rsp+20h] [rbp-70h]
  void *src; // [rsp+38h] [rbp-58h] BYREF
  __int128 v98; // [rsp+40h] [rbp-50h]
  unsigned __int64 v99; // [rsp+50h] [rbp-40h]

  v2 = *((_QWORD *)a2 + 9);
  v3 = *((_DWORD *)a2 + 34);
  v99 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 96);
  v6 = *((_QWORD *)a2 + 8);
  v96 = 0;
  v95 = nullptr;
  if ( *((_QWORD *)a2 + 10) < (unsigned __int64)(v2 + 1) )
  {
    v34 = qvector_reserve((__int64)(a2 + 64), v6, v2 + 1, 40);
    *((_QWORD *)a2 + 8) = v34;
    v2 = *((_QWORD *)a2 + 9);
    v6 = v34;
  }
  v7 = v6 + 40 * v2;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 32) = -1;
  *(_OWORD *)(v7 + 8) = 0;
  v8 = a2[20];
  ++*((_QWORD *)a2 + 9);
  if ( v8 )
  {
    v9 = *((_DWORD *)a2 + 4);
    if ( (unsigned __int8)(v9 - 32) <= 0x5Fu || (unsigned __int8)(v9 - 9) <= 1u )
    {
      v10 = *((_DWORD *)a2 + 33);
      v11 = (__int64)v95;
      if ( !v10 )
        goto LABEL_9;
    }
    else
    {
      v10 = *((_DWORD *)a2 + 33);
      *((_DWORD *)a2 + 34) |= 1u;
      v11 = (__int64)v95;
      if ( !v10 )
        goto LABEL_9;
    }
    if ( v9 != v10 )
    {
      v12 = *((_DWORD *)a2 + 34);
      if ( (v12 & 1) != 0 )
        goto LABEL_41;
      *((_DWORD *)a2 + 34) = v12 | 2;
    }
LABEL_9:
    v13 = 0;
    *(_QWORD *)(v7 + 24) = *((int *)a2 + 1);
    v14 = *((_DWORD *)a2 + 4);
    *(_DWORD *)(v7 + 32) = v14;
    *((_DWORD *)a2 + 33) = v14;
    *((_DWORD *)a2 + 30) += *((_DWORD *)a2 + 1);
    goto LABEL_10;
  }
  v16 = *((_DWORD *)a2 + 1);
  if ( v16 > 0 )
  {
    v32 = v96;
    v33 = v16;
    if ( (unsigned __int64)v96 < v16 )
    {
      v46 = (__int64)v95;
      if ( *((_QWORD *)&v96 + 1) < (unsigned __int64)v16 )
      {
        v90 = v16;
        v95 = (unsigned int *)qvector_reserve((__int64)&v95, (__int64)v95, v16, 1);
        v32 = v96;
        v46 = (__int64)v95;
        v33 = v90;
      }
      v89 = v33;
      memset((void *)(v46 + v32), 0, v33 - v32);
      *(_QWORD *)&v96 = v89;
    }
    else if ( v16 != (_QWORD)v96 )
    {
      *(_QWORD *)&v96 = v16;
    }
  }
  v17 = *a2;
  v18 = v3 & 4;
  *((_DWORD *)a2 + 32) = -1;
  if ( v17 == 3 )
  {
    v35 = *((const char **)a2 + 1);
    *((_DWORD *)a2 + 34) &= ~0x10u;
    if ( v35 )
    {
      v36 = *(_QWORD *)(v7 + 8);
      v37 = strlen(v35);
      v38 = v37;
      v39 = v37;
      if ( v36 )
      {
        --v36;
        v39 = v37 + v36;
      }
      v40 = *(_QWORD *)v7;
      v41 = v39 + 1;
      if ( *(_QWORD *)(v7 + 16) < v39 + 1 )
      {
        v65 = qvector_reserve(v7, v40, v41, 1);
        *(_QWORD *)v7 = v65;
        v41 = v39 + 1;
        v40 = v65;
      }
      *(_QWORD *)(v7 + 8) = v41;
      *(_BYTE *)(v40 + v39) = 0;
      memmove((void *)(v36 + *(_QWORD *)v7), v35, v38);
    }
    if ( *(_QWORD *)(v7 + 8) <= 1u )
    {
      if ( !under_debugger )
        sub_383060(0xCC81u, 0.0);
      goto LABEL_203;
    }
    v42 = sub_331FE0(*((char **)a2 + 1), nullptr);
    v43 = v42;
    if ( (a2[136] & 2) == 0 )
    {
      v70 = *((char **)a2 + 1);
      src = v70 + 1;
      v71 = *v70;
      if ( !v71 )
        sub_183360(0.0);
      v91 = v71;
      if ( v71 == 92 )
        v91 = (char)back_char();
      src = nullptr;
      v43 = v42;
      v98 = 0;
      sub_183D60((__int64)&src, v91, v42);
      v72 = src;
      v73 = (const char *)src;
      if ( !(_QWORD)v98 )
        v73 = s1;
      v13 = strcmp(v73, *((const char **)a2 + 1));
      if ( !v13 )
      {
        if ( *((_DWORD *)a2 + 33) != v91 )
          *((_DWORD *)a2 + 34) |= 2u;
        *(_QWORD *)(v7 + 24) = *((int *)a2 + 1);
        *(_DWORD *)(v7 + 32) = v91;
        *((_DWORD *)a2 + 33) = v91;
        *((_DWORD *)a2 + 30) += v42;
        if ( v72 )
        {
          *(_QWORD *)&v98 = 0;
          qfree((__int64)v72);
        }
        goto LABEL_59;
      }
      *((_DWORD *)a2 + 34) |= 2u;
      if ( v72 )
      {
        *(_QWORD *)&v98 = 0;
        qfree((__int64)v72);
      }
    }
    v44 = *((_DWORD *)a2 + 31);
    if ( v44 <= 0 )
      v44 = 1;
    v45 = v43 * v44;
    v13 = v45 < *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 32) = v45;
    goto LABEL_59;
  }
  if ( v17 != 6 )
  {
    *((_DWORD *)a2 + 34) &= ~0x10u;
    if ( v17 != 2 )
    {
      v11 = (__int64)v95;
      v13 = -1;
      goto LABEL_10;
    }
    v19 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL), *((_DWORD *)a2 + 1), 0);
    if ( *((_QWORD *)a2 + 11) == -1 )
      *((_QWORD *)a2 + 11) = **((_QWORD **)a2 + 1);
    LODWORD(v20) = *((_DWORD *)a2 + 1);
    for ( i = 0; (int)v20 > i; LODWORD(v20) = *((_DWORD *)a2 + 1) )
    {
      v22 = v19;
      v23 = i;
      if ( *(_BYTE *)(v5 + 145) )
        v23 = v20 - i - 1;
      ++i;
      v19 >>= 8;
      *((_BYTE *)v95 + v23) = v22;
    }
    goto LABEL_23;
  }
  v47 = *((_QWORD *)a2 + 12);
  v48 = *((_QWORD *)a2 + 1);
  if ( v47 == -1 )
  {
    *((_QWORD *)a2 + 12) = v48;
    v47 = v48;
  }
  if ( v47 + *((int *)a2 + 30) != v48 )
    *((_DWORD *)a2 + 34) &= ~0x10u;
  v49 = *((_DWORD *)a2 + 1);
  if ( !v49 || v18 )
  {
    v50 = *((_DWORD *)a2 + 31);
    src = nullptr;
    v98 = 0;
    if ( v50 > 0 )
    {
      if ( v50 != 1 )
      {
        if ( !(v49 % v50) )
          goto LABEL_73;
        v13 = -1;
LABEL_59:
        v11 = (__int64)v95;
        goto LABEL_10;
      }
LABEL_111:
      v50 = 1;
LABEL_73:
      max_strlit_length = get_max_strlit_length();
      v52 = max_strlit_length;
      if ( max_strlit_length >= 0 )
      {
        if ( max_strlit_length )
        {
          v53 = *((_DWORD *)a2 + 1);
          if ( v53 <= max_strlit_length )
            max_strlit_length = *((_DWORD *)a2 + 1);
          if ( v53 )
            v52 = max_strlit_length;
          byte = v52 % v50;
          if ( v52 % v50 )
            goto LABEL_82;
          j = (void *)*(int *)(*(_QWORD *)(a1 + 96) + 648LL);
          if ( (int)get_strlit_contents() <= 0 || !j )
            goto LABEL_82;
          if ( (unsigned __int64)v98 <= 1 )
          {
            *((_DWORD *)a2 + 32) = 0;
LABEL_116:
            v66 = *((_DWORD *)a2 + 1);
            *((_DWORD *)a2 + 30) += byte;
            *((_DWORD *)a2 + 34) |= 2u;
            v13 = v66 > byte || v66 == 0;
LABEL_83:
            if ( src )
            {
              *(_QWORD *)&v98 = 0;
              qfree((__int64)src);
            }
            goto LABEL_59;
          }
          byte = sub_331FE0((char *)src, nullptr) * v50;
          if ( byte != -1 )
          {
LABEL_148:
            v75 = v98;
            *((_DWORD *)a2 + 32) = byte;
            if ( v75 )
            {
              v76 = v75 - 1;
              if ( v75 != 1 )
              {
                v77 = *(_QWORD *)(v7 + 8);
                v78 = v75 - 1;
                if ( v77 )
                {
                  --v77;
                  v78 = v76 + v77;
                  v75 += v77;
                }
                v79 = *(_QWORD *)v7;
                if ( *(_QWORD *)(v7 + 16) < v75 )
                {
                  v92 = v78;
                  v86 = qvector_reserve(v7, v79, v75, 1);
                  *(_QWORD *)v7 = v86;
                  v78 = v92;
                  v79 = v86;
                }
                *(_QWORD *)(v7 + 8) = v75;
                *(_BYTE *)(v79 + v78) = 0;
                memcpy((void *)(v77 + *(_QWORD *)v7), src, v76);
              }
            }
            goto LABEL_116;
          }
        }
        else
        {
          if ( v50 == 1 )
          {
            byte = (unsigned __int8)get_byte();
          }
          else if ( v50 == 2 )
          {
            byte = (unsigned __int16)get_word();
          }
          else
          {
            byte = get_dword();
          }
          if ( !byte )
            goto LABEL_148;
        }
      }
LABEL_82:
      v13 = -1;
      goto LABEL_83;
    }
    if ( (get_flags_ex() & 0x600) == 0x200 )
      prev_not_tail();
    str_type = get_str_type();
    if ( str_type > 2 )
      goto LABEL_82;
    if ( str_type == 1 )
    {
      v50 = 2;
    }
    else
    {
      if ( str_type != 2 )
      {
        *((_DWORD *)a2 + 31) = 1;
        goto LABEL_111;
      }
      v50 = 4;
    }
    v85 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 31) = v50;
    if ( v85 % v50 )
      goto LABEL_82;
    goto LABEL_73;
  }
  bytes = get_bytes();
  v20 = *((int *)a2 + 1);
  if ( v20 != bytes )
    goto LABEL_104;
LABEL_23:
  *((_DWORD *)a2 + 30) += v20;
  v24 = *((_DWORD *)a2 + 31);
  if ( v24 > 1 )
  {
    if ( (a2[136] & 0xC) == 0 )
      goto LABEL_104;
    if ( ((v24 - 2) & 0xFFFFFFFD) == 0 )
    {
      v55 = (int)v95;
      v56 = v96;
      v57 = (char *)v95 + v24;
      v58 = (char *)v95 + (int)v96;
      if ( v58 < v57 )
        goto LABEL_98;
      v59 = v95;
LABEL_89:
      if ( v24 != 2 )
        goto LABEL_90;
      while ( 1 )
      {
        v60 = *(unsigned __int16 *)v59;
        while ( 2 )
        {
          v61 = *((_DWORD *)a2 + 33);
          if ( v61 )
          {
            if ( v61 == v60 )
              goto LABEL_95;
            *((_DWORD *)a2 + 34) |= 2u;
          }
          *((_DWORD *)a2 + 33) = v60;
          if ( !v60 )
          {
            v56 = (_DWORD)v59 - v55;
            goto LABEL_98;
          }
LABEL_95:
          if ( !*(_BYTE *)(v5 + 145) )
          {
            v57 += v24;
            v59 = (unsigned int *)((char *)v59 + v24);
            if ( v58 >= v57 )
              goto LABEL_89;
LABEL_98:
            v62 = 0;
            if ( !v56 )
            {
LABEL_99:
              if ( v62 != (_QWORD)v96 )
              {
                *((_DWORD *)a2 + 32) = v56;
                v11 = (__int64)v95;
                v13 = 1;
                goto LABEL_10;
              }
LABEL_126:
              if ( (a2[136] & 2) != 0 )
              {
LABEL_127:
                v11 = (__int64)v95;
                v13 = 0;
                goto LABEL_10;
              }
LABEL_143:
              *(_QWORD *)(v7 + 24) += v96;
              *(_DWORD *)(v7 + 32) = *((_DWORD *)a2 + 33);
              goto LABEL_127;
            }
            get_default_encoding_idx();
            get_encoding_name();
            v62 = v56;
            v98 = 0;
            src = nullptr;
            if ( v56 <= (int)convert_encoding() )
            {
              qstr2user();
              sub_331FE0(*(char **)v7, &j);
              if ( (_BYTE)j )
                *((_DWORD *)a2 + 34) |= 1u;
              if ( src )
              {
                *(_QWORD *)&v98 = 0;
                qfree((__int64)src);
              }
              goto LABEL_99;
            }
            if ( src )
            {
              *(_QWORD *)&v98 = 0;
              qfree((__int64)src);
            }
LABEL_104:
            v11 = (__int64)v95;
LABEL_41:
            v13 = -1;
            goto LABEL_10;
          }
          if ( v24 != 2 )
          {
            v57 += 4;
            *v59++ = _byteswap_ulong(v60);
            if ( v58 < v57 )
              goto LABEL_98;
LABEL_90:
            v60 = *v59;
            continue;
          }
          break;
        }
        v57 += 2;
        v59 = (unsigned int *)((char *)v59 + 2);
        *((_WORD *)v59 - 1) = __ROL2__(v60, 8);
        if ( v58 < v57 )
          goto LABEL_98;
      }
    }
    if ( !under_debugger )
      sub_383060(0xCD02u, 0.0);
LABEL_203:
    BUG();
  }
  v11 = (__int64)v95;
  v25 = v96;
  v26 = (unsigned int *)((char *)v95 + v96);
  if ( v95 != (unsigned int *)((char *)v95 + v96) )
  {
    v27 = v95;
    while ( 1 )
    {
      v29 = *(_BYTE *)v27;
      if ( !v18 && v29 == 0xFF )
        goto LABEL_41;
      v30 = *((_DWORD *)a2 + 33);
      if ( v30 )
      {
        if ( v30 == v29 )
          goto LABEL_26;
        *((_DWORD *)a2 + 34) |= 2u;
        v29 = *(_BYTE *)v27;
      }
      if ( !v29 )
      {
        if ( (a2[136] & 1) != 0 )
        {
          v31 = (char *)v27 + 1;
          if ( (unsigned int *)((char *)v27 + 1) < v26 )
          {
            while ( !*v31 )
            {
              if ( ++v31 == (_BYTE *)v26 )
                goto LABEL_117;
            }
            goto LABEL_41;
          }
        }
LABEL_117:
        v67 = (_DWORD)v27 - v11;
        v68 = v67;
        *((_DWORD *)a2 + 32) = v67;
        if ( v25 < v67 )
        {
          if ( *((_QWORD *)&v96 + 1) < (unsigned __int64)v67 )
          {
            v87 = qvector_reserve((__int64)&v95, v11, v67, 1);
            v25 = v96;
            v95 = (unsigned int *)v87;
            v26 = (unsigned int *)(v96 + v87);
          }
          memset(v26, 0, v68 - v25);
          *(_QWORD *)&v96 = v68;
          v8 = 1;
        }
        else
        {
          if ( v67 != v25 )
          {
            *(_QWORD *)&v96 = v67;
            src = nullptr;
            v98 = 0;
            if ( v18 || !v67 )
            {
              v8 = 1;
              goto LABEL_122;
            }
            v8 = 1;
LABEL_137:
            if ( !(unsigned __int8)idb_utf8() )
              goto LABEL_123;
            v74 = src;
            for ( j = src; ; v74 = j )
            {
              if ( !*v74 )
              {
                *(_QWORD *)&v98 = 0;
                goto LABEL_122;
              }
              get_utf8_char();
              if ( !(unsigned __int8)is_valid_cp() )
                break;
            }
            v69 = src;
            goto LABEL_192;
          }
          v8 = 1;
        }
LABEL_136:
        src = nullptr;
        v98 = 0;
        if ( v18 )
          goto LABEL_122;
        goto LABEL_137;
      }
LABEL_26:
      if ( (unsigned __int8)(v29 - 32) > 0x5Fu && (unsigned __int8)(v29 - 9) > 1u )
        *((_DWORD *)a2 + 34) |= 1u;
      v28 = *(unsigned __int8 *)v27;
      v27 = (unsigned int *)((char *)v27 + 1);
      *((_DWORD *)a2 + 33) = v28;
      if ( v27 == v26 )
        goto LABEL_136;
    }
  }
  src = nullptr;
  v98 = 0;
LABEL_122:
  if ( !(unsigned __int8)idb_utf8() )
  {
LABEL_123:
    v69 = src;
    if ( (a2[136] & 2) != 0 )
    {
LABEL_192:
      if ( v69 )
      {
        *(_QWORD *)&v98 = 0;
        qfree((__int64)v69);
      }
      goto LABEL_104;
    }
    if ( !src )
      goto LABEL_143;
LABEL_125:
    *(_QWORD *)&v98 = 0;
    qfree((__int64)v69);
    goto LABEL_126;
  }
  v80 = v98;
  if ( (_QWORD)v98 )
  {
    v81 = v98 - 1;
    if ( (_QWORD)v98 != 1 )
    {
      v82 = *(_QWORD *)(v7 + 8);
      v83 = v98 - 1;
      if ( v82 )
      {
        --v82;
        v83 = v81 + v82;
        v80 = v98 + v82;
      }
      v84 = *(char **)v7;
      if ( *(_QWORD *)(v7 + 16) < v80 )
      {
        v93 = v83;
        v88 = qvector_reserve(v7, (__int64)v84, v80, 1);
        *(_QWORD *)v7 = v88;
        v83 = v93;
        v84 = (char *)v88;
      }
      *(_QWORD *)(v7 + 8) = v80;
      v84[v83] = 0;
      memcpy((void *)(v82 + *(_QWORD *)v7), src, v81);
    }
  }
  v69 = src;
  if ( !v8 )
  {
    if ( !src )
      goto LABEL_126;
    goto LABEL_125;
  }
  if ( src )
  {
    *(_QWORD *)&v98 = 0;
    qfree((__int64)src);
  }
  v11 = (__int64)v95;
  v13 = 1;
LABEL_10:
  if ( v11 )
  {
    *(_QWORD *)&v96 = 0;
    qfree(v11);
  }
  return v13;
}

