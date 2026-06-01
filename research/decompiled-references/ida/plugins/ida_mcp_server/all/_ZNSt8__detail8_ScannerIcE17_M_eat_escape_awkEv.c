unsigned __int8 *__fastcall std::__detail::_Scanner<char>::_M_eat_escape_awk(__int64 a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  char v4; // al
  unsigned __int8 v5; // r8
  __int64 (__fastcall *v6)(__int64, unsigned int); // r10
  char *v7; // rdx
  char v8; // cl
  unsigned __int8 *result; // rax
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int8 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // r9
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-38h]
  unsigned __int8 v24; // [rsp+8h] [rbp-30h]
  unsigned __int8 v25; // [rsp+8h] [rbp-30h]
  unsigned __int8 v26; // [rsp+10h] [rbp-28h]
  __int64 v27; // [rsp+10h] [rbp-28h]

  v1 = *(unsigned __int8 **)(a1 + 176);
  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 176) = v1 + 1;
  v3 = *v1;
  v4 = *(_BYTE *)(v2 + v3 + 313);
  v5 = v3;
  if ( !v4 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v2 + 64LL);
    v4 = v3;
    if ( v6 != std::ctype<char>::do_narrow )
    {
      v27 = v3;
      v25 = v3;
      v23 = v2;
      v4 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64))v6)(
             v2,
             (unsigned int)(char)v3,
             0,
             v2,
             v3);
      v3 = v27;
      v5 = v25;
      v2 = v23;
    }
    if ( v4 )
      *(_BYTE *)(v2 + v3 + 313) = v4;
  }
  v7 = *(char **)(a1 + 152);
  v8 = *v7;
  if ( *v7 )
  {
    while ( v4 != v8 )
    {
      v8 = v7[2];
      v7 += 2;
      if ( !v8 )
        goto LABEL_11;
    }
    *(_DWORD *)(a1 + 144) = 1;
    return (unsigned __int8 *)std::string::_M_replace_aux();
  }
  else
  {
LABEL_11:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2LL * v5 + 1) & 8) != 0
      && (unsigned __int8)(v5 - 56) > 1u )
    {
      std::string::_M_replace_aux();
      result = *(unsigned __int8 **)(a1 + 176);
      if ( *(unsigned __int8 **)(a1 + 184) != result )
      {
        v10 = *result;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2 * v10 + 1) & 8) != 0
          && (unsigned __int8)(v10 - 56) > 1u )
        {
          v11 = a1 + 216;
          v12 = *(_QWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 176) = result + 1;
          v13 = *(_QWORD *)(a1 + 200);
          if ( a1 + 216 == v13 )
            v14 = 15;
          else
            v14 = *(_QWORD *)(a1 + 216);
          v15 = *result;
          v16 = v12 + 1;
          if ( v14 < v12 + 1 )
          {
            v26 = v15;
            std::string::_M_mutate();
            v13 = *(_QWORD *)(a1 + 200);
            v16 = v12 + 1;
            v15 = v26;
            v11 = a1 + 216;
          }
          *(_BYTE *)(v13 + v12) = v15;
          *(_QWORD *)(a1 + 208) = v16;
          *(_BYTE *)(*(_QWORD *)(a1 + 200) + v12 + 1) = 0;
          result = *(unsigned __int8 **)(a1 + 176);
          if ( result != *(unsigned __int8 **)(a1 + 184) )
          {
            v17 = *result;
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 48LL) + 2 * v17 + 1) & 8) != 0
              && (unsigned __int8)(v17 - 56) > 1u )
            {
              v18 = *(_QWORD *)(a1 + 208);
              *(_QWORD *)(a1 + 176) = result + 1;
              v19 = *(_QWORD *)(a1 + 200);
              if ( v11 == v19 )
                v20 = 15;
              else
                v20 = *(_QWORD *)(a1 + 216);
              v21 = *result;
              v22 = v18 + 1;
              if ( v20 < v18 + 1 )
              {
                v24 = v21;
                std::string::_M_mutate();
                v19 = *(_QWORD *)(a1 + 200);
                v22 = v18 + 1;
                v21 = v24;
              }
              *(_BYTE *)(v19 + v18) = v21;
              *(_QWORD *)(a1 + 208) = v22;
              result = *(unsigned __int8 **)(a1 + 200);
              result[v18 + 1] = 0;
            }
          }
        }
      }
      *(_DWORD *)(a1 + 144) = 2;
    }
    else
    {
      std::__throw_regex_error();
      return (unsigned __int8 *)std::__detail::_Scanner<char>::_M_eat_escape_posix(2);
    }
  }
  return result;
}

