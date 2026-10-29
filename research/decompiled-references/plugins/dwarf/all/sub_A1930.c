unsigned __int64 __fastcall sub_A1930(__int64 a1)
{
  __int64 *v2; // rdi
  const char *v3; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r12
  int v7; // eax
  int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // rbp
  int v11; // eax
  int v12; // eax
  int v13; // edx
  __int64 v14; // rsi
  _QWORD *v15; // rbx
  __int64 v16; // rax
  int v18; // eax
  int v19; // edx
  void *v20; // rdi
  size_t v21; // r13
  const char *v22; // r12
  char *v23; // rdx
  int v24; // eax
  char *v25; // rdx
  int v26; // r12d
  char *v27; // rdi
  int v28; // eax
  int v29; // eax
  char *v30; // rax
  const char *v31; // rbp
  int v32; // eax
  char *v33; // rax
  int v34; // eax
  char *v35; // rax
  const char *v36; // rbp
  int v37; // eax
  char *v38; // rax
  int v39; // eax
  char *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  char *v43; // rax
  char *v44; // rdi
  char *v45; // rdi
  int v46; // [rsp+4h] [rbp-84h] BYREF
  __int64 v47; // [rsp+8h] [rbp-80h] BYREF
  __int64 (__fastcall **v48)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int64); // [rsp+10h] [rbp-78h] BYREF
  int v49; // [rsp+18h] [rbp-70h]
  __int64 v50; // [rsp+20h] [rbp-68h]
  __int64 v51; // [rsp+28h] [rbp-60h]
  _QWORD *v52; // [rsp+30h] [rbp-58h]
  __int64 v53; // [rsp+38h] [rbp-50h]
  __int128 v54; // [rsp+40h] [rbp-48h]
  unsigned __int64 v55; // [rsp+58h] [rbp-30h]

  v55 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 88);
  if ( !v2 || *(_QWORD *)(a1 + 104) > 1u )
  {
    if ( !under_debugger )
      interr(30428);
LABEL_121:
    BUG();
  }
  v3 = (const char *)sub_965E0(v2, 37);
  v4 = v3;
  if ( !v3 )
  {
    v7 = *(_DWORD *)(a1 + 124);
    goto LABEL_8;
  }
  v5 = strlen(v3);
  v6 = v5;
  if ( v5 )
  {
    v20 = *(void **)(a1 + 96);
    v21 = v5 + 1;
    if ( *(_QWORD *)(a1 + 112) < v5 + 1 )
    {
      v42 = qvector_reserve(a1 + 96, *(_QWORD *)(a1 + 96), v21, 1);
      *(_QWORD *)(a1 + 96) = v42;
      v20 = (void *)v42;
    }
    *(_QWORD *)(a1 + 104) = v21;
    memmove(v20, v4, v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 96) + v6) = 0;
    if ( !*(_QWORD *)(a1 + 104) )
      goto LABEL_6;
    v22 = *(const char **)(a1 + 96);
    if ( strstr(v22, "GNU") )
    {
      v23 = strstr(v22, " Go ");
      v24 = 8;
      if ( !v23 )
      {
        v25 = strstr(v22, " Ada ");
        v24 = 3;
        if ( !v25 )
          v24 = 1 - ((strstr(v22, " AS ") == nullptr) - 1);
      }
      *(_DWORD *)(a1 + 124) = v24;
      v26 = strncmp(v4, "GNU ", 4u);
      if ( v26 || (v27 = strchr(v4 + 4, 32)) == nullptr )
      {
        *(_DWORD *)(a1 + 120) = 0;
        goto LABEL_12;
      }
      while ( *v27 && (unsigned __int8)(*v27 - 48) > 9u )
        ++v27;
      v28 = qsscanf(v27, "%d.%d.%d", &v46, &v47, &v48);
      if ( v28 > 2 )
      {
        v26 = (int)v48;
        v29 = 10 * v47;
        goto LABEL_98;
      }
      if ( v28 == 2 )
      {
        v29 = 10 * v47;
        goto LABEL_98;
      }
      v8 = 0;
      if ( v28 )
      {
        v29 = 0;
LABEL_98:
        v8 = v26 + v29 + 1000 * v46;
      }
LABEL_80:
      v7 = *(_DWORD *)(a1 + 124);
      goto LABEL_7;
    }
    if ( strstr(v22, "RVCT") )
    {
      if ( strstr(v22, "ARM") )
      {
        *(_DWORD *)(a1 + 124) = 5;
        v30 = strstr(v4, "RVCT");
        v31 = v30;
        if ( v30 )
        {
          LODWORD(v48) = 0;
          v32 = qsscanf(v30 + 4, "%d.%d", &v46, &v47);
          v8 = 0;
          if ( v32 == 2 )
          {
            v33 = strstr(v31, "Build ");
            if ( v33 )
              qsscanf(v33 + 6, "%d", &v48);
            v8 = (_DWORD)v48 + 10000 * v47 + 1000000 * v46;
          }
          goto LABEL_80;
        }
        goto LABEL_106;
      }
    }
    else if ( strstr(v22, "Thumb C") || strstr(v22, "ARM C") )
    {
      *(_DWORD *)(a1 + 124) = 4;
      v35 = strstr(v4, "ADS");
      if ( v35 )
      {
        v36 = v35 + 3;
      }
      else
      {
        v43 = strstr(v4, "Compiler, ");
        if ( !v43 )
        {
          v44 = strstr(v4, "Component:");
          if ( !v44 )
            goto LABEL_106;
          v45 = strchr(v44, 91);
          if ( !v45 )
            goto LABEL_106;
          if ( (unsigned int)qsscanf(v45, "[%d]", &v48) == 1 )
          {
            v8 = (int)v48;
            goto LABEL_80;
          }
          goto LABEL_102;
        }
        v36 = v43 + 10;
      }
      LODWORD(v48) = 0;
      v37 = qsscanf(v36, "%d.%d", &v46, &v47);
      v8 = 0;
      if ( v37 == 2 )
      {
        v38 = strstr(v36, "Build ");
        if ( v38 )
          v39 = qsscanf(v38 + 6, "%d", &v48);
        else
          v39 = (int)v48;
        v8 = v39 + 10000 * v47 + 1000000 * v46;
      }
      goto LABEL_80;
    }
    if ( !strstr(v22, "clang") )
    {
      if ( !strstr(v22, "ICCARM") )
      {
        if ( strstr(v22, "rustc") )
        {
          *(_DWORD *)(a1 + 124) = 9;
          v34 = qsscanf(v4, "rustc version %d.%d.%d", &v46, &v47, &v48);
        }
        else
        {
          if ( !strstr(v22, "Free Pascal") )
            goto LABEL_6;
          *(_DWORD *)(a1 + 124) = 10;
          v34 = qsscanf(v4, "Free Pascal %d.%d.%d", &v46, &v47, &v48);
        }
        v8 = 0;
        if ( v34 == 3 )
          v8 = (_DWORD)v48 + 100 * v46 + 10 * v47;
        goto LABEL_80;
      }
      *(_DWORD *)(a1 + 124) = 7;
LABEL_106:
      v41 = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 120) = 0;
      v10 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
      goto LABEL_14;
    }
    *(_DWORD *)(a1 + 124) = 6;
    LODWORD(v48) = 0;
    if ( (unsigned int)qsscanf(v4, "clang %d.%d", &v46, &v47) == 2 )
    {
      v8 = 100 * v47 + 10000 * v46;
      goto LABEL_80;
    }
    v40 = strstr(v4, "(clang");
    if ( v40 && (unsigned int)qsscanf(v40, "(clang-%d.%d.%d)", &v46, &v47, &v48) == 3 && v46 > 99 )
    {
      v8 = (_DWORD)v48 + 100 * (v47 + v46);
      goto LABEL_80;
    }
