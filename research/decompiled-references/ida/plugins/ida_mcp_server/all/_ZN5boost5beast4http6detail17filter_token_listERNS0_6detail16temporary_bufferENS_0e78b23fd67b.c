unsigned __int64 __fastcall boost::beast::http::detail::filter_token_list(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int8 *v6; // r15
  unsigned __int8 *v7; // rbp
  unsigned __int8 *i; // rdx
  unsigned __int8 v9; // cl
  _BYTE *v10; // r14
  unsigned __int8 *v11; // r13
  size_t v12; // r8
  _QWORD *v13; // r9
  _BYTE *v14; // rdx
  _BYTE *v15; // rax
  size_t j; // rcx
  bool v17; // r8
  unsigned __int8 v18; // dl
  __int64 v19; // r10
  int v20; // r8d
  int v21; // ebx
  __int64 v22; // rax
  _BYTE *v23; // rcx
  _BYTE *k; // rdx
  unsigned __int8 *v25; // rdx
  __int64 v26; // r10
  int v27; // ebx
  int v28; // ebp
  size_t v29; // rdx
  _QWORD *v30; // rcx
  char *v31; // rdi
  _QWORD *v32; // rcx
  size_t m; // rdx
  size_t v34; // r10
  _QWORD *v35; // rsi
  unsigned __int8 *v36; // rbx
  bool ii; // cl
  unsigned __int8 *v38; // r14
  size_t v39; // r8
  _BYTE *v40; // rcx
  unsigned __int8 *v41; // rdx
  _BYTE *v42; // r9
  int v43; // edi
  int v44; // r10d
  _BYTE *v45; // rcx
  unsigned __int8 *v46; // rdx
  size_t v47; // rdx
  _QWORD *v48; // rcx
  char *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // r9
  int v52; // edi
  int v53; // r10d
  unsigned __int64 v54; // rbx
  void *v55; // rax
  _QWORD *v56; // rsi
  char *v57; // rax
  unsigned __int64 v58; // r15
  void *v59; // rax
  _QWORD *v60; // rsi
  char *v61; // rax
  size_t na; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+8h] [rbp-60h]
  size_t nb; // [rsp+8h] [rbp-60h]
  size_t nc; // [rsp+8h] [rbp-60h]
  size_t nd; // [rsp+8h] [rbp-60h]
  unsigned __int8 *v67; // [rsp+10h] [rbp-58h]
  _QWORD *v68; // [rsp+10h] [rbp-58h]
  size_t v69; // [rsp+10h] [rbp-58h]
  _QWORD *v70; // [rsp+10h] [rbp-58h]
  _QWORD *v71; // [rsp+10h] [rbp-58h]
  _QWORD *v72; // [rsp+10h] [rbp-58h]
  size_t v73; // [rsp+18h] [rbp-50h]
  __int64 v74; // [rsp+18h] [rbp-50h]
  size_t v75; // [rsp+28h] [rbp-40h]
  size_t v76; // [rsp+28h] [rbp-40h]

  result = (unsigned __int64)a1;
  v6 = a2;
  v7 = &a2[a3];
  for ( i = a2; v7 != i; ++i )
  {
    while ( 1 )
    {
      v9 = *i;
      v10 = i;
      if ( *i != 32 && v9 != 9 )
        break;
      if ( v7 == ++i )
        return result;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[v9] )
    {
      v11 = i;
      while ( v7 != ++v11 )
      {
        if ( !boost::beast::http::detail::is_token_char(char)::tab[*v11] )
        {
          v12 = v11 - i;
          goto LABEL_14;
        }
      }
      v12 = v7 - i;
      if ( a2 == v7 )
        return result;
LABEL_14:
      v13 = (_QWORD *)result;
LABEL_15:
      if ( v12 != *(_QWORD *)(a4 + 8) )
        goto LABEL_37;
      v14 = *(_BYTE **)a4;
      v15 = v10;
      for ( j = v12; j; --j )
      {
        if ( *v15 != *v14 )
        {
          v19 = 0;
          v73 = v12;
          while ( 1 )
          {
            v20 = (char)v15[v19];
            if ( (unsigned int)(v20 - 65) < 0x1A )
              LOBYTE(v20) = v20 + 32;
            v21 = (char)v14[v19];
            if ( (unsigned int)(v21 - 65) < 0x1A )
              LOBYTE(v21) = v21 + 32;
            if ( (_BYTE)v21 != (_BYTE)v20 )
              break;
            if ( j == ++v19 )
              goto LABEL_20;
          }
          v12 = v73;
LABEL_37:
          v22 = *(_QWORD *)(a4 + 24);
          if ( v12 == v22 )
          {
            v23 = *(_BYTE **)(a4 + 16);
            for ( k = v10; ; ++k )
            {
              if ( !v22 )
                goto LABEL_20;
              if ( *k != *v23 )
                break;
              ++v23;
              --v22;
            }
            v26 = 0;
            v67 = v7;
            while ( 1 )
            {
              v27 = (char)k[v26];
              if ( (unsigned int)(v27 - 65) < 0x1A )
                LOBYTE(v27) = v27 + 32;
              v28 = (char)v23[v26];
              if ( (unsigned int)(v28 - 65) < 0x1A )
                LOBYTE(v28) = v28 + 32;
              if ( (_BYTE)v28 != (_BYTE)v27 )
                break;
              if ( v22 == ++v26 )
              {
                v7 = v67;
                goto LABEL_20;
              }
            }
            v7 = v67;
          }
          v29 = v13[514];
          v74 = a4;
          v30 = v13;
          if ( v13[513] - v29 < v12 )
          {
            v75 = v12;
            v54 = 2 * (v12 + v29);
            v71 = v13;
            nc = v13[514];
            v55 = (void *)operator new[](v54);
            v56 = (_QWORD *)v71[512];
            v57 = (char *)memcpy(v55, v56, nc);
            v30 = v71;
            v29 = nc;
            v12 = v75;
            v31 = v57;
            v71[512] = v57;
            if ( v71 != v56 && v56 )
            {
              operator delete[](v56);
              v30 = v71;
              v12 = v75;
              v31 = (char *)v71[512];
              v29 = v71[514];
            }
            v30[513] = v54;
          }
          else
          {
            v31 = (char *)v13[512];
          }
          v68 = v30;
          na = v12;
          result = (unsigned __int64)memcpy(&v31[v29], v10, v12);
          v32 = v68;
          for ( m = v68[514] + na; ; m = v70[514] + nb )
          {
            v32[514] = m;
            v34 = m;
            v35 = v32;
LABEL_61:
            v36 = v11;
            for ( ii = v6 != v11; ; ii = 0 )
            {
              if ( v7 == v36 )
                return result;
              while ( 1 )
              {
                result = *v36;
                if ( (_BYTE)result != 32 && (_BYTE)result != 9 )
                  break;
                if ( v7 == ++v36 )
                  return result;
              }
              if ( boost::beast::http::detail::is_token_char(char)::tab[(unsigned __int8)result] )
                break;
              if ( (_BYTE)result != 44 )
                return result;
              ++v36;
            }
            if ( ii )
              return result;
            v38 = v36;
            while ( v7 != ++v38 )
            {
              result = *v38;
              if ( !boost::beast::http::detail::is_token_char(char)::tab[result] )
              {
                v39 = v38 - v36;
                goto LABEL_75;
              }
            }
            v39 = v7 - v36;
            if ( v7 == v11 )
              return result;
LABEL_75:
            result = *(_QWORD *)(v74 + 8);
            if ( v39 == result )
              break;
LABEL_89:
            result = *(_QWORD *)(v74 + 24);
            if ( v39 == result )
            {
              v45 = *(_BYTE **)(v74 + 16);
              v46 = v36;
              while ( result )
              {
                if ( *v46 != *v45 )
                {
                  n = (size_t)v11;
                  v51 = 0;
                  v69 = v34;
                  while ( 1 )
                  {
                    v52 = (char)v46[v51];
                    if ( (unsigned int)(v52 - 65) < 0x1A )
                      LOBYTE(v52) = v52 + 32;
                    v53 = (char)v45[v51];
                    if ( (unsigned int)(v53 - 65) < 0x1A )
                      LOBYTE(v53) = v53 + 32;
                    if ( (_BYTE)v53 != (_BYTE)v52 )
                      break;
                    if ( ++v51 == result )
                      goto LABEL_100;
                  }
                  v47 = v69;
                  v48 = v35;
                  goto LABEL_96;
                }
                ++v45;
                ++v46;
                --result;
              }
LABEL_80:
              v6 = v11;
              v11 = v38;
              goto LABEL_61;
            }
            v47 = v34;
            v48 = v35;
LABEL_96:
            if ( v48[513] - v47 < v39 + 2 )
            {
              v76 = v39;
              v58 = 2 * (v47 + v39 + 2);
              v72 = v48;
              nd = v47;
              v59 = (void *)operator new[](v58);
              v60 = (_QWORD *)v72[512];
              v61 = (char *)memcpy(v59, v60, nd);
              v48 = v72;
              v47 = nd;
              v39 = v76;
              v49 = v61;
              v72[512] = v61;
              if ( v72 != v60 && v60 )
              {
                operator delete[](v60);
                v48 = v72;
                v39 = v76;
                v49 = (char *)v72[512];
                v47 = v72[514];
              }
              v48[513] = v58;
            }
            else
            {
              v49 = (char *)v48[512];
            }
            v70 = v48;
            v6 = v11;
            *(_WORD *)&v49[v47] = 8236;
            v11 = v38;
            nb = v39;
            v50 = v48[514] + 2LL;
            v48[514] = v50;
            result = (unsigned __int64)memcpy((void *)(v48[512] + v50), v36, v39);
            v32 = v70;
          }
          v40 = *(_BYTE **)v74;
          v41 = v36;
          while ( result )
          {
            if ( *v41 != *v40 )
            {
              n = (size_t)v11;
              v42 = nullptr;
              v69 = v34;
              do
              {
                v43 = (char)v42[(_QWORD)v41];
                if ( (unsigned int)(v43 - 65) < 0x1A )
                  LOBYTE(v43) = v43 + 32;
                v44 = (char)v42[(_QWORD)v40];
                if ( (unsigned int)(v44 - 65) < 0x1A )
                  LOBYTE(v44) = v44 + 32;
                if ( (_BYTE)v44 != (_BYTE)v43 )
                {
                  v34 = v69;
                  goto LABEL_89;
                }
                ++v42;
              }
              while ( v42 != (_BYTE *)result );
LABEL_100:
              v34 = v69;
              v6 = (unsigned __int8 *)n;
              v11 = v38;
              goto LABEL_61;
            }
            ++v40;
            ++v41;
            --result;
          }
          goto LABEL_80;
        }
        ++v14;
        ++v15;
      }
LABEL_20:
      result = (unsigned __int64)v11;
      v17 = v6 != v11;
      while ( v7 != (unsigned __int8 *)result )
      {
        while ( 1 )
        {
          v18 = *(_BYTE *)result;
          v10 = (_BYTE *)result;
          if ( *(_BYTE *)result != 32 && v18 != 9 )
            break;
          if ( v7 == (unsigned __int8 *)++result )
            return result;
        }
        if ( boost::beast::http::detail::is_token_char(char)::tab[v18] )
        {
          if ( v17 )
            return result;
          v25 = (unsigned __int8 *)result;
          while ( v7 != ++v25 )
          {
            if ( !boost::beast::http::detail::is_token_char(char)::tab[*v25] )
            {
              v12 = (size_t)&v25[-result];
              goto LABEL_48;
            }
          }
          v12 = (size_t)&v7[-result];
          if ( v11 == v7 )
            return result;
LABEL_48:
          v6 = v11;
          v11 = v25;
          goto LABEL_15;
        }
        if ( v18 != 44 )
          return result;
        ++result;
        v17 = 0;
      }
      return result;
    }
    if ( v9 != 44 )
      return result;
  }
  return result;
}

