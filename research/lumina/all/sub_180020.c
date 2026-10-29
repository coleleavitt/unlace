__int64 __fastcall sub_180020(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r13
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_QWORD, _QWORD, __int64, const char *); // rax
  const char *v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int8 *v10; // rsi
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl
  char *v14; // rdx
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rsi
  char *v18; // rsi
  unsigned __int64 v19; // r14
  size_t v20; // r14
  size_t v21; // r15
  size_t v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned __int8 *v25; // rax
  __int64 v26; // rax
  char *v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  unsigned __int8 *v31; // r14
  int v32; // eax
  int v33; // r14d
  int v34; // r15d
  int v35; // eax
  int v36; // edx
  _BYTE *v37; // rax
  _BYTE *v38; // rdx
  const char *v39; // rsi
  int v40; // ebp
  __int64 v41; // rax
  const char *v42; // rbp
  __int64 (__fastcall *v43)(_QWORD, const char *); // rax
  int v44; // eax
  __int64 (__fastcall *v45)(_QWORD, _QWORD, _QWORD); // rax
  int v46; // eax
  const char *v47; // r14
  size_t v48; // rax
  size_t v49; // r15
  size_t v50; // rbp
  __int64 v51; // rdx
  size_t v52; // r14
  const char *v53; // rax
  __int64 v54; // rbp
  const char *v55; // rsi
  void *v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rax
  const char *v59; // rax
  const char *v60; // rbp
  void (__fastcall *v61)(_QWORD, const char *); // rax
  unsigned __int8 *v62; // r14
  unsigned __int8 v63; // r15
  unsigned int v64; // eax
  unsigned int v65; // ebp
  int v66; // eax
  __int64 (__fastcall *v67)(_QWORD, unsigned __int8 *, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v68; // eax
  char *s1b; // [rsp+0h] [rbp-68h]
  unsigned __int8 s1; // [rsp+0h] [rbp-68h]
  char *s1a; // [rsp+0h] [rbp-68h]
  __int64 v72; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v75; // [rsp+28h] [rbp-40h]

  v2 = a1 + 312;
  v75 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_2:
        if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 216))(v2, *(_QWORD *)(a1 + 224)) < 0 )
        {
          if ( *(_QWORD *)(a1 + 272) )
          {
            sub_17C8A0(a1);
            continue;
          }
          if ( !*(_DWORD *)(a1 + 348) )
          {
            *a2 = 34;
            return 0;
          }
          *a2 = 37;
          return 0;
        }
        v4 = (unsigned int)(*(_DWORD *)(a1 + 304) + 1);
        v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const char *))(a1 + 168);
        *(_DWORD *)(a1 + 304) = v4;
        if ( v5 )
        {
          v6 = ::s1;
          if ( *(_QWORD *)(a1 + 320) )
            v6 = *(const char **)(a1 + 312);
          v7 = v5(*(_QWORD *)(a1 + 208), *(_QWORD *)(a1 + 296), v4, v6);
          if ( v7 )
            goto LABEL_90;
        }
        v8 = *(_QWORD *)(a1 + 320);
        if ( !v8 )
          continue;
        v9 = v8 - 2;
        if ( v8 - 1 <= 1 )
          break;
