__int64 __fastcall sub_401F0(__int64 a1)
{
  const char *v3; // rbp
  __int64 v4; // r15
  size_t v5; // r14
  const char *v6; // rbp
  size_t v7; // rax
  size_t v8; // r14
  __int64 v9; // rcx
  char v10; // al
  const char *v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // eax
  const char *v15; // r8
  const char *v16; // rdx
  size_t v17; // rax
  size_t v18; // r15
  unsigned __int8 v19; // [rsp+Fh] [rbp-C9h]
  __int64 v20; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-C0h]
  void *v22; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-B0h]
  void *v24; // [rsp+40h] [rbp-98h] BYREF
  __int128 v25; // [rsp+48h] [rbp-90h]
  __int64 v26; // [rsp+60h] [rbp-78h] BYREF
  __int128 v27; // [rsp+68h] [rbp-70h]
  __int64 v28; // [rsp+80h] [rbp-58h] BYREF
  __int128 v29; // [rsp+88h] [rbp-50h]
  unsigned __int64 v30; // [rsp+98h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 1144) = 0;
  if ( dbg && ((*(_BYTE *)(dbg + 32) & 1) == 0 || strcmp(*(const char **)(dbg + 8), "win32")) )
  {
    sub_299B0();
    return 0;
  }
  if ( (unsigned int)callui(1004) )
  {
    *(_BYTE *)(a1 + 1144) = 1;
    return 1;
  }
  netnode_check(&v20, "$ pdb", 0, 0);
  v28 = 1;
  netnode_supset(v20, 1, &v28, 8, 65);
  v19 = callui(1072);
  if ( !v19 || !dbg )
  {
    netnode_supdel(v20, 1, 65);
    sub_299B0();
    return 0;
  }
  netnode_supdel(v20, 1, 65);
  v3 = *(const char **)(a1 + 1120);
  v22 = nullptr;
  v23 = 0;
  if ( !*v3 )
  {
    v4 = 10;
    v3 = "localhost";
    v5 = 9;
LABEL_13:
    v22 = (void *)qvector_reserve(&v22, 0, v4, 1);
    *(_QWORD *)&v23 = v4;
    memmove(v22, v3, v5);
    *((_BYTE *)v22 + v5) = 0;
    goto LABEL_14;
  }
  if ( v3 )
  {
    v17 = strlen(v3);
    v5 = v17;
    if ( v17 )
    {
      v4 = v17 + 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  v6 = *(const char **)(a1 + 1136);
  v24 = nullptr;
  v25 = 0;
  if ( v6 )
  {
    v7 = strlen(v6);
    v8 = v7;
    if ( v7 )
    {
      v18 = v7 + 1;
      v24 = (void *)qvector_reserve(&v24, 0, v7 + 1, 1);
      *(_QWORD *)&v25 = v18;
      memmove(v24, v6, v8);
      *((_BYTE *)v24 + v8) = 0;
      v7 = v25;
    }
  }
  else
  {
    v7 = 0;
  }
  v9 = *(unsigned int *)(a1 + 1128);
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    v15 = src;
    if ( v7 )
      v15 = (const char *)v24;
    v16 = src;
    if ( (_QWORD)v23 )
      v16 = (const char *)v22;
    if ( (unsigned int)sub_29F00(dbg, 0, v16, v9, v15, &v26) == 1 )
    {
      sub_244A0();
      goto LABEL_33;
    }
    if ( batch )
    {
      sub_244A0();
      goto LABEL_45;
    }
    if ( (unsigned __int64)v27 > 1 )
      sub_244A0();
    v10 = getinf_flag(3, 4);
    v11 = "win32_remote.exe";
    if ( v10 )
      v11 = "win64_remote64.exe";
    v28 = 0;
    v29 = 0;
    sub_37FD0(
      &v28,
      (__int64)"Remote PDB server\n"
               "In order to load PDB information, IDA requires a running %s debugger server\n"
               "running on a Windows host, but it could not connect to the %s debugger\n"
               "at the current specified address.\n"
               "Please make sure that %s is running there.\n"
               "\n"
               "<#Name of the remote host#~H~ostname :q:1023:30::> <#Remote port number#Po~r~t:D::8::>\n"
               "<#Password for the remote host#Pass~w~ord :q:1023:30::>\n"
               "Hint: to change this permanently, edit pdb.cfg.\n"
               "\n",
      v11,
      v11,
      v11);
    v21 = *(int *)(a1 + 1128);
    v12 = sub_29A80();
    v13 = v28;
    if ( v12 != 1 )
      break;
    v14 = v21;
    *(_DWORD *)(a1 + 1128) = v21;
    v9 = v14;
    if ( v13 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v13);
      v9 = *(unsigned int *)(a1 + 1128);
    }
    v7 = v25;
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
LABEL_45:
  v19 = 0;
LABEL_33:
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v19;
}
