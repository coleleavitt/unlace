unsigned __int64 __fastcall sub_1253C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r12
  unsigned __int8 v7; // r8
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  char v10; // r13
  unsigned int v11; // eax
  char v13; // dl
  __int64 i; // rax
  char *v15; // rsi
  char v16; // al
  unsigned int v17; // r12d
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rax
  char v22; // r8
  int v23; // r13d
  __int64 v24; // r13
  int v25; // [rsp+0h] [rbp-48h] BYREF
  int v26; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  v27 = __readfsqword(0x28u);
  v25 = 0;
  v26 = 0;
  if ( !v5 || !a2 )
    return __readfsqword(0x28u) ^ v27;
  v7 = *(_BYTE *)a2;
  v8 = a3;
  v9 = a4;
  v10 = *(_BYTE *)a2 ^ 1;
  if ( *(_BYTE *)a2 == 49 )
  {
    if ( (_DWORD)a4 )
    {
      sub_124690(a1, a2, a3, a3, a5);
    }
    else
    {
      v23 = *(_DWORD *)(a1 + 68) - 1;
      *(_DWORD *)(a1 + 68) = v23;
      sub_124690(a1, a2, a3, v23, a5);
      sub_E0BB0(v5, v23);
    }
    goto LABEL_12;
  }
  if ( v7 > 0x31u )
  {
    if ( v7 > 0x39u )
    {
      if ( v7 != 0xAB )
      {
        if ( v7 == 0xAF )
        {
          v13 = *(_BYTE *)(a2 + 2);
          for ( i = *(_QWORD *)(a2 + 24); i; i = *(_QWORD *)(i + 16) )
          {
            if ( (*(_BYTE *)(i + 5) & 0x10) == 0 )
              break;
          }
          if ( (v13 == -85) == (*(_BYTE *)(*(_QWORD *)(i + 8) + 4LL) == 0) )
            sub_124FC0(a1, *(unsigned __int8 **)(a2 + 16), v8, 16 * (unsigned int)(v13 != -85), a5);
          else
            sub_1253C0(a1, *(_QWORD *)(a2 + 16), v8, 16 * (unsigned int)(v13 != -85));
          goto LABEL_12;
        }
        goto LABEL_37;
      }
      v10 = 53;
      v9 = 128;
    }
    else if ( v7 < 0x34u )
    {
      v11 = sub_1289B0(a1, *(_QWORD *)(a2 + 16), &v25);
      sub_E1710(v5, v10, v11, v8, 0);
      goto LABEL_12;
    }
    goto LABEL_29;
  }
  if ( v7 > 0x2Cu )
  {
    if ( v7 != 45 )
    {
      if ( v7 == 48 )
      {
        sub_12A140(a1, a2 + 16, a2 + 32, (unsigned int)a3, sub_1253C0, (unsigned int)a4);
        goto LABEL_12;
      }
LABEL_37:
      if ( (*(_DWORD *)(a2 + 4) & 0x20000001) == 0x20000000 )
      {
        sub_E1710(v5, 8, 0, a3, 0);
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 4) & 0x10000001) == 0x10000000 )
          return __readfsqword(0x28u) ^ v27;
        v20 = sub_1289B0(a1, a2, &v25);
        sub_E1710(v5, 16, v20, v8, v9 != 0);
      }
      goto LABEL_12;
    }
    v10 = 52;
    v9 = 128;
LABEL_29:
    v15 = *(char **)(a2 + 16);
    v16 = *v15;
    if ( *v15 == -80 )
      v16 = v15[2];
    if ( v16 == -79 )
    {
      v19 = **((_DWORD **)v15 + 4);
    }
    else
    {
      if ( v16 != -118 )
        goto LABEL_33;
      v19 = **(_DWORD **)(*((_QWORD *)v15 + 4) + 32LL);
    }
    if ( v19 > 1 )
      goto LABEL_37;
LABEL_33:
    v17 = sub_1289B0(a1, v15, &v25);
    v18 = sub_1289B0(a1, *(_QWORD *)(a2 + 24), &v26);
    if ( !*(_DWORD *)(a1 + 48) )
      sub_F3B90(
        a1,
        *(unsigned __int8 **)(a2 + 16),
        *(unsigned __int8 **)(a2 + 24),
        v10,
        v17,
        v18,
        a5,
        v8,
        v9,
        (*(_DWORD *)(a2 + 4) >> 9) & 1);
    goto LABEL_12;
  }
  if ( v7 >= 0x2Bu )
  {
    v21 = sub_EF200(a2);
    if ( a2 == v21 )
    {
      if ( v22 == 44 )
      {
        sub_1253C0(a1, *(_QWORD *)(a2 + 16), v8, v9);
        sub_1253C0(a1, *(_QWORD *)(a2 + 24), v8, v9);
      }
      else
      {
        v24 = (unsigned int)(*(_DWORD *)(a1 + 68) - 1);
        *(_DWORD *)(a1 + 68) = v24;
        sub_124FC0(a1, *(unsigned __int8 **)(a2 + 16), v24, v9 ^ 0x10, a5);
        sub_1253C0(a1, *(_QWORD *)(a2 + 24), v8, v9);
        sub_E0BB0(v5, v24);
      }
    }
    else
    {
      sub_1253C0(a1, v21, v8, v9);
    }
    goto LABEL_12;
  }
  if ( v7 != 19 )
    goto LABEL_37;
  sub_124FC0(a1, *(unsigned __int8 **)(a2 + 16), a3, a4, a5);
LABEL_12:
  if ( v25 )
    sub_CEFE0(a1, v25);
  if ( v26 )
    sub_CEFE0(a1, v26);
  return __readfsqword(0x28u) ^ v27;
}