LABEL_17:
        if ( v8 )
        {
LABEL_18:
          v14 = *(char **)(a1 + 312);
          if ( v14[v9] != 92 )
          {
LABEL_66:
            v27 = v14;
            if ( v14[v9] == 92 && v14[v9 - 1] == 92 )
            {
              v30 = v8 - 1;
              if ( (__int64)(v8 - 1) <= 1 )
              {
                if ( v14 )
                {
LABEL_56:
                  *(_QWORD *)(a1 + 320) = 0;
                  j__free(v27);
                  v8 = *(_QWORD *)(a1 + 320);
                  *(_QWORD *)(a1 + 312) = 0;
                  *(_QWORD *)(a1 + 328) = 0;
                }
              }
              else
              {
                if ( *(_QWORD *)(a1 + 328) < v30 )
                {
                  v41 = sub_1987B0(v2, v14, v8 - 1, 1);
                  *(_QWORD *)(a1 + 312) = v41;
                  v27 = (char *)v41;
                }
                *(_QWORD *)(a1 + 320) = v30;
                v27[v8 - 2] = 0;
                v8 = *(_QWORD *)(a1 + 320);
              }
            }
            break;
          }
          v15 = v9 - 1;
LABEL_20:
          v16 = &v14[v15];
          goto LABEL_21;
        }
        if ( !v9 )
        {
          if ( byte_241B38 != 92 )
            goto LABEL_74;
          v14 = *(char **)(a1 + 312);
          v15 = -1;
          goto LABEL_20;
        }
        v24 = v9;
        while ( 1 )
        {
          v14 = *(char **)(a1 + 312);
          if ( v14[v24] != 92 )
          {
            v9 = v24;
            goto LABEL_52;
          }
          v16 = &byte_241B38;
          v9 = 1;
          v8 = v24 - 1;
          if ( v24 != 1 )
          {
            v15 = v24 - 1;
            v9 = v24;
            v8 = 0;
            goto LABEL_20;
          }
LABEL_21:
          if ( *v16 == 92 )
            goto LABEL_64;
          v17 = *(_QWORD *)(a1 + 224);
          src = nullptr;
          *(_OWORD *)n = 0;
          if ( (*(__int64 (__fastcall **)(void **, __int64))(a1 + 216))(&src, v17) < 0 )
            break;
          v8 = *(_QWORD *)(a1 + 320);
          ++*(_DWORD *)(a1 + 304);
          v18 = *(char **)(a1 + 312);
          v19 = v8 - 1;
          if ( (__int64)(v8 - 1) <= 1 )
          {
            if ( v18 )
            {
              *(_QWORD *)(a1 + 320) = 0;
              j__free(v18);
              *(_QWORD *)(a1 + 312) = 0;
              v8 = *(_QWORD *)(a1 + 320);
              *(_QWORD *)(a1 + 328) = 0;
            }
          }
          else
          {
            if ( *(_QWORD *)(a1 + 328) < v19 )
            {
              v26 = sub_1987B0(v2, v18, v8 - 1, 1);
              *(_QWORD *)(a1 + 312) = v26;
              v18 = (char *)v26;
            }
            *(_QWORD *)(a1 + 320) = v19;
            v18[v8 - 2] = 0;
            v8 = *(_QWORD *)(a1 + 320);
          }
          v20 = n[0];
          if ( n[0] )
          {
            v21 = n[0] - 1;
            if ( n[0] != 1 )
            {
              v22 = n[0] - 1;
              if ( v8 )
              {
                --v8;
                v22 = v21 + v8;
                v20 = n[0] + v8;
              }
              v23 = *(_QWORD *)(a1 + 312);
              if ( *(_QWORD *)(a1 + 328) < v20 )
              {
                s1b = (char *)v22;
                v29 = sub_1987B0(v2, v23, v20, 1);
                *(_QWORD *)(a1 + 312) = v29;
                v22 = (size_t)s1b;
                v23 = v29;
              }
              *(_QWORD *)(a1 + 320) = v20;
              *(_BYTE *)(v23 + v22) = 0;
              memcpy((void *)(v8 + *(_QWORD *)(a1 + 312)), src, v21);
              v8 = *(_QWORD *)(a1 + 320);
            }
          }
          if ( v8 )
          {
            v9 = v8 - 2;
            if ( !src )
              goto LABEL_18;
            n[0] = 0;
            j__free(src);
            v8 = *(_QWORD *)(a1 + 320);
            goto LABEL_17;
          }
          if ( !src )
          {
            v14 = *(char **)(a1 + 312);
            v15 = -2;
            v9 = -1;
            if ( *(v14 - 1) == 92 )
              goto LABEL_20;
            goto LABEL_52;
          }
          n[0] = 0;
          v9 = -1;
          j__free(src);
          v8 = *(_QWORD *)(a1 + 320);
          v24 = -1;
          if ( v8 )
            goto LABEL_18;
        }
        if ( src )
        {
          n[0] = 0;
          j__free(src);
        }
        v8 = *(_QWORD *)(a1 + 320);
LABEL_64:
        if ( v8 )
        {
          v14 = *(char **)(a1 + 312);
          goto LABEL_66;
        }
        if ( v9 )
        {
          v14 = *(char **)(a1 + 312);
LABEL_52:
          v27 = v14;
          if ( v14[v9] == 92 )
          {
            v28 = v9 - 1;
            if ( v28 )
              goto LABEL_76;
            if ( byte_241B38 == 92 )
              goto LABEL_55;
          }
          continue;
        }