LABEL_102:
    v8 = 0;
    goto LABEL_80;
  }
  *(_QWORD *)(a1 + 104) = 0;
LABEL_6:
  v7 = *(_DWORD *)(a1 + 124);
  v8 = 0;
LABEL_7:
  *(_DWORD *)(a1 + 120) = v8;
LABEL_8:
  if ( !v7 )
  {
    v9 = *(_QWORD **)(a1 + 88);
    v48 = nullptr;
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 (__fastcall ***)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int64)))(v9[32] + 184LL))(
            *(_QWORD *)(*v9 + 24LL),
            &v47,
            &v48)
      && v47 == 22 )
    {
      *(_DWORD *)(a1 + 124) = 8;
    }
  }
LABEL_12:
  v10 = *(_QWORD *)(**(_QWORD **)(a1 + 88) + 16LL);
  v11 = *(_DWORD *)(v10 + 376);
  if ( (v11 & 1) == 0 && *(_DWORD *)(a1 + 124) == 1 )
  {
    if ( *(_DWORD *)(a1 + 120) > 0xFC8u )
    {
      v12 = *(_DWORD *)(a1 + 188);
      goto LABEL_18;
    }
    *(_DWORD *)(v10 + 376) = v11 | 1;
  }
LABEL_14:
  v12 = *(_DWORD *)(a1 + 188);
  if ( (v12 & 1) != 0 || *(_DWORD *)(a1 + 124) != 4 )
  {
    if ( (v12 & 2) == 0 && *(_DWORD *)(a1 + 124) == 6 )
    {
      *(_DWORD *)(a1 + 188) = v12 | 2;
      if ( (v12 & 4) != 0 )
        goto LABEL_32;
      v12 |= 2u;
      goto LABEL_20;
    }
LABEL_18:
    if ( (v12 & 4) != 0 )
      goto LABEL_21;
    v13 = *(_DWORD *)(a1 + 124);
    if ( (unsigned int)(v13 - 5) <= 1 )
      goto LABEL_20;
    if ( v13 != 4 )
      goto LABEL_21;
    goto LABEL_69;
  }
  if ( *(_DWORD *)(a1 + 120) > 0xF905Fu )
  {
    v12 |= 1u;
    *(_DWORD *)(a1 + 188) = v12;
  }
  if ( (v12 & 4) != 0 )
    goto LABEL_21;
