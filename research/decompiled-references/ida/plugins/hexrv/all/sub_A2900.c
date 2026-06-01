__int64 __fastcall sub_A2900(__int64 a1)
{
  __int64 v1; // r15
  int *v2; // rax
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // r12d
  char v11; // al
  int *v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+10h] [rbp-68h]
  unsigned int v19; // [rsp+18h] [rbp-60h]
  int v20; // [rsp+1Ch] [rbp-5Ch]
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 520);
  v19 = 0;
  if ( !v1 )
    return v19;
  do
  {
LABEL_2:
    while ( 1 )
    {
      v2 = *(int **)(v1 + 56);
      if ( v2 )
        break;
LABEL_11:
      v1 = *(_QWORD *)(v1 + 8);
      if ( !v1 )
        return v19;
    }
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 != 42 )
        break;
      if ( *((_BYTE *)v2 + 32) == 4 )
      {
        v7 = *((_QWORD *)v2 + 5);
        if ( *(_DWORD *)v7 != 6 || *(_BYTE *)(v7 + 32) == 4 )
          goto LABEL_15;
      }
      v1 = *(_QWORD *)(v1 + 8);
      if ( !v1 )
        return v19;
      if ( *(_QWORD *)(v1 + 48) )
        goto LABEL_2;
LABEL_10:
      v2 = *(int **)(v1 + 56);
      if ( !v2 )
        goto LABEL_11;
    }
    v4 = *(_QWORD *)(v1 + 8);
    if ( !v4 )
      return v19;
    v5 = *(_QWORD *)(v4 + 48);
    if ( !v5
      || (unsigned int)(v3 - 29) > 0xC
      || *(_DWORD *)v5 != 42
      || *(_BYTE *)(v5 + 32) != 4
      || (v17 = *(_QWORD *)(v5 + 40), *(_DWORD *)v17 == 6) && *(_BYTE *)(v17 + 32) != 4 )
    {
      v1 = *(_QWORD *)(v1 + 8);
      goto LABEL_10;
    }
LABEL_15:
    v8 = *(_QWORD *)(v1 + 480);
    v9 = *(_QWORD *)(v1 + 48);
    v21 = 0;
    v18 = *(_QWORD *)(v8 + 112);
    if ( !v9 )
      goto LABEL_11;
    v10 = 0;
    do
    {
      while ( 1 )
      {
        if ( *(_DWORD *)v9 == 12 )
        {
          if ( !(unsigned __int8)sub_11B8C0(v9 + 48, &v21, 0) )
            goto LABEL_27;
          v14 = v21;
          v15 = 8 * *(_DWORD *)(v9 + 52) - 1;
          v16 = 0;
          if ( (unsigned __int64)v15 <= 0x3F )
          {
            v16 = 1LL << v15;
            v14 = (2 * (1LL << v15) - 1) & v21;
          }
          if ( v16 == v14 )
            goto LABEL_27;
        }
        else if ( *(_DWORD *)v9 != 13 )
        {
          goto LABEL_27;
        }
        v11 = sub_1216A0(v9 + 32, v9 + 64, 0);
        v12 = *(int **)(v9 + 8);
        if ( !v11 )
          break;
        if ( !v12 )
          goto LABEL_29;
        if ( (v12[1] & 0x10) == 0 )
        {
          if ( ((*v12 - 29) & 0xFFFFFFFB) == 0 )
          {
            v20 = *v12;
            if ( !(unsigned __int8)sub_1216A0(v12 + 8, v9 + 64, 0) )
              goto LABEL_27;
            if ( v20 == 29 )
            {
              sub_1193D0(v9, v12);
              sub_121E20(v9 + 32, v12);
              if ( *v12 == 12 )
              {
                **(_DWORD **)(v9 + 40) = 13;
                sub_11C640(*(_QWORD *)(v9 + 40) + 48LL, v18, v21);
              }
LABEL_35:
              ++v10;
              goto LABEL_27;
            }
LABEL_25:
            if ( !(unsigned __int8)sub_11B8C0(v12 + 12, v22, 0) || v22[0] )
              goto LABEL_27;
            sub_1193D0(v9, v12);
            sub_120CC0(v9 + 48);
            if ( *v12 == 12 )
              sub_11C640(v9 + 48, v18, v21);
            goto LABEL_35;
          }
          if ( *v12 == 31 )
          {
            if ( !(unsigned __int8)sub_1216A0(v12 + 8, v9 + 64, 0) )
            {
LABEL_27:
              v9 = *(_QWORD *)(v9 + 8);
              goto LABEL_28;
            }
            goto LABEL_25;
          }
        }
        v9 = *(_QWORD *)(v9 + 8);
      }
      v9 = *(_QWORD *)(v9 + 8);
LABEL_28:
      ;
    }
    while ( v9 );
LABEL_29:
    if ( v10 > 0 )
    {
      v13 = *(_DWORD *)(v1 + 24);
      BYTE1(v13) &= ~2u;
      LOBYTE(v13) = v13 | 0x80;
      *(_DWORD *)(v1 + 24) = v13;
    }
    v1 = *(_QWORD *)(v1 + 8);
    v19 += v10;
  }
  while ( v1 );
  return v19;
}

