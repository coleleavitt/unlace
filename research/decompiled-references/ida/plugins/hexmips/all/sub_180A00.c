__int64 __fastcall sub_180A00(__int64 a1, char *a2)
{
  __int64 v2; // rdx
  int v3; // r13d
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 *v7; // rbp
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
  unsigned __int8 *v26; // r8
  unsigned __int8 *v27; // rdx
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
  size_t v41; // rdx
  __int64 v42; // rdi
  int v43; // r15d
  int v44; // r14d
  int v45; // eax
  int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r10
  int v50; // eax
  int v51; // r12d
  int max_strlit_length; // eax
  int v53; // ecx
  int v54; // edx
  int byte; // r14d
  int v56; // r13d
  int v57; // r12d
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdi
  unsigned int *v60; // rdx
  unsigned int v61; // eax
  int v62; // r10d
  __int64 v63; // r14
  __int64 bytes; // rax
  unsigned int str_type; // eax
  __int64 v66; // rax
  int v67; // eax
  int v68; // edx
  __int64 v69; // r12
  char *v70; // rax
  char v71; // al
  void *v72; // r13
  const char *v73; // rdi
  _BYTE *v74; // rax
  unsigned __int64 v75; // r12
  size_t v76; // r15
  __int64 v77; // r13
  size_t v78; // r8
  __int64 v79; // rsi
  unsigned __int64 v80; // r13
  size_t v81; // r15
  __int64 v82; // r14
  size_t v83; // r8
  __int64 v84; // rsi
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // [rsp+0h] [rbp-90h]
  __int64 v89; // [rsp+0h] [rbp-90h]
  int v90; // [rsp+0h] [rbp-90h]
  size_t v91; // [rsp+0h] [rbp-90h]
  size_t v92; // [rsp+0h] [rbp-90h]
  void *v93; // [rsp+10h] [rbp-80h] BYREF
  __int64 v94; // [rsp+18h] [rbp-78h]
  __int128 v95; // [rsp+20h] [rbp-70h]
  void *src; // [rsp+38h] [rbp-58h] BYREF
  __int128 v97; // [rsp+40h] [rbp-50h]
  unsigned __int64 v98; // [rsp+50h] [rbp-40h]

  v2 = *((_QWORD *)a2 + 9);
  v3 = *((_DWORD *)a2 + 34);
  v98 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 96);
  v6 = *((_QWORD *)a2 + 8);
  v95 = 0;
  v94 = 0;
  if ( *((_QWORD *)a2 + 10) < (unsigned __int64)(v2 + 1) )
  {
    v34 = qvector_reserve();
    *((_QWORD *)a2 + 8) = v34;
    v2 = *((_QWORD *)a2 + 9);
    v6 = v34;
  }
  v7 = (__int64 *)(v6 + 40 * v2);
  *v7 = 0;
  v7[3] = 0;
  *((_DWORD *)v7 + 8) = -1;
  *(_OWORD *)(v7 + 1) = 0;
  v8 = a2[20];
  ++*((_QWORD *)a2 + 9);
  if ( v8 )
  {
    v9 = *((_DWORD *)a2 + 4);
    if ( (unsigned __int8)(v9 - 32) <= 0x5Fu || (unsigned __int8)(v9 - 9) <= 1u )
    {
      v10 = *((_DWORD *)a2 + 33);
      v11 = v94;
      if ( !v10 )
        goto LABEL_9;
    }
    else
    {
      v10 = *((_DWORD *)a2 + 33);
      *((_DWORD *)a2 + 34) |= 1u;
      v11 = v94;
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
    v7[3] = *((int *)a2 + 1);
    v14 = *((_DWORD *)a2 + 4);
    *((_DWORD *)v7 + 8) = v14;
    *((_DWORD *)a2 + 33) = v14;
    *((_DWORD *)a2 + 30) += *((_DWORD *)a2 + 1);
    goto LABEL_10;
  }
  v16 = *((_DWORD *)a2 + 1);
  if ( v16 > 0 )
  {
    v32 = v95;
    v33 = v16;
    if ( (unsigned __int64)v95 < v16 )
    {
      v47 = v94;
      if ( *((_QWORD *)&v95 + 1) < (unsigned __int64)v16 )
      {
        v89 = v16;
        v94 = qvector_reserve();
        v32 = v95;
        v47 = v94;
        v33 = v89;
      }
      v88 = v33;
      memset((void *)(v47 + v32), 0, v33 - v32);
      *(_QWORD *)&v95 = v88;
    }
    else if ( v16 != (_QWORD)v95 )
    {
      *(_QWORD *)&v95 = v16;
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
      v36 = v7[1];
      v37 = strlen(v35);
      v38 = v37;
      v39 = v37;
      if ( v36 )
      {
        --v36;
        v39 = v37 + v36;
      }
      v40 = *v7;
      v41 = v39 + 1;
      if ( v7[2] < v39 + 1 )
      {
        v66 = qvector_reserve();
        *v7 = v66;
        v41 = v39 + 1;
        v40 = v66;
      }
      v7[1] = v41;
      *(_BYTE *)(v40 + v39) = 0;
      memmove((void *)(v36 + *v7), v35, v38);
    }
    if ( (unsigned __int64)v7[1] <= 1 )
    {
      if ( !under_debugger )
        sub_37E160(52353);
      goto LABEL_200;
    }
    v42 = *((_QWORD *)a2 + 1);
    v43 = sub_32CFA0(v42, 0);
    v44 = v43;
    if ( (a2[136] & 2) == 0 )
    {
      v70 = *((char **)a2 + 1);
      src = v70 + 1;
      v71 = *v70;
      if ( !v71 )
        sub_17F160(v42);
      v90 = v71;
      if ( v71 == 92 )
        v90 = (char)back_char();
      src = nullptr;
      v44 = v43;
      v97 = 0;
      sub_17FB60((__int64)&src, v90, v43);
      v72 = src;
      v73 = (const char *)src;
      if ( !(_QWORD)v97 )
        v73 = s1;
      v13 = strcmp(v73, *((const char **)a2 + 1));
      if ( !v13 )
      {
        if ( *((_DWORD *)a2 + 33) != v90 )
          *((_DWORD *)a2 + 34) |= 2u;
        v7[3] = *((int *)a2 + 1);
        *((_DWORD *)v7 + 8) = v90;
        *((_DWORD *)a2 + 33) = v90;
        *((_DWORD *)a2 + 30) += v43;
        if ( v72 )
        {
          *(_QWORD *)&v97 = 0;
          qfree();
        }
        goto LABEL_59;
      }
      *((_DWORD *)a2 + 34) |= 2u;
      if ( v72 )
      {
        *(_QWORD *)&v97 = 0;
        qfree();
      }
    }
    v45 = *((_DWORD *)a2 + 31);
    if ( v45 <= 0 )
      v45 = 1;
    v46 = v44 * v45;
    v13 = v46 < *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 32) = v46;
    goto LABEL_59;
  }
  if ( v17 != 6 )
  {
    *((_DWORD *)a2 + 34) &= ~0x10u;
    if ( v17 != 2 )
    {
      v11 = v94;
      v13 = -1;
      goto LABEL_10;
    }
    v19 = sub_325C90(*(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL), *((unsigned int *)a2 + 1), 0);
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
      *(_BYTE *)(v94 + v23) = v22;
    }
    goto LABEL_23;
  }
  v48 = *((_QWORD *)a2 + 12);
  v49 = *((_QWORD *)a2 + 1);
  if ( v48 == -1 )
  {
    *((_QWORD *)a2 + 12) = v49;
    v48 = v49;
  }
  if ( v48 + *((int *)a2 + 30) != v49 )
    *((_DWORD *)a2 + 34) &= ~0x10u;
  v50 = *((_DWORD *)a2 + 1);
  if ( !v50 || v18 )
  {
    v51 = *((_DWORD *)a2 + 31);
    src = nullptr;
    v97 = 0;
    if ( v51 > 0 )
    {
      if ( v51 != 1 )
      {
        if ( !(v50 % v51) )
          goto LABEL_73;
        v13 = -1;
LABEL_59:
        v11 = v94;
        goto LABEL_10;
      }
LABEL_111:
      v51 = 1;
LABEL_73:
      max_strlit_length = get_max_strlit_length();
      v53 = max_strlit_length;
      if ( max_strlit_length >= 0 )
      {
        if ( max_strlit_length )
        {
          v54 = *((_DWORD *)a2 + 1);
          if ( v54 <= max_strlit_length )
            max_strlit_length = *((_DWORD *)a2 + 1);
          if ( v54 )
            v53 = max_strlit_length;
          byte = v53 % v51;
          if ( v53 % v51 )
            goto LABEL_82;
          v93 = (void *)*(int *)(*(_QWORD *)(a1 + 96) + 648LL);
          if ( (int)get_strlit_contents() <= 0 || !v93 )
            goto LABEL_82;
          if ( (unsigned __int64)v97 <= 1 )
          {
            *((_DWORD *)a2 + 32) = 0;
LABEL_116:
            v67 = *((_DWORD *)a2 + 1);
            *((_DWORD *)a2 + 30) += byte;
            *((_DWORD *)a2 + 34) |= 2u;
            v13 = v67 > byte || v67 == 0;
LABEL_83:
            if ( src )
            {
              *(_QWORD *)&v97 = 0;
              qfree();
            }
            goto LABEL_59;
          }
          byte = sub_32CFA0(src, 0) * v51;
          if ( byte != -1 )
          {
LABEL_148:
            v75 = v97;
            *((_DWORD *)a2 + 32) = byte;
            if ( v75 )
            {
              v76 = v75 - 1;
              if ( v75 != 1 )
              {
                v77 = v7[1];
                v78 = v75 - 1;
                if ( v77 )
                {
                  --v77;
                  v78 = v76 + v77;
                  v75 += v77;
                }
                v79 = *v7;
                if ( v7[2] < v75 )
                {
                  v91 = v78;
                  v86 = qvector_reserve();
                  *v7 = v86;
                  v78 = v91;
                  v79 = v86;
                }
                v7[1] = v75;
                *(_BYTE *)(v79 + v78) = 0;
                memcpy((void *)(v77 + *v7), src, v76);
              }
            }
            goto LABEL_116;
          }
        }
        else
        {
          if ( v51 == 1 )
          {
            byte = (unsigned __int8)get_byte();
          }
          else if ( v51 == 2 )
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
      v51 = 2;
    }
    else
    {
      if ( str_type != 2 )
      {
        *((_DWORD *)a2 + 31) = 1;
        goto LABEL_111;
      }
      v51 = 4;
    }
    v85 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 31) = v51;
    if ( v85 % v51 )
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
      v56 = v94;
      v57 = v95;
      v58 = v94 + v24;
      v59 = v94 + (int)v95;
      if ( v59 < v58 )
        goto LABEL_98;
      v60 = (unsigned int *)v94;
LABEL_89:
      if ( v24 != 2 )
        goto LABEL_90;
      while ( 1 )
      {
        v61 = *(unsigned __int16 *)v60;
        while ( 2 )
        {
          v62 = *((_DWORD *)a2 + 33);
          if ( v62 )
          {
            if ( v62 == v61 )
              goto LABEL_95;
            *((_DWORD *)a2 + 34) |= 2u;
          }
          *((_DWORD *)a2 + 33) = v61;
          if ( !v61 )
          {
            v57 = (_DWORD)v60 - v56;
            goto LABEL_98;
          }
LABEL_95:
          if ( !*(_BYTE *)(v5 + 145) )
          {
            v58 += v24;
            v60 = (unsigned int *)((char *)v60 + v24);
            if ( v59 >= v58 )
              goto LABEL_89;
LABEL_98:
            v63 = 0;
            if ( !v57 )
            {
LABEL_99:
              if ( v63 != (_QWORD)v95 )
              {
                *((_DWORD *)a2 + 32) = v57;
                v11 = v94;
                v13 = 1;
                goto LABEL_10;
              }
LABEL_126:
              if ( (a2[136] & 2) != 0 )
              {
LABEL_127:
                v11 = v94;
                v13 = 0;
                goto LABEL_10;
              }
LABEL_143:
              v7[3] += v95;
              *((_DWORD *)v7 + 8) = *((_DWORD *)a2 + 33);
              goto LABEL_127;
            }
            get_default_encoding_idx();
            get_encoding_name();
            v63 = v57;
            v97 = 0;
            src = nullptr;
            if ( v57 <= (int)convert_encoding() )
            {
              qstr2user();
              sub_32CFA0(*v7, &v93);
              if ( (_BYTE)v93 )
                *((_DWORD *)a2 + 34) |= 1u;
              if ( src )
              {
                *(_QWORD *)&v97 = 0;
                qfree();
              }
              goto LABEL_99;
            }
LABEL_104:
            v11 = v94;
LABEL_41:
            v13 = -1;
            goto LABEL_10;
          }
          if ( v24 != 2 )
          {
            v58 += 4LL;
            *v60++ = _byteswap_ulong(v61);
            if ( v59 < v58 )
              goto LABEL_98;
LABEL_90:
            v61 = *v60;
            continue;
          }
          break;
        }
        v58 += 2LL;
        v60 = (unsigned int *)((char *)v60 + 2);
        *((_WORD *)v60 - 1) = __ROL2__(v61, 8);
        if ( v59 < v58 )
          goto LABEL_98;
      }
    }
    if ( !under_debugger )
      sub_37E160(52482);
LABEL_200:
    BUG();
  }
  v11 = v94;
  v25 = v95;
  v26 = (unsigned __int8 *)(v94 + v95);
  if ( v94 != v94 + (_QWORD)v95 )
  {
    v27 = (unsigned __int8 *)v94;
    while ( 1 )
    {
      v29 = *v27;
      if ( !v18 && v29 == 0xFF )
        goto LABEL_41;
      v30 = *((_DWORD *)a2 + 33);
      if ( v30 )
      {
        if ( v30 == v29 )
          goto LABEL_26;
        *((_DWORD *)a2 + 34) |= 2u;
        v29 = *v27;
      }
      if ( !v29 )
      {
        if ( (a2[136] & 1) != 0 )
        {
          v31 = v27 + 1;
          if ( v27 + 1 < v26 )
          {
            while ( !*v31 )
            {
              if ( ++v31 == v26 )
                goto LABEL_117;
            }
            goto LABEL_41;
          }
        }
LABEL_117:
        v68 = (_DWORD)v27 - v11;
        v69 = v68;
        *((_DWORD *)a2 + 32) = v68;
        if ( v25 < v68 )
        {
          if ( *((_QWORD *)&v95 + 1) < (unsigned __int64)v68 )
          {
            v25 = v95;
            v94 = qvector_reserve();
            v26 = (unsigned __int8 *)(v95 + v94);
          }
          memset(v26, 0, v69 - v25);
          *(_QWORD *)&v95 = v69;
          v8 = 1;
        }
        else
        {
          if ( v68 != v25 )
          {
            *(_QWORD *)&v95 = v68;
            src = nullptr;
            v97 = 0;
            if ( v18 || !v68 )
            {
              v8 = 1;
              goto LABEL_122;
            }
            v8 = 1;
LABEL_137:
            if ( !(unsigned __int8)idb_utf8() )
              goto LABEL_123;
            v74 = src;
            v93 = src;
            while ( *v74 )
            {
              get_utf8_char();
              if ( !(unsigned __int8)is_valid_cp() )
                goto LABEL_104;
              v74 = v93;
            }
            *(_QWORD *)&v97 = 0;
            goto LABEL_122;
          }
          v8 = 1;
        }
LABEL_136:
        src = nullptr;
        v97 = 0;
        if ( v18 )
          goto LABEL_122;
        goto LABEL_137;
      }
LABEL_26:
      if ( (unsigned __int8)(v29 - 32) > 0x5Fu && (unsigned __int8)(v29 - 9) > 1u )
        *((_DWORD *)a2 + 34) |= 1u;
      v28 = *v27++;
      *((_DWORD *)a2 + 33) = v28;
      if ( v27 == v26 )
        goto LABEL_136;
    }
  }
  src = nullptr;
  v97 = 0;