LABEL_74:
        if ( byte_241B38 == 92 )
        {
          v27 = *(char **)(a1 + 312);
          v28 = -1;
LABEL_76:
          if ( v27[v28] == 92 )
          {
LABEL_55:
            if ( v27 )
              goto LABEL_56;
          }
        }
      }
      if ( v8 <= 1 )
        goto LABEL_2;
      v10 = *(unsigned __int8 **)(a1 + 312);
      *(_QWORD *)(a1 + 8) = v10;
      v11 = *v10;
      if ( (unsigned __int8)(*v10 - 9) <= 4u || v11 == 32 )
      {
        v25 = v10 + 1;
        do
        {
          do
          {
            *(_QWORD *)(a1 + 8) = v25;
            v11 = *v25;
            v10 = v25++;
          }
          while ( (unsigned __int8)(v11 - 9) <= 4u );
        }
        while ( v11 == 32 );
      }
      v12 = (*(_BYTE *)(a1 + 144) ^ 1) & (v11 == 35);
      if ( !v12 )
      {
        if ( *(_DWORD *)(a1 + 340) )
        {
          sub_17D780(a1, v10);
          goto LABEL_2;
        }
        *a2 = 0;
        return *(_QWORD *)(a1 + 8);
      }
      s1 = v12;
      *(_QWORD *)(a1 + 8) = v10 + 1;
      v31 = sub_17DAC0(a1);
      sub_17D780(a1, *(unsigned __int8 **)(a1 + 8));
      if ( strcmp((const char *)v31, "else") )
        break;
      if ( !*(_DWORD *)(a1 + 348) )
        goto LABEL_97;
      if ( !*(_DWORD *)(a1 + 344) )
      {
        v32 = *(_DWORD *)(a1 + 340);
        if ( v32 <= 1 )
          *(_DWORD *)(a1 + 340) = v32 == 0;
      }
    }
    if ( !strcmp((const char *)v31, "elif") )
      break;
    if ( *v31 == 105 && v31[1] == 102 && !v31[2] )
    {
      v33 = *(_DWORD *)(a1 + 340);
      ++*(_DWORD *)(a1 + 348);
      if ( v33 )
      {
LABEL_95:
        ++*(_DWORD *)(a1 + 344);
        goto LABEL_2;
      }
      goto LABEL_105;
    }
    if ( !strcmp((const char *)v31, "ifdef") )
    {
      v34 = 1;
LABEL_110:
      v39 = (const char *)sub_17DAC0(a1);
      if ( !*v39 )
        goto LABEL_130;
      v40 = *(_DWORD *)(a1 + 340);
      ++*(_DWORD *)(a1 + 348);
      if ( v40 )
        goto LABEL_95;
      if ( (sub_17EC70(a1, v39) != nullptr) != v34 )
        *(_DWORD *)(a1 + 340) = 1;
    }
    else
    {
      v34 = strcmp((const char *)v31, "ifndef");
      if ( !v34 )
        goto LABEL_110;
      if ( !strcmp((const char *)v31, "endif") )
      {
        v35 = *(_DWORD *)(a1 + 348);
        if ( !v35 )
        {
          *a2 = 36;
          return 0;
        }
        v36 = *(_DWORD *)(a1 + 344);
        if ( v36 )
          *(_DWORD *)(a1 + 344) = v36 - 1;
        else
          *(_DWORD *)(a1 + 340) = 0;
        *(_DWORD *)(a1 + 348) = v35 - 1;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 340) )
          goto LABEL_2;
        if ( !strcmp((const char *)v31, "pragma") )
        {
          v42 = *(const char **)(a1 + 8);
          if ( strcmp(v42, "once") )
          {
            v43 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 176);
            if ( !v43 )
              goto LABEL_2;
            v44 = v43(*(_QWORD *)(a1 + 208), v42);
            *a2 = v44;
            if ( !v44 )
              goto LABEL_2;
            return 0;
          }
          v47 = *(const char **)(a1 + 296);
          src = nullptr;
          *(_OWORD *)n = 0;
          if ( v47 )
          {
            v48 = strlen(v47);
            v49 = v48 + 1;
            v50 = v48;
            src = (void *)sub_1987B0(&src, 0, v48 + 1, 1);
            n[0] = v49;
            memmove(src, v47, v50);
            *((_BYTE *)src + v50) = 0;
          }
          v51 = *(_QWORD *)(a1 + 240);
          v52 = n[0];
          v53 = ::s1;
          v54 = v51 + 24LL * *(_QWORD *)(a1 + 248);
          if ( n[0] )
            v53 = (const char *)src;
          s1a = (char *)v53;
          while ( v54 != v51 )
          {
            v55 = ::s1;
            if ( *(_QWORD *)(v51 + 8) )
              v55 = *(const char **)v51;
            v72 = v51;
            if ( !strcmp(s1a, v55) )
              goto LABEL_146;
            v51 = v72 + 24;
          }
          v56 = nullptr;
          if ( v52 )
          {
            v56 = (void *)sub_198760(v52);
            memcpy(v56, src, v52);
          }
          v57 = *(_QWORD *)(a1 + 248);
          if ( *(_QWORD *)(a1 + 256) < (unsigned __int64)(v57 + 1) )
          {
            *(_QWORD *)(a1 + 240) = sub_1987B0(a1 + 240, *(_QWORD *)(a1 + 240), v57 + 1, 24);
            v57 = *(_QWORD *)(a1 + 248);
          }
          v58 = *(_QWORD *)(a1 + 240) + 24 * v57;
          *(_QWORD *)v58 = v56;
          *(__m128i *)(v58 + 8) = _mm_unpacklo_epi64((__m128i)v52, (__m128i)v52);
          ++*(_QWORD *)(a1 + 248);
