unsigned __int8 *__fastcall std::__detail::_Scanner<char>::_M_eat_escape_ecma(_QWORD *a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // r9
  __int64 v4; // r8
  char v5; // al
  __int64 v6; // r10
  __int64 (__fastcall *v7)(__int64, unsigned int); // r11
  char *v8; // rcx
  char v9; // dl
  unsigned __int8 *result; // rax
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rax
  unsigned __int8 *v15; // rax
  int v16; // r10d
  _QWORD *v17; // r11
  __int64 v18; // rsi
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // di
  unsigned __int8 *v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // bl
  __int64 v27; // rax
  unsigned __int8 *v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int8 v32; // r10
  __int64 v33; // rax
  unsigned __int8 *v34; // rax
  __int64 v35; // rsi
  _QWORD *v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int8 v38; // r10
  __int64 v39; // rax
  _QWORD *v40; // r9
  _QWORD *v41; // r10
  __int64 v42; // rsi
  _QWORD *v43; // rdx
  unsigned __int64 v44; // rcx
  _QWORD *v45; // [rsp+8h] [rbp-30h]
  __int64 v46; // [rsp+8h] [rbp-30h]
  unsigned __int8 v47; // [rsp+10h] [rbp-28h]
  unsigned __int8 v48; // [rsp+10h] [rbp-28h]
  _QWORD *v49; // [rsp+10h] [rbp-28h]
  _QWORD *v50; // [rsp+10h] [rbp-28h]
  _QWORD *v51; // [rsp+10h] [rbp-28h]
  _QWORD *v52; // [rsp+10h] [rbp-28h]
  __int64 v53; // [rsp+18h] [rbp-20h]
  int v54; // [rsp+18h] [rbp-20h]
  int v55; // [rsp+18h] [rbp-20h]
  _QWORD *v56; // [rsp+18h] [rbp-20h]
  unsigned __int8 v57; // [rsp+18h] [rbp-20h]
  _QWORD *v58; // [rsp+20h] [rbp-18h]
  _QWORD *v59; // [rsp+20h] [rbp-18h]
  unsigned __int8 v60; // [rsp+20h] [rbp-18h]
  _QWORD *v61; // [rsp+28h] [rbp-10h]
  _QWORD *v62; // [rsp+28h] [rbp-10h]

  v1 = (unsigned __int8 *)a1[22];
  if ( v1 == (unsigned __int8 *)a1[23] )
  {
    std::__throw_regex_error();
    goto LABEL_77;
  }
  v2 = a1[24];
  v3 = a1;
  a1[22] = v1 + 1;
  v4 = *v1;
  v5 = *(_BYTE *)(v2 + v4 + 313);
  v6 = v4;
  if ( !v5 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v2 + 64LL);
    v5 = v4;
    if ( v7 != std::ctype<char>::do_narrow )
    {
      v53 = v4;
      v48 = v4;
      v46 = v2;
      v5 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, _QWORD *))v7)(
             v2,
             (unsigned int)(char)v4,
             0,
             v2,
             v4,
             a1);
      v3 = a1;
      v4 = v53;
      v6 = v48;
      v2 = v46;
    }
    if ( v5 )
      *(_BYTE *)(v2 + v4 + 313) = v5;
  }
  v8 = (char *)v3[19];
  v9 = *v8;
  if ( !*v8 )
  {
    if ( (char)v6 <= 98 )
    {
      if ( (char)v6 > 65 )
      {
        switch ( (char)v6 )
        {
          case 'B':
            goto LABEL_59;
          case 'D':
          case 'S':
          case 'W':
            goto LABEL_58;
          case 'b':
            *((_DWORD *)v3 + 36) = 24;
            return (unsigned __int8 *)std::string::_M_replace_aux();
          default:
            goto LABEL_50;
        }
      }
      goto LABEL_50;
    }
LABEL_15:
    v11 = v6 - 99;
    if ( (unsigned __int8)(v6 - 99) > 0x15u )
      goto LABEL_50;
    v12 = 1LL << v11;
    if ( ((1LL << v11) & 0x110002) != 0 )
    {
LABEL_58:
      *((_DWORD *)v3 + 36) = 14;
      return (unsigned __int8 *)std::string::_M_replace_aux();
    }
    if ( (v12 & 0x240000) == 0 )
    {
      if ( (v12 & 1) == 0 )
        goto LABEL_50;
      v13 = v3[22];
      if ( v13 != v3[23] )
      {
        *((_DWORD *)v3 + 36) = 1;
        v3[22] = v13 + 1;
        return (unsigned __int8 *)std::string::_M_replace_aux();
      }
LABEL_77:
      std::__throw_regex_error();
    }
    v14 = (_BYTE *)v3[25];
    v3[26] = 0;
    *v14 = 0;
    v15 = (unsigned __int8 *)v3[22];
    v16 = 2 * ((_BYTE)v6 != 120) + 2;
    if ( (unsigned __int8 *)v3[23] != v15 && (*(_BYTE *)(*(_QWORD *)(v3[24] + 48LL) + 2LL * *v15 + 1) & 0x10) != 0 )
    {
      v17 = v3 + 27;
      v18 = v3[26];
      v3[22] = v15 + 1;
      v19 = (_QWORD *)v3[25];
      v20 = v3 + 27 == v19 ? 15LL : v3[27];
      v21 = *v15;
      if ( v20 < v18 + 1 )
      {
        v62 = v3 + 27;
        v54 = v16;
        v49 = v3;
        std::string::_M_mutate();
        v3 = v49;
        v17 = v62;
        v16 = v54;
        *(_BYTE *)(v49[25] + v18) = v21;
        v49[26] = v18 + 1;
        *(_BYTE *)(v49[25] + v18 + 1) = 0;
      }
      else
      {
        *((_BYTE *)v19 + v18) = v21;
        v3[26] = v18 + 1;
        *(_BYTE *)(v3[25] + v18 + 1) = 0;
      }
      v22 = (unsigned __int8 *)v3[22];
      if ( v22 != (unsigned __int8 *)v3[23] && (*(_BYTE *)(*(_QWORD *)(v3[24] + 48LL) + 2LL * *v22 + 1) & 0x10) != 0 )
      {
        v23 = v3[26];
        v3[22] = v22 + 1;
        v24 = (_QWORD *)v3[25];
        if ( v17 == v24 )
          v25 = 15;
        else
          v25 = v3[27];
        v26 = *v22;
        v27 = v23 + 1;
        if ( v25 < v23 + 1 )
        {
          v59 = v17;
          v55 = v16;
          v50 = v3;
          std::string::_M_mutate();
          v3 = v50;
          v27 = v23 + 1;
          v17 = v59;
          v16 = v55;
          v24 = (_QWORD *)v50[25];
        }
        *((_BYTE *)v24 + v23) = v26;
        v3[26] = v27;
        result = (unsigned __int8 *)v3[25];
        result[v23 + 1] = 0;
        if ( v16 == 2 )
          goto LABEL_47;
        v28 = (unsigned __int8 *)v3[22];
        if ( v28 != (unsigned __int8 *)v3[23] && (*(_BYTE *)(*(_QWORD *)(v3[24] + 48LL) + 2LL * *v28 + 1) & 0x10) != 0 )
        {
          v29 = v3[26];
          v3[22] = v28 + 1;
          v30 = (_QWORD *)v3[25];
          if ( v17 == v30 )
            v31 = 15;
          else
            v31 = v3[27];
          v32 = *v28;
          v33 = v29 + 1;
          if ( v31 < v29 + 1 )
          {
            v60 = v32;
            v56 = v17;
            v51 = v3;
            std::string::_M_mutate();
            v3 = v51;
            v33 = v29 + 1;
            v32 = v60;
            v17 = v56;
            v30 = (_QWORD *)v51[25];
          }
          *((_BYTE *)v30 + v29) = v32;
          v3[26] = v33;
          *(_BYTE *)(v3[25] + v29 + 1) = 0;
          v34 = (unsigned __int8 *)v3[22];
          if ( v34 != (unsigned __int8 *)v3[23] && (*(_BYTE *)(*(_QWORD *)(v3[24] + 48LL) + 2LL * *v34 + 1) & 0x10) != 0 )
          {
            v35 = v3[26];
            v3[22] = v34 + 1;
            v36 = (_QWORD *)v3[25];
            if ( v36 == v17 )
              v37 = 15;
            else
              v37 = v3[27];
            v38 = *v34;
            v39 = v35 + 1;
            if ( v37 < v35 + 1 )
            {
              v57 = v38;
              v52 = v3;
              std::string::_M_mutate();
              v3 = v52;
              v39 = v35 + 1;
              v38 = v57;
              v36 = (_QWORD *)v52[25];
            }
            *((_BYTE *)v36 + v35) = v38;
            v3[26] = v39;
            result = (unsigned __int8 *)v3[25];
            result[v35 + 1] = 0;
LABEL_47:
            *((_DWORD *)v3 + 36) = 3;
            return result;
          }
        }
      }
    }
    std::__throw_regex_error();
  }
  do
  {
    if ( v5 == v9 )
    {
      if ( (_BYTE)v6 != 98 || *((_DWORD *)v3 + 34) == 2 )
        *((_DWORD *)v3 + 36) = 1;
      else
LABEL_61:
        *((_DWORD *)v3 + 36) = 24;
      return (unsigned __int8 *)std::string::_M_replace_aux();
    }
    v9 = v8[2];
    v8 += 2;
  }
  while ( v9 );
  if ( (char)v6 > 98 )
    goto LABEL_15;
  if ( (char)v6 > 65 )
  {
    switch ( (char)v6 )
    {
      case 'B':
LABEL_59:
        *((_DWORD *)v3 + 36) = 24;
        return (unsigned __int8 *)std::string::_M_replace_aux();
      case 'D':
      case 'S':
      case 'W':
        goto LABEL_58;
      case 'b':
        goto LABEL_61;
      default:
        break;
    }
  }
