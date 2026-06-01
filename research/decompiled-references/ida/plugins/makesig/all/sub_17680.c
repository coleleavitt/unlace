__int64 __fastcall sub_17680(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 v5; // r12
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int8 v12; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  *(_BYTE *)(a2 + 28) = 0;
  if ( qlread(*(_QWORD *)(a1 + 16), &v12, 1) == 1 )
  {
    v5 = v12;
    if ( *(_BYTE *)a1 )
      return 2;
    if ( v12 <= 0x1Fu )
    {
      *(_BYTE *)(a2 + 28) = v12;
      if ( !*(_BYTE *)a1 )
        goto LABEL_9;
      return 2;
    }
    while ( 1 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( v6 )
        break;
      while ( 1 )
      {
        v9 = *(_QWORD *)a2;
        v8 = 1;
        v7 = 2;
        if ( *(_QWORD *)(a2 + 16) < 2u )
        {
LABEL_12:
          v10 = qvector_reserve(a2, v9, v7, 1);
          *(_QWORD *)a2 = v10;
          v9 = v10;
        }
LABEL_8:
        *(_QWORD *)(a2 + 8) = v7;
        *(_BYTE *)(v9 + v6) = v5;
        *(_BYTE *)(*(_QWORD *)a2 + v8) = 0;
        if ( *(_BYTE *)a1 )
          return 2;
LABEL_9:
        if ( qlread(*(_QWORD *)(a1 + 16), &v12, 1) == 1 )
          break;
        *(_BYTE *)a1 = 1;
        v6 = *(_QWORD *)(a2 + 8);
        v5 = v12;
        if ( v6 )
          goto LABEL_7;
      }
      v5 = v12;
      if ( v12 <= 0x1Fu && *(_BYTE *)a1 != 1 )
      {
        *a3 = v12;
        return 0;
      }
    }
LABEL_7:
    v7 = v6 + 1;
    v8 = v6;
    v9 = *(_QWORD *)a2;
    --v6;
    if ( *(_QWORD *)(a2 + 16) < v7 )
      goto LABEL_12;
    goto LABEL_8;
  }
  *(_BYTE *)a1 = 1;
  return 2;
}

