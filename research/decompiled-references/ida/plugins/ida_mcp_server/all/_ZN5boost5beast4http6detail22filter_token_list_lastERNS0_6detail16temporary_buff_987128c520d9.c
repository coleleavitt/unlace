unsigned __int8 *__fastcall boost::beast::http::detail::filter_token_list_last(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v5; // rbp
  unsigned __int8 v6; // dl
  __int64 v7; // rdx
  unsigned __int8 *v8; // rdi
  unsigned __int8 *i; // r15
  unsigned __int8 v10; // al
  unsigned __int8 *v11; // r9
  unsigned __int8 *v12; // r8
  size_t v13; // rbx
  bool v14; // dl
  unsigned __int8 v15; // al
  unsigned __int8 *v16; // r13
  unsigned __int8 *v17; // rax
  size_t v18; // rdx
  char *v19; // rdi
  size_t v20; // r14
  unsigned __int8 *v21; // r9
  size_t v22; // r15
  unsigned __int8 *v23; // rbx
  bool v24; // si
  unsigned __int8 v25; // al
  char *v26; // rcx
  __int64 v27; // rax
  unsigned __int8 *v28; // r8
  char *v29; // rdi
  unsigned __int8 *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdi
  void *v33; // rax
  char *v34; // rax
  void *v35; // rax
  _QWORD *v36; // r14
  char *v37; // rax
  unsigned __int64 v38; // rbx
  void *v39; // rax
  _QWORD *v40; // rbp
  char *v41; // rax
  unsigned __int8 *v42; // [rsp+0h] [rbp-A8h]
  unsigned __int8 *v43; // [rsp+20h] [rbp-88h]
  size_t v44; // [rsp+20h] [rbp-88h]
  unsigned __int64 v45; // [rsp+20h] [rbp-88h]
  unsigned __int64 v46; // [rsp+20h] [rbp-88h]
  size_t na; // [rsp+28h] [rbp-80h]
  _QWORD *n; // [rsp+28h] [rbp-80h]
  size_t nb; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v50; // [rsp+30h] [rbp-78h]
  unsigned __int8 *v51; // [rsp+30h] [rbp-78h]
  unsigned __int8 *v52; // [rsp+38h] [rbp-70h]

  result = a2;
  v5 = &a2[a3];
  while ( result != v5 )
  {
    while ( 1 )
    {
      v6 = *result;
      if ( *result != 32 && v6 != 9 )
        break;
      if ( v5 == ++result )
        return result;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[v6] )
    {
      ++result;
      do
      {
        v8 = result;
        if ( result == v5 )
          break;
        v7 = *result++;
      }
      while ( boost::beast::http::detail::is_token_char(char)::tab[v7] );
      if ( v5 != v8 || a2 != v5 )
      {
        for ( i = a2; v5 != i; ++i )
        {
          while ( 1 )
          {
            v10 = *i;
            if ( *i != 32 && v10 != 9 )
              break;
            if ( v5 == ++i )
              goto LABEL_19;
          }
          if ( boost::beast::http::detail::is_token_char(char)::tab[v10] )
          {
            v11 = i;
            do
              ++v11;
            while ( v5 != v11 && boost::beast::http::detail::is_token_char(char)::tab[*v11] );
            v12 = v11;
            v13 = v11 - i;
            v14 = a2 != v11;
            while ( v5 != v12 )
            {
              while ( 1 )
              {
                v15 = *v12;
                v16 = v12;
                if ( *v12 != 32 && v15 != 9 )
                  break;
                if ( v5 == ++v12 )
                  goto LABEL_19;
              }
              if ( boost::beast::http::detail::is_token_char(char)::tab[v15] )
              {
                if ( v14 )
                  goto LABEL_19;
                v17 = v12;
                while ( v5 != ++v17 )
                {
                  if ( !boost::beast::http::detail::is_token_char(char)::tab[*v17] )
                  {
                    v42 = v17;
                    goto LABEL_44;
                  }
                }
                v42 = v17;
                if ( v5 == v11 )
                  goto LABEL_19;
LABEL_44:
                v18 = a1[514];
                if ( a1[513] - v18 < v13 )
                {
                  v52 = v12;
                  v51 = v11;
                  nb = a1[514];
                  v46 = 2 * (v13 + v18);
                  v35 = (void *)operator new[](v46);
                  v36 = (_QWORD *)a1[512];
                  v37 = (char *)memcpy(v35, v36, nb);
                  v18 = nb;
                  v11 = v51;
                  a1[512] = v37;
                  v12 = v52;
                  v19 = v37;
                  if ( a1 != v36 && v36 )
                  {
                    operator delete[](v36);
                    v12 = v52;
                    v11 = v51;
                    v19 = (char *)a1[512];
                    v18 = a1[514];
                  }
                  a1[513] = v46;
                }
                else
                {
                  v19 = (char *)a1[512];
                }
                v43 = v11;
                v20 = v42 - v12;
                memcpy(&v19[v18], i, v13);
                v21 = v43;
                v22 = a1[514] + v13;
                v23 = v42;
LABEL_47:
                a1[514] = v22;
                v24 = v21 != v23;
                while ( v5 != v23 )
                {
                  while ( 1 )
                  {
                    v25 = *v23;
                    if ( *v23 != 9 && v25 != 32 )
                      break;
                    if ( v5 == ++v23 )
                      goto LABEL_52;
                  }
                  if ( boost::beast::http::detail::is_token_char(char)::tab[v25] )
                  {
                    if ( v24 )
                      break;
                    v28 = v23;
                    while ( v5 != ++v28 )
                    {
                      if ( !boost::beast::http::detail::is_token_char(char)::tab[*v28] )
                        goto LABEL_65;
                    }
                    if ( v42 == v5 )
                      break;
LABEL_65:
                    if ( a1[513] - v22 < v20 + 2 )
                    {
                      v50 = v28;
                      v45 = 2 * (v22 + v20 + 2);
                      v33 = (void *)operator new[](v45);
                      n = (_QWORD *)a1[512];
                      v34 = (char *)memcpy(v33, n, v22);
                      v28 = v50;
                      a1[512] = v34;
                      v29 = v34;
                      if ( n && a1 != n )
                      {
                        operator delete[](n);
                        v29 = (char *)a1[512];
                        v28 = v50;
                        v22 = a1[514];
                      }
                      a1[513] = v45;
                    }
                    else
                    {
                      v29 = (char *)a1[512];
                    }
                    v30 = v16;
                    na = (size_t)v28;
                    *(_WORD *)&v29[v22] = 8236;
                    v16 = v23;
                    v31 = a1[514];
                    v44 = v28 - v23;
                    v32 = a1[512];
                    a1[514] = v31 + 2;
                    memcpy((void *)(v31 + 2 + v32), v30, v20);
                    v21 = v42;
                    v42 = (unsigned __int8 *)na;
                    v23 = (unsigned __int8 *)na;
                    v22 = v20 + a1[514];
                    v20 = v44;
                    goto LABEL_47;
                  }
                  if ( v25 != 44 )
                    break;
                  ++v23;
                  v24 = 0;
                }
LABEL_52:
                result = (unsigned __int8 *)boost::beast::iequals();
                if ( !(_BYTE)result )
                {
                  result = (unsigned __int8 *)boost::beast::iequals();
                  if ( !(_BYTE)result )
                  {
                    if ( a1[513] - v22 < v20 + 2 )
                    {
                      v38 = 2 * (v22 + v20 + 2);
                      v39 = (void *)operator new[](v38);
                      v40 = (_QWORD *)a1[512];
                      v41 = (char *)memcpy(v39, v40, v22);
                      a1[512] = v41;
                      v26 = v41;
                      if ( v40 && a1 != v40 )
                      {
                        operator delete[](v40);
                        v26 = (char *)a1[512];
                        v22 = a1[514];
                      }
                      a1[513] = v38;
                    }
                    else
                    {
                      v26 = (char *)a1[512];
                    }
                    *(_WORD *)&v26[v22] = 8236;
                    v27 = a1[514] + 2LL;
                    a1[514] = v27;
                    result = (unsigned __int8 *)memcpy((void *)(a1[512] + v27), v16, v20);
                    a1[514] += v20;
                  }
                }
                return result;
              }
              if ( v15 != 44 )
                goto LABEL_19;
              ++v12;
              v14 = 0;
            }
            break;
          }
          if ( v10 != 44 )
            break;
        }
LABEL_19:
        result = (unsigned __int8 *)boost::beast::iequals();
        if ( !(_BYTE)result )
        {
          result = (unsigned __int8 *)boost::beast::iequals();
          if ( !(_BYTE)result )
            return (unsigned __int8 *)boost::beast::detail::temporary_buffer::append();
        }
      }
      return result;
    }
    if ( v6 != 44 )
      return result;
    ++result;
  }
  return result;
}