LABEL_122:
  if ( !(unsigned __int8)idb_utf8() )
  {
LABEL_123:
    if ( (a2[136] & 2) == 0 )
      goto LABEL_143;
    goto LABEL_104;
  }
  v80 = v97;
  if ( (_QWORD)v97 )
  {
    v81 = v97 - 1;
    if ( (_QWORD)v97 != 1 )
    {
      v82 = v7[1];
      v83 = v97 - 1;
      if ( v82 )
      {
        --v82;
        v83 = v81 + v82;
        v80 = v97 + v82;
      }
      v84 = *v7;
      if ( v7[2] < v80 )
      {
        v92 = v83;
        v87 = qvector_reserve();
        *v7 = v87;
        v83 = v92;
        v84 = v87;
      }
      v7[1] = v80;
      *(_BYTE *)(v84 + v83) = 0;
      memcpy((void *)(v82 + *v7), src, v81);
    }
  }
  if ( !v8 )
  {
    if ( src )
    {
      *(_QWORD *)&v97 = 0;
      qfree();
    }
    goto LABEL_126;
  }
  if ( src )
  {
    *(_QWORD *)&v97 = 0;
    qfree();
  }
  v11 = v94;
  v13 = 1;
LABEL_10:
  if ( v11 )
  {
    *(_QWORD *)&v95 = 0;
    qfree();
  }
  return v13;
}

