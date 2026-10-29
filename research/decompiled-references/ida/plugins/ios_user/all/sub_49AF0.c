__int64 __fastcall sub_49AF0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  int v4; // ebp
  char v5; // al
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // ebp
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  int *v13; // r15
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // ebp
  _DWORD v23[3]; // [rsp+0h] [rbp-B8h] BYREF
  int v24; // [rsp+Ch] [rbp-ACh]
  __int128 v25; // [rsp+10h] [rbp-A8h]
  __int128 v26; // [rsp+24h] [rbp-94h]
  __int64 v27; // [rsp+34h] [rbp-84h]
  __int64 v28; // [rsp+40h] [rbp-78h]
  __int128 v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+58h] [rbp-60h]
  __int128 v31; // [rsp+60h] [rbp-58h]
  __int16 v32; // [rsp+70h] [rbp-48h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)a1;
  v33 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64))(v1 + 616))(a1);
  result = read_config();
  if ( !(_BYTE)result )
    return result;
  sub_14330();
  v4 = *(_DWORD *)(get_ph() + 4);
  v5 = netnode_inited();
  if ( v4 != -1 && v5 )
  {
    v24 = 0;
    v23[0] = v4;
    if ( (unsigned __int8)is_miniidb() )
      v17 = *(_DWORD *)(a1 + 276) > 4;
    else
      v17 = (unsigned __int8)getinf_flag();
    v23[1] = v17;
    v23[2] = (unsigned __int8)getinf_flag();
    if ( v4 == 13 )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v30 = 0;
      v32 = 0;
      v29 = 0;
      v31 = 0;
      if ( sub_13F60() == 1 )
      {
        if ( DWORD1(v25) )
        {
          if ( DWORD1(v25) != 77 )
            goto LABEL_22;
        }
        else if ( (unsigned int)(v25 - 11) > 2 )
        {
          goto LABEL_22;
        }
        v24 = 1;
      }
    }
LABEL_22:
    v18 = sub_49580(a1, v23);
    *(_DWORD *)(a1 + 1176) = v18;
    v22 = v18;
    if ( v18 < 0 )
    {
      sub_65BB0(
        a1,
        (unsigned int)"GDB: %s.cfg: the current configuration is not supported\n",
        *(_QWORD *)(a1 + 872),
        v19,
        v20,
        v21);
      v22 = *(_DWORD *)(a1 + 1176);
    }
    *(_DWORD *)(a1 + 1172) = v22;
    return v22 >= 0;
  }
  v9 = *(_DWORD *)(a1 + 1176);
  v10 = xmmword_8FA78;
  if ( (_QWORD)xmmword_8FA78 )
  {
    v11 = 0;
    v12 = qword_8FA50;
    v13 = (int *)(qword_8FA70 + 28);
LABEL_6:
    if ( v9 >= 0 )
      return v9 >= 0;
    do
    {
      v14 = *(_QWORD *)(v12 + 8);
      if ( *(_QWORD *)(a1 + 896) )
      {
        v15 = *(const char **)(a1 + 888);
        v16 = s;
        if ( !v14 )
          goto LABEL_10;
      }
      else
      {
        if ( !v14 )
        {
LABEL_17:
          v9 = *v13;
          ++v11;
          v13 += 30;
          v12 += 24;
          *(_DWORD *)(a1 + 1176) = v9;
          if ( v10 == v11 )
            break;
          goto LABEL_6;
        }
        v15 = s;
      }
      v16 = *(const char **)v12;
LABEL_10:
      if ( !strcmp(v16, v15) )
        goto LABEL_17;
      ++v11;
      v13 += 30;
      v12 += 24;
    }
    while ( v10 != v11 );
  }
  if ( v9 < 0 )
  {
    sub_65BB0(a1, (unsigned int)"GDB: %s.cfg: missing or invalid DEFAULT_CONFIG\n", *(_QWORD *)(a1 + 872), v6, v7, v8);
    v9 = *(_DWORD *)(a1 + 1176);
  }
  return v9 >= 0;
}

