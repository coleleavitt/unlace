__int64 __fastcall sub_548B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  int v4; // ebp
  char v5; // al
  int v6; // ecx
  int v7; // r8d
  int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r12
  int *v12; // r15
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // r8d
  int v20; // ebp
  _DWORD v21[3]; // [rsp+0h] [rbp-B8h] BYREF
  int v22; // [rsp+Ch] [rbp-ACh]
  __int128 v23; // [rsp+10h] [rbp-A8h]
  __int128 v24; // [rsp+24h] [rbp-94h]
  __int64 v25; // [rsp+34h] [rbp-84h]
  __int64 v26; // [rsp+40h] [rbp-78h]
  __int128 v27; // [rsp+48h] [rbp-70h]
  __int64 v28; // [rsp+58h] [rbp-60h]
  __int128 v29; // [rsp+60h] [rbp-58h]
  __int16 v30; // [rsp+70h] [rbp-48h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)a1;
  v31 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64))(v1 + 616))(a1);
  result = read_config();
  if ( !(_BYTE)result )
    return result;
  sub_15090();
  v4 = *(_DWORD *)(get_ph() + 4);
  v5 = netnode_inited();
  if ( v4 != -1 && v5 )
  {
    v22 = 0;
    v21[0] = v4;
    if ( (unsigned __int8)is_miniidb() )
      v16 = *(_DWORD *)(a1 + 276) > 4;
    else
      v16 = (unsigned __int8)getinf_flag();
    v21[1] = v16;
    v21[2] = (unsigned __int8)getinf_flag();
    if ( v4 == 13 )
    {
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v28 = 0;
      v30 = 0;
      v27 = 0;
      v29 = 0;
      if ( sub_2DBF0() == 1 )
      {
        if ( DWORD1(v23) )
        {
          if ( DWORD1(v23) != 77 )
            goto LABEL_22;
        }
        else if ( (unsigned int)(v23 - 11) > 2 )
        {
          goto LABEL_22;
        }
        v22 = 1;
      }
    }
LABEL_22:
    v17 = sub_54240(a1, v21);
    *(_DWORD *)(a1 + 1176) = v17;
    v20 = v17;
    if ( v17 < 0 )
    {
      sub_70460(
        a1,
        (unsigned int)"GDB: %s.cfg: the current configuration is not supported\n",
        *(_QWORD *)(a1 + 872),
        v18,
        v19);
      v20 = *(_DWORD *)(a1 + 1176);
    }
    *(_DWORD *)(a1 + 1172) = v20;
    return v20 >= 0;
  }
  v8 = *(_DWORD *)(a1 + 1176);
  v9 = xmmword_9AC58;
  if ( (_QWORD)xmmword_9AC58 )
  {
    v10 = 0;
    v11 = qword_9AC30;
    v12 = (int *)(qword_9AC50 + 28);
LABEL_6:
    if ( v8 >= 0 )
      return v8 >= 0;
    do
    {
      v13 = *(_QWORD *)(v11 + 8);
      if ( *(_QWORD *)(a1 + 896) )
      {
        v14 = *(const char **)(a1 + 888);
        v15 = src;
        if ( !v13 )
          goto LABEL_10;
      }
      else
      {
        if ( !v13 )
        {
LABEL_17:
          v8 = *v12;
          ++v10;
          v12 += 30;
          v11 += 24;
          *(_DWORD *)(a1 + 1176) = v8;
          if ( v9 == v10 )
            break;
          goto LABEL_6;
        }
        v14 = src;
      }
      v15 = *(const char **)v11;
LABEL_10:
      if ( !strcmp(v15, v14) )
        goto LABEL_17;
      ++v10;
      v12 += 30;
      v11 += 24;
    }
    while ( v9 != v10 );
  }
  if ( v8 < 0 )
  {
    sub_70460(a1, (unsigned int)"GDB: %s.cfg: missing or invalid DEFAULT_CONFIG\n", *(_QWORD *)(a1 + 872), v6, v7);
    v8 = *(_DWORD *)(a1 + 1176);
  }
  return v8 >= 0;
}