LABEL_50:
  if ( (*(_BYTE *)(*(_QWORD *)(v3[24] + 48LL) + 2 * v6 + 1) & 8) == 0 )
  {
    *((_DWORD *)v3 + 36) = 1;
    return (unsigned __int8 *)std::string::_M_replace_aux();
  }
  v45 = v3;
  std::string::_M_replace_aux();
  v40 = v45;
  result = (unsigned __int8 *)v45[22];
  v41 = v45 + 27;
  if ( (unsigned __int8 *)v45[23] != result )
  {
    while ( (*(_BYTE *)(*(_QWORD *)(v40[24] + 48LL) + 2LL * *result + 1) & 8) != 0 )
    {
      v42 = v40[26];
      v40[22] = result + 1;
      v43 = (_QWORD *)v40[25];
      if ( v43 == v41 )
        v44 = 15;
      else
        v44 = v40[27];
      if ( v44 < v42 + 1 )
      {
        v61 = v40;
        v58 = v41;
        v47 = *result;
        std::string::_M_mutate();
        v40 = v61;
        v41 = v58;
        *(_BYTE *)(v61[25] + v42) = v47;
        v61[26] = v42 + 1;
        *(_BYTE *)(v61[25] + v42 + 1) = 0;
        result = (unsigned __int8 *)v61[22];
        if ( result == (unsigned __int8 *)v61[23] )
          break;
      }
      else
      {
        *((_BYTE *)v43 + v42) = *result;
        v40[26] = v42 + 1;
        *(_BYTE *)(v40[25] + v42 + 1) = 0;
        result = (unsigned __int8 *)v40[22];
        if ( result == (unsigned __int8 *)v40[23] )
          break;
      }
    }
  }
  *((_DWORD *)v40 + 36) = 4;
  return result;
}

