__int64 __fastcall sub_FFAD0(__int64 a1, char *a2, int a3, char *a4)
{
  int v5; // r12d
  char *v7; // rbx
  const char *v8; // rsi
  int v9; // r14d
  int v10; // eax
  int v11; // r13d
  int v12; // ecx
  unsigned int v13; // r13d
  bool v14; // dl
  unsigned int v16; // r14d
  __int64 v17; // r13
  int v18; // r14d
  size_t v19; // rbp
  int v20; // eax
  int v21; // edx
  char *v22; // rax
  __int64 v23; // rsi
  char *v24; // rsi
  char v25; // r8
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rcx
  int v29; // edi
  char *v30; // rdi
  char v31; // dl
  int v32; // eax
  int v33; // ecx
  __int64 v34; // rdi
  char v35; // r8
  int v36; // r8d
  __int64 i; // rdi
  int v38; // eax
  int v39; // r8d
  int v40; // eax
  int v41; // edx
  char *v42; // rax
  __int64 v43; // r15
  char *v44; // r15
  int v45; // edx
  bool stat_buf; // [rsp+0h] [rbp-100h]
  unsigned int stat_bufa; // [rsp+0h] [rbp-100h]
  size_t len; // [rsp+10h] [rbp-F0h]
  const char *v50; // [rsp+18h] [rbp-E8h]
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+24h] [rbp-DCh]
  int v53; // [rsp+24h] [rbp-DCh]
  struct stat64 v54; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v55; // [rsp+C0h] [rbp-40h]

  v5 = 0;
  len = a3 - 1;
  v55 = __readfsqword(0x28u);
  v7 = nullptr;
  v50 = a4 + 1;
  v51 = a3 - 2;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (const char *)&v54;
        v9 = off_2413F0(a2, &v54);
        if ( v9 )
        {
          if ( *__errno_location() == 2 )
          {
            v14 = 1;
            v16 = 0;
          }
          else
          {
            sub_E8BB0(
              0xEu,
              "%s at line %d of [%.10s]",
              "cannot open file",
              41870,
              "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
            v8 = "lstat";
            v16 = sub_EABB0(0xEu, (__int64)"lstat", a2, 0xA38Eu);
            v14 = v16 == 0;
          }
          if ( a2 == a4 || !v14 )
          {
            v13 = v16;
            goto LABEL_12;
          }
          goto LABEL_19;
        }
        if ( (v54.st_mode & 0xF000) != 0xA000 )
          break;
        ++v5;
        if ( v7 )
        {
          if ( v5 > 99 )
          {
            v8 = "%s at line %d of [%.10s]";
            sub_E8BB0(
              0xEu,
              "%s at line %d of [%.10s]",
              "cannot open file",
              41882,
              "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
            v38 = 14;
            goto LABEL_59;
          }
        }
        else
        {
          v7 = (char *)sub_FFAA0((unsigned int)a3, (__int64)&v54);
          if ( !v7 )
          {
            v38 = 7;
            goto LABEL_59;
          }
        }
        v10 = off_2413D8(a2, v7, len);
        v11 = v10;
        v12 = v10;
        if ( v10 < 0 )
        {
          sub_E8BB0(
            0xEu,
            "%s at line %d of [%.10s]",
            "cannot open file",
            41888,
            "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
          v8 = "readlink";
          v38 = sub_EABB0(0xEu, (__int64)"readlink", a2, 0xA3A0u);
          if ( v38 || (v17 = (__int64)v7, v18 = 1, v7 == a4) )
          {
            if ( v38 )
              goto LABEL_59;
            goto LABEL_86;
          }
          goto LABEL_21;
        }
        if ( *v7 == 47 )
        {
          v7[v10] = 0;
          if ( v7 != a4 )
          {
            v17 = (__int64)v7;
            v18 = 1;
            goto LABEL_21;
          }
          a2 = a4;
        }
        else
        {
          v39 = v10;
          if ( !a2 )
            goto LABEL_68;
          v52 = v10;
          v40 = strlen(a2);
          v12 = v52;
          v9 = v40 & 0x3FFFFFFF;
          if ( (v40 & 0x3FFFFFFF) == 0 )
          {
            v39 = v52;
LABEL_68:
            if ( v39 + 1 > a3 )
              goto LABEL_69;
            goto LABEL_79;
          }
          if ( a2[v9 - 1] == 47 )
          {
LABEL_67:
            v39 = v9 + v11;
            goto LABEL_68;
          }
          v41 = v9 - 1;
          v42 = &a2[v9 - 2];
          while ( 1 )
          {
            v9 = v41;
            if ( !v41 )
              break;
            if ( *v42-- == 47 )
              goto LABEL_67;
            --v41;
          }
          v39 = v11;
          if ( v11 + 1 > a3 )
          {
LABEL_69:
            v8 = "%s at line %d of [%.10s]";
            v43 = v12;
            sub_E8BB0(
              0xEu,
              "%s at line %d of [%.10s]",
              "cannot open file",
              41894,
              "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
            v7[v43] = 0;
            v38 = 14;
            goto LABEL_59;
          }
LABEL_79:
          v45 = v11 + 1;
          v53 = v39;
          v17 = (__int64)v7;
          memmove(&v7[v9], v7, v45);
          memcpy(v7, a2, v9);
          v18 = 1;
          v7[v53] = 0;
          if ( v7 != a4 )
            goto LABEL_21;
          a2 = a4;
        }
      }
      if ( a2 == a4 )
      {
        v13 = v9;
        v14 = 1;
        goto LABEL_12;
      }
LABEL_19:
      v17 = (__int64)v7;
      if ( !a2 )
      {
        v7 = nullptr;
        v18 = 0;
        LODWORD(v19) = 0;
        goto LABEL_22;
      }
      v7 = a2;
      v18 = 0;
LABEL_21:
      v19 = strlen(v7) & 0x3FFFFFFF;
      if ( *v7 == 47 )
      {
        v21 = 0;
        v24 = a4;
        if ( a3 < (int)v19 + 1 )
          goto LABEL_72;
        goto LABEL_26;
      }
LABEL_22:
      if ( off_2411B0(a4, v51) )
        break;
      sub_E8BB0(
        0xEu,
        "%s at line %d of [%.10s]",
        "cannot open file",
        41778,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      v8 = "getcwd";
      v38 = sub_EABB0(0xEu, (__int64)"getcwd", v7, 0xA332u);
      if ( !v18 )
      {
        v7 = (char *)v17;
        v13 = v38;
        v14 = v38 == 0;
        goto LABEL_12;
      }
      v7 = (char *)v17;
      if ( v38 )
        goto LABEL_59;
LABEL_86:
      a2 = a4;
    }
    if ( a4 )
    {
      v20 = strlen(a4) & 0x3FFFFFFF;
      v21 = v20 + 1;
      v22 = &a4[v20];
      v23 = v21;
    }
    else
    {
      v22 = nullptr;
      v23 = 1;
      v21 = 1;
    }
    *v22 = 47;
    v24 = &a4[v23];
    if ( a3 < (int)v19 + v21 + 1 )
    {
LABEL_72:
      *v24 = 0;
      v8 = "%s at line %d of [%.10s]";
      sub_E8BB0(
        0xEu,
        "%s at line %d of [%.10s]",
        "cannot open file",
        41787,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      v7 = (char *)v17;
      v38 = 14;
      if ( !v18 )
      {
        sub_C91C0(v17, (__int64)"%s at line %d of [%.10s]");
        return 14;
      }
LABEL_59:
      stat_bufa = v38;
      sub_C91C0((__int64)v7, (__int64)v8);
      return stat_bufa;
    }
LABEL_26:
    sub_E89C0(a3 - v21, (__int64)v24, "%s", v7);
    v25 = a4[1];
    v8 = v50;
    if ( v25 )
    {
      v26 = 1;
      v27 = 1;
      v28 = 1;
      do
      {
        a4[v26] = v25;
        v29 = v26 + 1;
        if ( a4[v28] == 47 && a4[v28 + 1] == 47 )
        {
          do
            ++v27;
          while ( a4[v27] == 47 && a4[v27 + 1] == 47 );
        }
        ++v27;
        v26 = v29;
        v28 = v27;
        v25 = a4[v27];
      }
      while ( v25 );
      v30 = &a4[v29];
    }
    else
    {
      v30 = (char *)v50;
    }
    *v30 = 0;
    v31 = *a4;
    if ( *a4 )
      break;
LABEL_74:
    *a4 = 47;
    *v50 = 0;
    if ( !v18 )
      goto LABEL_75;
LABEL_57:
    v7 = (char *)v17;
    a2 = a4;
  }
  v32 = 0;
  v33 = 0;
  v34 = 0;
  while ( 2 )
  {
    if ( v31 != 47 || a4[v34 + 1] != 46 )
      goto LABEL_37;
    v35 = a4[v34 + 2];
    if ( v35 == 47 )
    {
      ++v33;
      goto LABEL_40;
    }
    if ( v35 != 46 || a4[v34 + 3] != 47 || v32 <= 0 )
    {
LABEL_37:
      if ( v32 >= 0 )
        goto LABEL_38;
      goto LABEL_39;
    }
    v36 = v32 - 1;
    if ( v32 == 1 )
      goto LABEL_38;
    i = v36;
    if ( a4[v36 - 1] == 47 )
    {
LABEL_53:
      if ( a4[i] == 46 && v32 - 2 == v36 && a4[i + 1] == 46 )
        goto LABEL_38;
      v32 = v36 - 1;
      v33 += 2;
    }
    else
    {
      for ( i = v32 - 2; --v36; --i )
      {
        if ( a4[i - 1] == 47 )
          goto LABEL_53;
      }
LABEL_38:
      a4[v32] = v31;
LABEL_39:
      ++v32;
    }
LABEL_40:
    v34 = ++v33;
    v31 = a4[v33];
    if ( v31 )
      continue;
    break;
  }
  if ( !v32 )
    goto LABEL_74;
  v8 = &a4[v32];
  *v8 = 0;
  if ( v18 )
    goto LABEL_57;
LABEL_75:
  v44 = (char *)v17;
  v14 = 1;
  v13 = v18;
  v7 = v44;
LABEL_12:
  stat_buf = v14;
  sub_C91C0((__int64)v7, (__int64)v8);
  if ( v5 && stat_buf )
    return 512;
  else
    return v13;
}
