__int64 __fastcall sub_8A90(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  _BYTE *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int16 *v6; // rbp
  unsigned __int8 v7; // r12
  __int64 v8; // r13
  __int64 module_data; // rax
  unsigned __int64 v10; // rdx
  int v11; // r10d
  char **v12; // r9
  __int64 v13; // r12
  __int64 v14; // rcx
  bool v15; // zf
  unsigned __int8 v16; // r13
  const char *v17; // rdx
  __int64 v18; // r15
  unsigned int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-58h]
  const char **v22; // [rsp+10h] [rbp-48h]
  int v23; // [rsp+18h] [rbp-40h]
  unsigned __int8 v24; // [rsp+1Fh] [rbp-39h]

  v2 = a2;
  v4 = *(_BYTE **)a2;
  v5 = (unsigned int)dword_2D4F4;
  if ( !*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33345) )
  {
    v6 = (unsigned __int16 *)(v4 + 2);
    if ( *(_QWORD *)(a2 + 8) < (unsigned __int64)v6 )
      goto LABEL_51;
    v7 = -1;
    a2 = 0xFFFFFFFFLL;
    goto LABEL_4;
  }
  v7 = *v4;
  if ( *v4 <= 0xF6u )
  {
    if ( (unsigned __int8)(v7 + 0x80) <= 0x76u )
      goto LABEL_51;
    v6 = (unsigned __int16 *)(v4 + 1);
    if ( *(_QWORD *)(a2 + 8) < (unsigned __int64)v6 )
      goto LABEL_51;
LABEL_38:
    a2 = 0;
    goto LABEL_4;
  }
  v6 = (unsigned __int16 *)(v4 + 3);
  if ( *(_QWORD *)(a2 + 8) < (unsigned __int64)v6 )
    goto LABEL_51;
  if ( v7 != 0xFF )
  {
    if ( (unsigned __int8)(v7 + 8) <= 2u )
    {
      a2 = *(unsigned int *)(a2 + 16);
      v20 = 251 - v7;
      if ( (unsigned int)a2 < v20 )
        goto LABEL_51;
      a2 = (unsigned int)a2 - v20;
      if ( !(_DWORD)a2 )
        a2 = 0xFFFFFFFFLL;
      goto LABEL_4;
    }
    goto LABEL_38;
  }
  a2 = 0xFFFFFFFFLL;
LABEL_4:
  v5 = (unsigned __int64)a1;
  if ( (unsigned __int8)sub_89A0((__int64)a1, a2) )
    return 1;
  v8 = *(_QWORD *)(v2 + 20);
  if ( v8 != a1[30] )
  {
    module_data = get_module_data((unsigned int)dword_2D4F4);
    a2 = 6;
    v5 = (unsigned __int64)a1;
    if ( (unsigned __int8)sub_88B0(
                            (__int64)a1,
                            6,
                            (__int64)&unk_2272C,
                            &unk_22721,
                            (unsigned int)(v8 - *(_DWORD *)(module_data + 33157))) )
      return 1;
  }
  v10 = *(_QWORD *)(v2 + 8);
  if ( v7 <= 0x3Fu )
    goto LABEL_40;
  if ( v7 > 0xF7u )
  {
    if ( v7 <= 0xFBu )
      goto LABEL_40;
    if ( v7 == 0xFF )
    {
      v12 = (char **)&off_2C210;
      goto LABEL_56;
    }
    v12 = (char **)&off_2C210;
    v11 = v7 - 251;
  }
  else
  {
    v11 = 1;
    v12 = &off_2C218;
  }
LABEL_10:
  v22 = (const char **)v12;
  v23 = v11;
  v24 = v7;
  v21 = v2;
  do
  {
    v16 = *(_BYTE *)v6;
    if ( v10 < (unsigned __int64)v6 + 1 || v16 > 0xAu )
      goto LABEL_51;
    *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 6;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
    v17 = *v22;
    v18 = (a1[4] == 0) + a1[4] - 1LL;
    if ( v16 > 8u )
    {
      sub_87F0((__int64)a1, (__int64)"%s %s", v17, "Object ");
      v13 = a1[4];
      if ( !v13 )
      {
        v5 = (unsigned __int64)a1;
        *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) = -v18;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
        a2 = *(unsigned __int16 *)((char *)v6 + 1);
        if ( *(_QWORD *)(v21 + 8) < (unsigned __int64)v6 + 3 )
          goto LABEL_51;
        v6 = (unsigned __int16 *)((char *)v6 + 3);
        v14 = 7;
        if ( v16 == 9 )
          goto LABEL_26;
        goto LABEL_49;
      }
LABEL_12:
      --v13;
      goto LABEL_13;
    }
    sub_87F0((__int64)a1, (__int64)"%s %s", v17, off_2C240[v16]);
    v13 = a1[4];
    if ( v13 )
      goto LABEL_12;
LABEL_13:
    v5 = (unsigned __int64)a1;
    *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) = v13 - v18;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
    if ( v16 <= 6u )
    {
      v6 = (unsigned __int16 *)((char *)v6 + 1);
      goto LABEL_18;
    }
    a2 = *(unsigned __int16 *)((char *)v6 + 1);
    if ( *(_QWORD *)(v21 + 8) < (unsigned __int64)v6 + 3 )
      goto LABEL_51;
    if ( v16 == 8 )
    {
      if ( (unsigned __int8)sub_10A50(a1, a2) )
        return 1;
      v6 = (unsigned __int16 *)((char *)v6 + 3);
      goto LABEL_18;
    }
    v6 = (unsigned __int16 *)((char *)v6 + 3);
    if ( v16 == 9 )
    {
LABEL_26:
      if ( (unsigned __int8)sub_10000(a1, a2, 35, v14) )
        return 1;
      goto LABEL_18;
    }
    v14 = 34;
    if ( v16 != 7 )
      v14 = 7;
LABEL_49:
    if ( (unsigned __int8)sub_10630(a1, a2, 140, v14) )
      return 1;
LABEL_18:
    a2 = 0;
    v5 = (unsigned __int64)a1;
    if ( (unsigned __int8)sub_FBC0(a1, 0) )
      return 1;
    v15 = v23-- == 1;
    v10 = *(_QWORD *)(v21 + 8);
  }
  while ( !v15 );
  v7 = v24;
  v12 = (char **)v22;
  v2 = v21;
  if ( v24 == 0xFF )
  {
    a2 = (__int64)v6;
    while ( v12[1] )
    {
      ++v12;
      v6 = (unsigned __int16 *)a2;
LABEL_56:
      a2 = (__int64)(v6 + 1);
      v11 = *v6;
      if ( v10 < (unsigned __int64)(v6 + 1) )
        goto LABEL_51;
      ++v6;
      if ( v11 )
        goto LABEL_10;
    }
    v6 = (unsigned __int16 *)a2;
  }
LABEL_40:
  if ( v6 != (unsigned __int16 *)v10 )
LABEL_51:
    sub_E6A0(v5, a2);
  return sub_10BD0(a1, 4, "stack");
}
