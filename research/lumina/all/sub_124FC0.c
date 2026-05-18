unsigned __int64 __fastcall sub_124FC0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r12
  int v7; // r15d
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  unsigned int v10; // eax
  unsigned __int8 v12; // dl
  __int64 i; // rax
  char *v14; // rsi
  char v15; // al
  unsigned int v16; // r12d
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  bool v21; // zf
  unsigned int v22; // ecx
  int v23; // r15d
  __int64 v24; // r15
  int v25; // [rsp+0h] [rbp-48h] BYREF
  int v26; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  v27 = __readfsqword(0x28u);
  v25 = 0;
  v26 = 0;
  if ( !v5 || !a2 )
    return __readfsqword(0x28u) ^ v27;
  v7 = *a2;
  v8 = a3;
  v9 = a4;
  if ( (_BYTE)v7 == 49 )
  {
    v21 = (_DWORD)a4 == 0;
    v22 = a3;
    v23 = *(_DWORD *)(a1 + 68) - 1;
    if ( v21 )
      v22 = *(_DWORD *)(a1 + 68) - 1;
    *(_DWORD *)(a1 + 68) = v23;
    sub_124690(a1, (__int64)a2, v23, v22, a5);
    sub_E1710(v5, 8, 0, v8, 0);
    sub_E0BB0(v5, v23);
    goto LABEL_12;
  }
  if ( (unsigned __int8)v7 > 0x31u )
  {
    if ( (unsigned __int8)v7 <= 0x39u )
    {
      if ( (unsigned __int8)v7 < 0x34u )
      {
        v10 = sub_1289B0(a1, *((_QWORD *)a2 + 2), &v25);
        sub_E1710(v5, v7, v10, v8, 0);
        goto LABEL_12;
      }
LABEL_31:
      v14 = *((char **)a2 + 2);
      v15 = *v14;
      if ( *v14 == -80 )
        v15 = v14[2];
      if ( v15 == -79 )
      {
        v18 = **((_DWORD **)v14 + 4);
      }
      else
      {
        if ( v15 != -118 )
          goto LABEL_35;
        v18 = **(_DWORD **)(*((_QWORD *)v14 + 4) + 32LL);
      }
      if ( v18 > 1 )
        goto LABEL_39;
LABEL_35:
      v16 = sub_1289B0(a1, v14, &v25);
      v17 = sub_1289B0(a1, *((_QWORD *)a2 + 3), &v26);
      if ( !*(_DWORD *)(a1 + 48) )
        sub_F3B90(
          a1,
          *((unsigned __int8 **)a2 + 2),
          *((unsigned __int8 **)a2 + 3),
          v7,
          v16,
          v17,
          a5,
          v8,
          v9,
          (*((_DWORD *)a2 + 1) >> 9) & 1);
      goto LABEL_12;
    }
    if ( (_BYTE)v7 != 0xAB )
    {
      if ( (_BYTE)v7 == 0xAF )
      {
        v12 = a2[2];
        for ( i = *((_QWORD *)a2 + 3); i; i = *(_QWORD *)(i + 16) )
        {
          if ( (*(_BYTE *)(i + 5) & 0x10) == 0 )
            break;
        }
        if ( (v12 == 0xAB) == (*(_BYTE *)(*(_QWORD *)(i + 8) + 4LL) == 0) )
          sub_1253C0(a1, *((_QWORD *)a2 + 2), v8, 16 * (unsigned int)(v12 == 0xAB));
        else
          sub_124FC0(a1, *((_QWORD *)a2 + 2), v8, 16 * (unsigned int)(v12 == 0xAB));
        goto LABEL_12;
      }
      goto LABEL_39;
    }
LABEL_28:
    if ( v7 == 45 )
      LOBYTE(v7) = 53;
    else
      LOBYTE(v7) = 52;
    v9 = 128;
    goto LABEL_31;
  }
  if ( (unsigned __int8)v7 > 0x2Cu )
  {
    if ( (_BYTE)v7 != 45 )
    {
      if ( (_BYTE)v7 == 48 )
      {
        sub_12A140(a1, a2 + 16, a2 + 32, (unsigned int)a3, sub_124FC0, (unsigned int)a4);
        goto LABEL_12;
      }
LABEL_39:
      if ( (*((_DWORD *)a2 + 1) & 0x10000001) == 0x10000000 )
      {
        sub_E1710(v5, 8, 0, a3, 0);
      }
      else
      {
        if ( (*((_DWORD *)a2 + 1) & 0x20000001) == 0x20000000 )
          return __readfsqword(0x28u) ^ v27;
        v19 = sub_1289B0(a1, a2, &v25);
        sub_E1710(v5, 15, v19, v8, v9 != 0);
      }
      goto LABEL_12;
    }
    goto LABEL_28;
  }
  if ( (unsigned __int8)v7 >= 0x2Bu )
  {
    v20 = sub_EF200((__int64)a2);
    if ( a2 == (unsigned __int8 *)v20 )
    {
      if ( v7 == 44 )
      {
        v24 = (unsigned int)(*(_DWORD *)(a1 + 68) - 1);
        *(_DWORD *)(a1 + 68) = v24;
        sub_1253C0(a1, *((_QWORD *)a2 + 2), v24, v9 ^ 0x10);
        sub_124FC0(a1, *((_QWORD *)a2 + 3), v8, v9);
        sub_E0BB0(v5, v24);
      }
      else
      {
        sub_124FC0(a1, *((_QWORD *)a2 + 2), v8, v9);
        sub_124FC0(a1, *((_QWORD *)a2 + 3), v8, v9);
      }
    }
    else
    {
      sub_124FC0(a1, v20, v8, v9);
    }
    goto LABEL_12;
  }
  if ( (_BYTE)v7 != 19 )
    goto LABEL_39;
  sub_1253C0(a1, *((_QWORD *)a2 + 2), a3, a4);
LABEL_12:
  if ( v25 )
    sub_CEFE0(a1, v25);
  if ( v26 )
    sub_CEFE0(a1, v26);
  return __readfsqword(0x28u) ^ v27;
}