LABEL_146:
          if ( src )
          {
            n[0] = 0;
            j__free(src);
          }
        }
        else
        {
          if ( !strcmp((const char *)v31, "warning") )
          {
            v45 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 184);
            if ( !v45 )
              goto LABEL_2;
            v46 = v45(*(_QWORD *)(a1 + 208), *(_QWORD *)(a1 + 8), s1);
            *a2 = v46;
            if ( !v46 )
              goto LABEL_2;
            return 0;
          }
          if ( !strcmp((const char *)v31, "softinclude")
            || !strcmp((const char *)v31, "include_next")
            || !strcmp((const char *)v31, "include")
            || !strcmp((const char *)v31, "import") )
          {
            v7 = sub_1841F0(a1);
            if ( !v7 )
              goto LABEL_2;
LABEL_90:
            *a2 = v7;
            return 0;
          }
          if ( !strcmp((const char *)v31, "define") )
          {
            v62 = sub_17DAC0(a1);
            if ( *v62 )
            {
              v63 = *(_BYTE *)(a1 + 580) == 40;
              v64 = sub_17DC10(a1);
              v65 = v64;
              if ( v64 == -2 )
                goto LABEL_2;
              if ( v64 != -1 )
              {
                v66 = sub_17FC20(a1, (const char *)v62, *(_BYTE **)(a1 + 8), v64, v63, (bool *)&src);
                *a2 = v66;
                if ( !v66 )
                {
                  v67 = *(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 192);
                  if ( !v67 )
                    goto LABEL_2;
                  v68 = v67(*(_QWORD *)(a1 + 208), v62, *(_QWORD *)(a1 + 8), v65, v63, (unsigned __int8)src);
                  *a2 = v68;
                  if ( !v68 )
                    goto LABEL_2;
                  return 0;
                }
                return 0;
              }
            }
LABEL_130:
            *a2 = 29;
            return 0;
          }
          if ( strcmp((const char *)v31, "undef") )
          {
            if ( !strcmp((const char *)v31, "error") )
            {
              *a2 = 41;
              sub_18FAC0(0, *(_QWORD *)(a1 + 8));
              return 0;
            }
            goto LABEL_130;
          }
          v59 = (const char *)sub_17DAC0(a1);
          v60 = v59;
          if ( !*v59 )
            goto LABEL_130;
          sub_17F4B0(a1, v59);
          v61 = *(void (__fastcall **)(_QWORD, const char *))(a1 + 200);
          if ( v61 )
            v61(*(_QWORD *)(a1 + 208), v60);
        }
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 348) )
  {
LABEL_97:
    *a2 = 35;
    return 0;
  }
  if ( *(_DWORD *)(a1 + 344) )
    goto LABEL_2;
  if ( (*(_BYTE *)(a1 + 340) & 1) == 0 )
  {
    *(_DWORD *)(a1 + 340) = 2;
    goto LABEL_2;
  }
LABEL_105:
  v37 = *(_BYTE **)(a1 + 8);
  do
  {
    v38 = v37--;
    *(_QWORD *)(a1 + 8) = v37;
  }
  while ( *v37 );
  *(v38 - 1) = *(_BYTE *)(a1 + 580);
  src = &dword_0 + 1;
  n[0] = 0;
  if ( !(unsigned int)sub_183D50(a1, &src) )
  {
    *(_DWORD *)(a1 + 340) = n[0] == 0;
    goto LABEL_2;
  }
  *a2 = sub_18FA20(a1, &src);
  return 0;
}
