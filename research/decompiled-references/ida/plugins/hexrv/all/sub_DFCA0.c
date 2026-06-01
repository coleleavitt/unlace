__int64 __fastcall sub_DFCA0(__int64 a1, unsigned __int64 *a2, const char *a3, int a4)
{
  const char *v5; // rax
  char i; // dl
  const char *v7; // rbp
  bool v8; // zf
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  const char *v17; // rdx
  char v18; // al
  char v19; // r14
  int v20; // r13d
  const char *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  const char *v24; // rcx
  char v25; // al
  const char *v26; // r14
  char v27; // dl
  bool v28; // cl
  char v29; // r8
  const char *v30; // r15
  int v31; // edi
  __int64 v32; // rsi
  const char *v33; // rcx
  char v34; // al
  const char *v35; // rcx
  _BYTE *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // edx
  char *v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  char v42; // dl
  unsigned int v43; // edx
  int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // r15d
  int v48; // r15d
  char v49; // al
  const char *j; // rax
  __int64 v51; // rax
  int v52; // eax
  char v53; // [rsp+2h] [rbp-96h]
  bool v54; // [rsp+3h] [rbp-95h]
  int v55; // [rsp+4h] [rbp-94h]
  int v56; // [rsp+8h] [rbp-90h]
  int v57; // [rsp+Ch] [rbp-8Ch]
  char v59; // [rsp+20h] [rbp-78h]
  unsigned int v60; // [rsp+20h] [rbp-78h]
  char v61; // [rsp+24h] [rbp-74h]
  char v62; // [rsp+26h] [rbp-72h]
  bool v63; // [rsp+27h] [rbp-71h]
  const char *v64[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v65; // [rsp+38h] [rbp-60h] BYREF
  __int64 idati; // [rsp+40h] [rbp-58h] BYREF
  const char *v67; // [rsp+48h] [rbp-50h]
  __int16 v68; // [rsp+50h] [rbp-48h]
  unsigned __int64 v69; // [rsp+58h] [rbp-40h]

  v64[0] = a3;
  v69 = __readfsqword(0x28u);
  if ( a4 == 3 )
  {
    v5 = a3;
    for ( i = *a3; i; v64[0] = v7 + 1 )
    {
      if ( i == 37 )
      {
        v7 = v5 + 1;
        v8 = v5[1] == 37;
        v64[0] = v5 + 1;
        if ( !v8 )
        {
          v9 = *a2;
          v10 = a2[2];
          v65 = 25;
          if ( (unsigned __int64)&v65 < v9 || (unsigned __int64)&v65 >= v9 + 8 * v10 )
          {
            v13 = a2[1];
            if ( v10 < v13 + 1 )
            {
              v41 = qvector_reserve();
              *a2 = v41;
              v9 = v41;
              v13 = a2[1];
            }
            *(_QWORD *)(v9 + 8 * v13) = 0;
            copy_tinfo_t();
          }
          else
          {
            idati = 0;
            copy_tinfo_t();
            v11 = a2[1];
            v12 = *a2;
            if ( a2[2] < v11 + 1 )
            {
              v51 = qvector_reserve();
              *a2 = v51;
              v12 = v51;
              v11 = a2[1];
            }
            *(_QWORD *)(v12 + 8 * v11) = 0;
            copy_tinfo_t();
            clear_tinfo_t();
          }
          ++a2[1];
          clear_tinfo_t();
        }
      }
      else
      {
        v7 = v64[0];
      }
      i = v7[1];
      v5 = v7 + 1;
    }
    return 1;
  }
  v64[1] = nullptr;
  sub_326FC0(&idati, *(_QWORD *)(a1 + 112), *(unsigned int *)(*(_QWORD *)(a1 + 112) + 80LL));
  copy_tinfo_t();
  clear_tinfo_t();
  v17 = v64[0];
  v18 = *v64[0];
  if ( *v64[0] )
  {
    v19 = 0;
    v20 = -1;
    while ( 1 )
    {
      if ( v18 != 37 )
      {
        v21 = v64[0];
        goto LABEL_56;
      }
      v21 = v17 + 1;
      v22 = (unsigned int)v17[1];
      v64[0] = v21;
      if ( (_BYTE)v22 != 37 )
        break;
LABEL_56:
      v17 = v21 + 1;
      v18 = v21[1];
      v64[0] = v17;
      if ( !v18 )
        goto LABEL_57;
    }
    v55 = -1;
    v53 = v19 | (v20 == -1);
    if ( v53 )
    {
      v55 = sub_DF4D0(v64);
      if ( v55 == -1 )
      {
        if ( v20 != -1 )
          goto LABEL_53;
        v21 = v64[0];
        v53 = v19;
        v20 = 0;
        v22 = (unsigned int)*v64[0];
      }
      else
      {
        v21 = v64[0];
        v20 = 0;
        v22 = (unsigned int)*v64[0];
      }
    }
    if ( (_BYTE)v22 == 35 )
      v22 = (unsigned int)*++v21;
    if ( (unsigned __int8)v22 > 0x30u )
    {
      if ( (_BYTE)v22 != 73 )
        goto LABEL_91;
      v24 = v21;
LABEL_64:
      if ( *v24 == 73 )
      {
        if ( v24[1] == 54 && v24[2] == 52 )
          goto LABEL_120;
        if ( v24[1] == 51 && v24[2] == 50 )
        {
          LODWORD(v22) = 73;
          goto LABEL_101;
        }
      }
      LODWORD(v22) = *++v24;
LABEL_29:
      if ( (_BYTE)v22 == 42 )
      {
        v21 = v24 + 1;
        v64[0] = v24 + 1;
        if ( a4 != 1 )
          goto LABEL_31;
LABEL_107:
        v43 = v24[1];
        if ( v43 > 0x7F )
          goto LABEL_111;
        while ( v43 - 48 <= 9 )
        {
          v43 = *++v21;
          if ( v43 > 0x7F )
          {
            v64[0] = v21;
LABEL_111:
            v57 = -1;
            v56 = -1;
            v61 = 1;
            v54 = 0;
LABEL_37:
            v25 = getinf();
            v26 = v64[0];
            v27 = v25 & 0xF;
            v28 = (v25 & 0xF) == 1;
            if ( (v25 & 0xF) != 1 )
            {
              v29 = *v64[0];
              goto LABEL_39;
            }
            if ( *v64[0] == 73 && (v64[0][1] == 54 && v64[0][2] == 52 || v64[0][1] == 51 && v64[0][2] == 50) )
            {
              v30 = v64[0] + 3;
              v64[0] += 3;
              goto LABEL_40;
            }
            v29 = *v64[0];
            if ( *v64[0] == 119 )
            {
              v30 = v64[0];
              if ( (v64[0][1] & 0xDF) == 0x5A )
                goto LABEL_75;
            }
            else
            {
LABEL_39:
              v30 = v64[0];
              if ( !v29 )
                goto LABEL_40;
              v63 = v27 == 1;
              v62 = v25 & 0xF;
              v59 = v29;
              v39 = strchr("hlLjt", v29);
              v27 = v62;
              v28 = v63;
              if ( !v39 )
              {
                if ( v59 == 122 )
                {
                  if ( v62 == 1 && a4 == 1 )
                    goto LABEL_40;
                }
                else if ( v59 == 73 )
                {
                  if ( v62 != 1 )
                    goto LABEL_40;
                }
                else if ( v59 != 113 || v62 == 1 )
                {
                  v30 = v26;
                  goto LABEL_40;
                }
LABEL_75:
                v30 = v26 + 1;
                v64[0] = v26 + 1;
                goto LABEL_40;
              }
              v40 = 1;
              if ( (v59 & 0xFB) == 0x68 )
              {
                v40 = 2;
                if ( v26[1] != v59 )
                  v40 = 1;
              }
              v30 = &v26[v40];
              v64[0] = v30;
            }
LABEL_40:
            v65 = 0;
            v31 = *v30;
            if ( !v54
              || (unsigned __int8)(v31 - 91) <= 0x18u && (v32 = 16777473, _bittest64(&v32, (unsigned int)(v31 - 91))) )
            {
              switch ( (char)v31 )
              {
                case 'A':
                case 'E':
                case 'F':
                case 'G':
                case 'a':
                case 'e':
                case 'f':
                case 'g':
                  v44 = (_DWORD)v30 - (_DWORD)v26;
                  if ( (_DWORD)v30 == (_DWORD)v26 )
                  {
                    v45 = 9;
                    if ( a4 != 1 )
                      v45 = 25;
                  }
                  else
                  {
                    if ( *v26 != 108 )
                    {
                      if ( *v26 == 76 && v44 == 1 )
                      {
                        v45 = 41;
                        goto LABEL_158;
                      }
                      goto LABEL_157;
                    }
                    if ( v44 == 1 )
                    {
                      if ( a4 == 1 || (v45 = 41, !v28) )
                        v45 = 25;
                    }
                    else
                    {
                      v45 = 0;
                      if ( v44 == 2 && v26[1] == 108 )
                      {
                        if ( v27 == 1 || (v45 = 41, a4 != 1) )
LABEL_157:
                          v45 = 0;
                      }
                    }
                  }
LABEL_158:
                  idati = v45;
                  copy_tinfo_t();
                  clear_tinfo_t();
                  if ( !(_BYTE)v65 )
                    goto LABEL_52;
                  goto LABEL_149;
                case 'C':
                case 'S':
                case 'c':
                case 's':
                  v47 = (_DWORD)v30 - (_DWORD)v26;
                  if ( v47 == 1 )
                  {
                    v49 = *v26;
                    if ( *v26 != 108 && (v27 != 1 || a4 == 1 || v49 != 76 && v49 != 119) )
                    {
                      if ( v49 != 104 || !v28 )
                        goto LABEL_52;
                      tolower(v31);
LABEL_148:
                      copy_tinfo_t();
                      goto LABEL_149;
                    }
                    v48 = tolower(v31);
                  }
                  else
                  {
                    if ( v47 )
                      goto LABEL_52;
                    v48 = tolower((char)v31);
                    if ( islower((char)v31) )
                      goto LABEL_148;
                  }
                  v68 = 256;
                  v67 = "wchar_t";
                  idati = get_idati();
                  create_tinfo();
                  if ( (unsigned int)verify_tinfo() )
                    goto LABEL_148;
                  if ( v48 == 115 )
                  {
                    if ( (_BYTE)v65 )
                      v65 |= 0x40uLL;
LABEL_188:
                    sub_327290(&idati, *(_QWORD *)(a1 + 112), &v65);
                    copy_tinfo_t();
                    clear_tinfo_t();
                  }
LABEL_149:
                  if ( a4 == 1 )
                  {
LABEL_166:
                    if ( v61 )
                    {
                      if ( v54 )
                        goto LABEL_52;
                    }
                    else
                    {
                      if ( !v53 )
                        v55 = v20++;
                      sub_DFAA0(a2, v55);
                    }
                    clear_tinfo_t();
                    v21 = v64[0];
                    v19 = v53;
                  }
                  else
                  {
                    if ( *v64[0] != 109 )
                    {
LABEL_136:
                      if ( !v53 )
                        v55 = v20++;
                      sub_DFAA0(a2, v55);
                    }
LABEL_139:
                    idati = 7;
                    sub_DFAA0(a2, v56);
                    clear_tinfo_t();
                    idati = 7;
                    sub_DFAA0(a2, v57);
                    clear_tinfo_t();
                    clear_tinfo_t();
                    v21 = v64[0];
                    v19 = v53;
                  }
                  break;
                case 'D':
                  if ( a4 == 1 )
                    goto LABEL_166;
                  goto LABEL_52;
                case 'X':
                case 'd':
                case 'i':
                case 'n':
                case 'o':
                case 'u':
                case 'x':
                  v46 = *(unsigned __int8 *)(a1 + 130);
                  switch ( *v26 )
                  {
                    case 'I':
                      if ( *v26 == 73 && v26[1] == 54 && v26[2] == 52 )
                        goto LABEL_215;
                      v46 = 4;
                      goto LABEL_186;
                    case 'L':
                      if ( a4 != 1 || v28 || !strchr("dioux", (char)v31) )
                        goto LABEL_52;
                      goto LABEL_208;
                    case 'h':
                      if ( a4 == 1 && v28 && v30 != v26 + 1 )
                        goto LABEL_52;
                      goto LABEL_186;
                    case 'j':
                      v68 = 256;
                      v67 = "intmax_t";
                      idati = get_idati();
                      create_tinfo();
                      v46 = *(unsigned __int8 *)(a1 + 136);
                      goto LABEL_197;
                    case 'l':
                      if ( v26[1] == 108 )
LABEL_208:
                        v46 = *(unsigned __int8 *)(a1 + 136);
                      else
                        v46 = *(unsigned __int8 *)(a1 + 135);
                      goto LABEL_186;
                    case 'q':
LABEL_215:
                      v46 = 8;
                      goto LABEL_186;
                    case 't':
                      v68 = 256;
                      v67 = "ptrdiff_t";
                      idati = get_idati();
                      create_tinfo();
                      goto LABEL_196;
                    case 'z':
                      get_stock_tinfo();
LABEL_196:
                      v46 = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 80LL);
LABEL_197:
                      if ( !(_BYTE)v65 )
                        goto LABEL_186;
                      v60 = v46;
                      v52 = verify_tinfo();
                      v46 = v60;
                      if ( v52 )
                        goto LABEL_186;
                      goto LABEL_187;
                    default:
                      if ( v26 != v30 )
                        goto LABEL_52;
LABEL_186:
                      sub_326FC0(&idati, *(_QWORD *)(a1 + 112), v46);
                      copy_tinfo_t();
                      clear_tinfo_t();
LABEL_187:
                      if ( *v30 == 110 )
                        goto LABEL_188;
                      goto LABEL_149;
                  }
                case 'Z':
                case 'z':
                  if ( v27 != 1 || v26 != v30 && *v26 != 119 )
                    goto LABEL_52;
                  if ( a4 != 1 )
                    goto LABEL_136;
                  goto LABEL_166;
                case '[':
                  if ( a4 != 1 )
                    goto LABEL_52;
                  v33 = v30 + 1;
                  v64[0] = v30 + 1;
                  v34 = v30[1];
                  if ( v34 == 94 )
                  {
                    v33 = v30 + 2;
                    v64[0] = v30 + 2;
                    v34 = v30[2];
                  }
                  if ( v34 == 93 )
                  {
                    v34 = v33[1];
                    v64[0] = ++v33;
                    if ( v34 == 93 )
                      goto LABEL_166;
                  }
                  v35 = v33 + 1;
                  while ( 2 )
                  {
                    if ( !v34 )
                      goto LABEL_52;
                    v34 = *v35;
                    if ( *v35 != 93 )
                    {
                      ++v35;
                      continue;
                    }
                    break;
                  }
                  v64[0] = v35;
                  goto LABEL_166;
                case 'm':
                  if ( v26 != v30 || a4 == 1 )
                    goto LABEL_52;
                  goto LABEL_139;
                case 'p':
                  if ( v26 == v30 )
                    goto LABEL_148;
                  goto LABEL_52;
                default:
                  goto LABEL_52;
              }
              goto LABEL_56;
            }
LABEL_52:
            clear_tinfo_t();
LABEL_53:
            v14 = 0;
            goto LABEL_54;
          }
        }
        v42 = *v21;
        v64[0] = v21;
        if ( v42 == 46 )
          goto LABEL_53;
        v61 = 1;
LABEL_94:
        v54 = a4 == 1 && v42 == 109;
        v57 = -1;
        if ( v54 )
          v64[0] = v21 + 1;
        v56 = -1;
        goto LABEL_37;
      }
      v21 = v24;
LABEL_91:
      if ( (unsigned int)v22 > 0x7F )
      {
        v42 = *v21;
LABEL_93:
        v64[0] = v21;
        v61 = 0;
        if ( v42 != 46 )
          goto LABEL_94;
        if ( a4 == 1 )
          goto LABEL_53;
        v56 = -1;
LABEL_80:
        v38 = v21[1];
        if ( v21[1] == 42 )
        {
          v64[0] = v21 + 2;
          if ( v53 )
            v57 = sub_DF4D0(v64);
          else
            v57 = v20++;
          if ( v57 < 0 )
            goto LABEL_53;
LABEL_36:
          v61 = 0;
          v54 = 0;
          goto LABEL_37;
        }
        for ( j = v21 + 1; v38 <= 0x7F; v38 = *++j )
        {
          if ( v38 - 48 > 9 )
            break;
        }
        v64[0] = j;
LABEL_35:
        v57 = -1;
        goto LABEL_36;
      }
      v24 = v21;
LABEL_101:
      while ( (unsigned int)(v22 - 48) <= 9 )
      {
        LODWORD(v22) = *++v24;
        if ( (unsigned int)v22 > 0x7F )
        {
          v64[0] = v24;
          v57 = -1;
          v56 = -1;
          v61 = 0;
          v54 = 0;
          goto LABEL_37;
        }
      }
LABEL_120:
      v42 = *v24;
      v21 = v24;
      goto LABEL_93;
    }
    v23 = 0x1280100000000LL;
    if ( _bittest64(&v23, v22) )
    {
      LODWORD(v22) = v21[1];
      v24 = v21 + 1;
      if ( v21[1] != 39 )
        goto LABEL_28;
    }
    else
    {
      if ( (_BYTE)v22 != 39 )
      {
        if ( (_BYTE)v22 == 42 )
        {
          v24 = v21++;
          v64[0] = v21;
          if ( a4 == 1 )
            goto LABEL_107;
LABEL_31:
          if ( v53 )
            v56 = sub_DF4D0(v64);
          else
            v56 = v20++;
          if ( v56 < 0 )
            goto LABEL_53;
          v21 = v64[0];
          if ( *v64[0] != 46 )
            goto LABEL_35;
          goto LABEL_80;
        }
        LODWORD(v22) = (char)v22;
        v24 = v21;
        goto LABEL_101;
      }
      v24 = v21;
    }
    LODWORD(v22) = *++v24;
LABEL_28:
    if ( (_BYTE)v22 != 73 )
      goto LABEL_29;
    goto LABEL_64;
  }
LABEL_57:
  v36 = (_BYTE *)*a2;
  v37 = *a2 + 8 * a2[1];
  if ( *a2 != v37 )
  {
    while ( *v36 )
    {
      v36 += 8;
      if ( (_BYTE *)v37 == v36 )
        goto LABEL_222;
    }
    goto LABEL_53;
  }
LABEL_222:
  v14 = 1;
LABEL_54:
  clear_tinfo_t();
  return v14;
}