LABEL_69:
  if ( *(_DWORD *)(a1 + 120) > 0x4C4B3Fu )
  {
LABEL_20:
    v12 |= 4u;
    *(_DWORD *)(a1 + 188) = v12;
  }
LABEL_21:
  if ( (v12 & 8) != 0 )
    goto LABEL_33;
  if ( *(_DWORD *)(a1 + 124) == 5 )
  {
    v19 = *(_DWORD *)(a1 + 120);
    if ( (unsigned int)(v19 - 3010000) <= 0x267 )
    {
      *(_DWORD *)(a1 + 188) = v12 | 8;
      if ( (*(_BYTE *)(v10 + 376) & 2) == 0 )
        goto LABEL_40;
      goto LABEL_34;
    }
    v18 = *(_DWORD *)(v10 + 376);
    if ( (v18 & 2) == 0 )
      goto LABEL_38;
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)(a1 + 88);
    if ( (*(_QWORD *)(v14 + 224) & 0x7FFFFFFFFFFFFFFFLL) != 0 && *(_QWORD *)(v14 + 224) != -1 )
      break;
    if ( under_debugger )
      goto LABEL_121;
    LOBYTE(v12) = interr(30478);
LABEL_32:
    if ( (v12 & 8) != 0 )
    {
LABEL_33:
      v18 = *(_DWORD *)(v10 + 376);
      if ( (v18 & 2) != 0 || *(_DWORD *)(a1 + 124) != 5 )
        goto LABEL_34;
      v19 = *(_DWORD *)(a1 + 120);
LABEL_38:
      if ( (unsigned int)(v19 - 2020000) <= 0xEF41F )
        *(_DWORD *)(v10 + 376) = v18 | 2;
LABEL_40:
      if ( (*(_DWORD *)(a1 + 188) & 8) != 0 )
LABEL_34:
        sub_88670(a1);
    }
  }
  sub_95380((const __m128i **)v10, (__int64 *)(v14 + 224), 0, -1);
  v15 = *(_QWORD **)(a1 + 88);
  v49 = 0;
  v50 = 0;
  v48 = &off_C95C0;
  v51 = v10;
  v52 = v15;
  v53 = 0;
  v54 = 0;
  v16 = v15[31];
  if ( !v16 )
  {
    v16 = sub_87C20(*(_QWORD **)(*v15 + 16LL), *(_QWORD *)(*v15 + 24LL));
    v15[31] = v16;
  }
  v50 = v16;
  sub_A0CE0(v15, (__int64)&v48, 1);
  v48 = &off_C95C0;
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  return v55 - __readfsqword(0x28u);
}
