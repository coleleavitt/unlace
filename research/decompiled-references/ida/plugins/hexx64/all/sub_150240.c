__int64 __fastcall sub_150240(__int64 a1, _BYTE *a2, double a3)
{
  bool v3; // zf
  _BYTE *v4; // rbx
  __int64 v5; // r12
  unsigned int v6; // eax
  char v7; // dl
  int v8; // eax
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // r13
  __int64 v16; // rbx
  int v17; // eax
  bool v18; // cc
  char v19; // dl
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  unsigned int v26; // eax
  char v27; // dl
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  _DWORD *v30; // rsi
  _DWORD *v31; // rsi
  _DWORD *v32; // rsi
  unsigned int v33; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v34[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *a2 == 4;
  v34[1] = __readfsqword(0x28u);
  v4 = a2;
  if ( !v3 )
    goto LABEL_19;
  while ( 1 )
  {
    v5 = *((_QWORD *)v4 + 1);
    v6 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 == 19 )
      break;
    if ( v6 > 0x13 )
    {
      if ( v6 == 22 )
      {
LABEL_6:
        v7 = sub_1227B0(*((int **)v4 + 1), &v33, v34, 1);
        v8 = *(_DWORD *)(a1 + 64);
        if ( v7 )
        {
          if ( (v33 & 7) == 0 && v33 >> 3 < v8 )
          {
            v9 = v8 - (v33 >> 3) - 1;
            if ( !*(_QWORD *)(a1 + 8 * v9) )
            {
              v10 = (_DWORD *)v34[0];
              if ( *(_BYTE *)v34[0] == 4 )
              {
                v30 = *(_DWORD **)(v34[0] + 8LL);
                if ( *v30 == 9 )
                  v10 = v30 + 8;
              }
              if ( v10[1] == 1 )
              {
                *(_QWORD *)(a1 + 8 * v9) = v10;
                return 1;
              }
            }
          }
        }
        goto LABEL_20;
      }
LABEL_19:
      v8 = *(_DWORD *)(a1 + 64);
LABEL_20:
      if ( v8 > 0 )
      {
        v13 = v8 - 1;
        if ( *(_QWORD *)(a1 + 8 * v13) )
          return 0;
        *(_QWORD *)(a1 + 8 * v13) = v4;
        return 1;
      }
LABEL_67:
      if ( !under_debugger )
        goto LABEL_68;
      goto LABEL_70;
    }
    if ( v6 != 9 )
    {
      if ( v6 == 14 )
        goto LABEL_6;
      goto LABEL_19;
    }
LABEL_18:
    v4 = (_BYTE *)(v5 + 32);
    if ( *(_BYTE *)(v5 + 32) != 4 )
      goto LABEL_19;
  }
  v15 = v5 + 48;
  if ( *(_BYTE *)(v5 + 48) != 4 )
    goto LABEL_14;
  v16 = *(_QWORD *)(v5 + 56);
  v17 = *(_DWORD *)v16;
  v18 = *(_DWORD *)v16 <= 0x13u;
  if ( *(_DWORD *)v16 != 19 )
  {
LABEL_29:
    if ( v18 )
    {
      if ( v17 == 9 )
        goto LABEL_44;
      if ( v17 == 14 )
      {
LABEL_32:
        v19 = sub_1227B0((int *)v16, &v33, v34, 1);
        v11 = *(_DWORD *)(a1 + 64);
        if ( v19 )
        {
          if ( (v33 & 7) == 0 && v33 >> 3 < v11 )
          {
            v20 = v11 - (v33 >> 3) - 1;
            if ( !*(_QWORD *)(a1 + 8 * v20) )
            {
              v21 = (_DWORD *)v34[0];
              if ( *(_BYTE *)v34[0] == 4 )
              {
                v31 = *(_DWORD **)(v34[0] + 8LL);
                if ( *v31 == 9 )
                  v21 = v31 + 8;
              }
              if ( v21[1] == 1 )
              {
                *(_QWORD *)(a1 + 8 * v20) = v21;
                goto LABEL_18;
              }
            }
          }
        }
        goto LABEL_15;
      }
    }
    else if ( v17 == 22 )
    {
      goto LABEL_32;
    }
LABEL_14:
    v11 = *(_DWORD *)(a1 + 64);
LABEL_15:
    if ( v11 <= 0 )
    {
      if ( !under_debugger )
LABEL_68:
        sub_383060(0xCD45u, a3);
LABEL_70:
      BUG();
    }
    v12 = v11 - 1;
    if ( *(_QWORD *)(a1 + 8 * v12) )
      return 0;
    *(_QWORD *)(a1 + 8 * v12) = v15;
    goto LABEL_18;
  }
LABEL_46:
  v24 = v16 + 48;
  if ( *(_BYTE *)(v16 + 48) == 4 )
  {
    do
    {
      v25 = *(_QWORD *)(v24 + 8);
      v26 = *(_DWORD *)v25;
      if ( *(_DWORD *)v25 == 19 )
      {
        if ( !(unsigned __int8)sub_150240(a1, (_BYTE *)(v25 + 48)) )
          return 0;
      }
      else
      {
        if ( v26 > 0x13 )
        {
          if ( v26 == 22 )
            goto LABEL_51;
          break;
        }
        if ( v26 != 9 )
        {
          if ( v26 != 14 )
            break;
LABEL_51:
          v27 = sub_1227B0(*(int **)(v24 + 8), &v33, v34, 1);
          v22 = *(_DWORD *)(a1 + 64);
          if ( !v27 )
            goto LABEL_41;
          if ( (v33 & 7) != 0 )
            goto LABEL_41;
          if ( v33 >> 3 >= v22 )
            goto LABEL_41;
          v28 = v22 - (v33 >> 3) - 1;
          if ( *(_QWORD *)(a1 + 8 * v28) )
            goto LABEL_41;
          v29 = (_DWORD *)v34[0];
          if ( *(_BYTE *)v34[0] == 4 )
          {
            v32 = *(_DWORD **)(v34[0] + 8LL);
            if ( *v32 == 9 )
              v29 = v32 + 8;
          }
          if ( v29[1] != 1 )
            goto LABEL_41;
          *(_QWORD *)(a1 + 8 * v28) = v29;
LABEL_44:
          v15 = v16 + 32;
          if ( *(_BYTE *)(v16 + 32) != 4 )
            goto LABEL_14;
          v16 = *(_QWORD *)(v16 + 40);
          v17 = *(_DWORD *)v16;
          v18 = *(_DWORD *)v16 <= 0x13u;
          if ( *(_DWORD *)v16 != 19 )
            goto LABEL_29;
          goto LABEL_46;
        }
      }
      v24 = v25 + 32;
    }
    while ( *(_BYTE *)(v25 + 32) == 4 );
  }
  v22 = *(_DWORD *)(a1 + 64);
LABEL_41:
  if ( v22 <= 0 )
    goto LABEL_67;
  v23 = v22 - 1;
  if ( !*(_QWORD *)(a1 + 8 * v23) )
  {
    *(_QWORD *)(a1 + 8 * v23) = v24;
    goto LABEL_44;
  }
  return 0;
}

