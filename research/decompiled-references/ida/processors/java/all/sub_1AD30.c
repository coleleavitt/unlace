const char *__fastcall sub_1AD30(__int64 a1, char *a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 v4; // rbx
  __int64 path; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *file_ext; // r13
  char v12; // al
  signed __int64 v13; // rdx
  __int64 *v14; // r14
  const char *v15; // rcx
  char v16; // di
  unsigned int v17; // edx
  __int64 v18; // r8
  int v19; // eax
  char *v20; // r15
  char *v21; // rax
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rbx
  size_t v34; // rax
  size_t v36; // rax
  __int64 v37; // rdi
  int v38; // eax
  __int64 v40; // [rsp+10h] [rbp-1058h] BYREF
  __int64 v41; // [rsp+18h] [rbp-1050h] BYREF
  char s[4090]; // [rsp+20h] [rbp-1048h] BYREF
  _BYTE v43[14]; // [rsp+101Ah] [rbp-4Eh] BYREF
  unsigned __int64 v44; // [rsp+1028h] [rbp-40h]

  v4 = a3;
  v44 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 33376) < a3 )
    goto LABEL_46;
  path = get_path(0);
  qstrncpy(s, path, 4096, v8, v9, v10);
  file_ext = (char *)get_file_ext(s);
  if ( !file_ext )
  {
    v36 = strlen(s);
    s[v36] = 46;
    file_ext = &s[v36 + 1];
  }
  v12 = *a2;
  v13 = file_ext - s;
  if ( *a2 == 32 )
  {
    v20 = "PathName too long";
    if ( (unsigned int)v13 <= 0xFF7 )
    {
      v14 = nullptr;
      strcpy(file_ext, "SDE.utf8");
      goto LABEL_21;
    }
    return v20;
  }
  if ( (unsigned int)v13 > 0xFE2 )
    return "PathName too long";
  if ( v12 == 1 )
  {
    v14 = (__int64 *)(a1 + 33301);
    file_ext += (int)qsnprintf(file_ext, 30, "fld%03u_", *(unsigned __int16 *)(a1 + 33271));
  }
  else
  {
    v14 = (__int64 *)(a1 + 33133);
    if ( (v12 & 0xFD) == 0 )
    {
      v15 = (const char *)&unk_228D8;
      if ( !v12 )
        v15 = "code_";
      v14 = (__int64 *)(a1 + 8LL * (v12 == 0) + 33249);
      file_ext += (int)qsnprintf(file_ext, 30, "%smet%03u.", v15, *(unsigned __int16 *)(a1 + 33147));
    }
  }
  if ( file_ext >= v43 )
  {
    strcpy(file_ext - 1, "!.attr");
    goto LABEL_21;
  }
  v16 = 0;
  v17 = 1;
  v18 = 0x40000003C0021LL;
  while ( 1 )
  {
    v19 = (unsigned __int8)a2[v17];
    if ( !(_BYTE)v19 )
      break;
    if ( (unsigned __int8)(v19 - 42) > 0x32u )
    {
      if ( (unsigned __int8)(v19 - 33) <= 0x5Du )
      {
LABEL_36:
        *file_ext++ = v19;
        goto LABEL_17;
      }
    }
    else if ( !_bittest64(&v18, (unsigned int)(v19 - 42)) )
    {
      goto LABEL_36;
    }
    v16 = 1;
LABEL_17:
    ++v17;
    if ( file_ext >= v43 )
    {
      *(file_ext - 1) = 33;
      break;
    }
  }
  strcpy(file_ext, ".attr");
  if ( v16 )
    sub_E500((__int64)"Convert unprintable filename for attribute '%s'\n", a2 + 1);
LABEL_21:
  v20 = s;
  while ( 1 )
  {
    v21 = strchr(v20, 92);
    v20 = v21;
    if ( !v21 )
      break;
    *v21 = 47;
  }
  v22 = qalloc((unsigned int)(v4 + 1));
  if ( !v22 )
    sub_19160((__int64)"JavaLoader");
  v23 = *(_DWORD *)(a1 + 33376);
  if ( v23 < (unsigned int)v4 )
LABEL_46:
    sub_19240();
  v24 = *(_QWORD *)(a1 + 33312);
  *(_DWORD *)(a1 + 33376) = v23 - v4;
  v25 = qfread(v24, v22, v4);
  if ( v25 != v4 )
    sub_19220();
  v26 = qfopen(s, "wb");
  v29 = v26;
  if ( v26 )
  {
    if ( qfwrite(v26, v22, v25) == v25 )
    {
      qfree(v22, v22, v30, v31);
      if ( !(unsigned int)qfclose(v29) )
        goto LABEL_30;
      v20 = "Error writing";
      qunlink(s);
    }
    else
    {
      qfree(v22, v22, v30, v31);
      qfclose(v29);
LABEL_30:
      if ( v14 )
      {
        v40 = -1;
        v32 = *v14;
        if ( *v14 )
        {
          v40 = *v14;
          v33 = 1;
        }
        else
        {
          netnode_check(&v40, 0, 0, 1);
          v37 = v40;
          *v14 = v40;
          v38 = netnode_altval(v37, 0, 65);
          v32 = v40;
          v33 = (unsigned int)(v38 + 1);
        }
        v41 = a4;
        netnode_supset(v32, v33, &v41, 8, 65);
        v34 = strlen(s);
        netnode_supset(v40, v33, s, v34, 83);
        v41 = v33;
        netnode_supset(v40, 0, &v41, 8, 65);
      }
    }
  }
  else
  {
    v20 = "Can't create file for storing";
    qfree(v22, "wb", v27, v28);
  }
  return v20;
}

