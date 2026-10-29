__int64 __fastcall sub_14B680(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  _BYTE *v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // eax
  char v6; // dl
  int v7; // eax
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // r13
  __int64 v15; // rbx
  int v16; // eax
  bool v17; // cc
  char v18; // dl
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  unsigned int v25; // eax
  char v26; // dl
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  _DWORD *v29; // rsi
  _DWORD *v30; // rsi
  _DWORD *v31; // rsi
  unsigned int v32; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v33[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *a2 == 4;
  v33[1] = __readfsqword(0x28u);
  v3 = a2;
  if ( !v2 )
    goto LABEL_19;
  while ( 1 )
  {
    v4 = *((_QWORD *)v3 + 1);
    v5 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 == 19 )
      break;
    if ( v5 > 0x13 )
    {
      if ( v5 == 22 )
      {
LABEL_6:
        v6 = sub_11DBF0(*((int **)v3 + 1), &v32, v33, 1);
        v7 = *(_DWORD *)(a1 + 64);
        if ( v6 )
        {
          if ( (v32 & 7) == 0 && v32 >> 3 < v7 )
          {
            v8 = v7 - (v32 >> 3) - 1;
            if ( !*(_QWORD *)(a1 + 8 * v8) )
            {
              v9 = (_DWORD *)v33[0];
              if ( *(_BYTE *)v33[0] == 4 )
              {
                v29 = *(_DWORD **)(v33[0] + 8LL);
                if ( *v29 == 9 )
                  v9 = v29 + 8;
              }
              if ( v9[1] == 1 )
              {
                *(_QWORD *)(a1 + 8 * v8) = v9;
                return 1;
              }
            }
          }
        }
        goto LABEL_20;
      }
LABEL_19:
      v7 = *(_DWORD *)(a1 + 64);
LABEL_20:
      if ( v7 > 0 )
      {
        v12 = v7 - 1;
        if ( *(_QWORD *)(a1 + 8 * v12) )
          return 0;
        *(_QWORD *)(a1 + 8 * v12) = v3;
        return 1;
      }
LABEL_67:
      if ( !under_debugger )
        goto LABEL_68;
      goto LABEL_70;
    }
    if ( v5 != 9 )
    {
      if ( v5 == 14 )
        goto LABEL_6;
      goto LABEL_19;
    }
LABEL_18:
    v3 = (_BYTE *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 32) != 4 )
      goto LABEL_19;
  }
  v14 = v4 + 48;
  if ( *(_BYTE *)(v4 + 48) != 4 )
    goto LABEL_14;
  v15 = *(_QWORD *)(v4 + 56);
  v16 = *(_DWORD *)v15;
  v17 = *(_DWORD *)v15 <= 0x13u;
  if ( *(_DWORD *)v15 != 19 )
  {
LABEL_29:
    if ( v17 )
    {
      if ( v16 == 9 )
        goto LABEL_44;
      if ( v16 == 14 )
      {
LABEL_32:
        v18 = sub_11DBF0((int *)v15, &v32, v33, 1);
        v10 = *(_DWORD *)(a1 + 64);
        if ( v18 )
        {
          if ( (v32 & 7) == 0 && v32 >> 3 < v10 )
          {
            v19 = v10 - (v32 >> 3) - 1;
            if ( !*(_QWORD *)(a1 + 8 * v19) )
            {
              v20 = (_DWORD *)v33[0];
              if ( *(_BYTE *)v33[0] == 4 )
              {
                v30 = *(_DWORD **)(v33[0] + 8LL);
                if ( *v30 == 9 )
                  v20 = v30 + 8;
              }
              if ( v20[1] == 1 )
              {
                *(_QWORD *)(a1 + 8 * v19) = v20;
                goto LABEL_18;
              }
            }
          }
        }
        goto LABEL_15;
      }
    }
    else if ( v16 == 22 )
    {
      goto LABEL_32;
    }
LABEL_14:
    v10 = *(_DWORD *)(a1 + 64);
LABEL_15:
    if ( v10 <= 0 )
    {
      if ( !under_debugger )
LABEL_68:
        sub_37CFE0(52549);
LABEL_70:
      BUG();
    }
    v11 = v10 - 1;
    if ( *(_QWORD *)(a1 + 8 * v11) )
      return 0;
    *(_QWORD *)(a1 + 8 * v11) = v14;
    goto LABEL_18;
  }
LABEL_46:
  v23 = v15 + 48;
  if ( *(_BYTE *)(v15 + 48) == 4 )
  {
    do
    {
      v24 = *(_QWORD *)(v23 + 8);
      v25 = *(_DWORD *)v24;
      if ( *(_DWORD *)v24 == 19 )
      {
        if ( !(unsigned __int8)sub_14B680(a1, v24 + 48) )
          return 0;
      }
      else
      {
        if ( v25 > 0x13 )
        {
          if ( v25 == 22 )
            goto LABEL_51;
          break;
        }
        if ( v25 != 9 )
        {
          if ( v25 != 14 )
            break;
LABEL_51:
          v26 = sub_11DBF0(*(int **)(v23 + 8), &v32, v33, 1);
          v21 = *(_DWORD *)(a1 + 64);
          if ( !v26 )
            goto LABEL_41;
          if ( (v32 & 7) != 0 )
            goto LABEL_41;
          if ( v32 >> 3 >= v21 )
            goto LABEL_41;
          v27 = v21 - (v32 >> 3) - 1;
          if ( *(_QWORD *)(a1 + 8 * v27) )
            goto LABEL_41;
          v28 = (_DWORD *)v33[0];
          if ( *(_BYTE *)v33[0] == 4 )
          {
            v31 = *(_DWORD **)(v33[0] + 8LL);
            if ( *v31 == 9 )
              v28 = v31 + 8;
          }
          if ( v28[1] != 1 )
            goto LABEL_41;
          *(_QWORD *)(a1 + 8 * v27) = v28;
LABEL_44:
          v14 = v15 + 32;
          if ( *(_BYTE *)(v15 + 32) != 4 )
            goto LABEL_14;
          v15 = *(_QWORD *)(v15 + 40);
          v16 = *(_DWORD *)v15;
          v17 = *(_DWORD *)v15 <= 0x13u;
          if ( *(_DWORD *)v15 != 19 )
            goto LABEL_29;
          goto LABEL_46;
        }
      }
      v23 = v24 + 32;
    }
    while ( *(_BYTE *)(v24 + 32) == 4 );
  }
  v21 = *(_DWORD *)(a1 + 64);
LABEL_41:
  if ( v21 <= 0 )
    goto LABEL_67;
  v22 = v21 - 1;
  if ( !*(_QWORD *)(a1 + 8 * v22) )
  {
    *(_QWORD *)(a1 + 8 * v22) = v23;
    goto LABEL_44;
  }
  return 0;
}

