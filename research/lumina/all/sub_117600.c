__int64 __fastcall sub_117600(__int64 a1, __int64 a2, char a3, int *a4)
{
  char v7; // al
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  __int64 v11; // r10
  int v12; // r12d
  int v13; // r14d
  int i; // r11d
  char *v15; // rdi
  int v16; // r11d
  unsigned __int64 v17; // rax
  int v19; // eax
  __int16 v20; // dx
  __int64 v21; // rsi
  __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( !*(_BYTE *)a1 )
  {
    v7 = *(_BYTE *)(a1 + 1);
    if ( (v7 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 48);
      if ( v8 == a2 )
      {
        v10 = 0;
        *a4 = 0;
        return v10;
      }
      if ( v8 < a2 )
      {
        if ( (v7 & 8) != 0 )
          goto LABEL_27;
        if ( v8 + 1 == a2 )
        {
          *a4 = 0;
          v24 = sub_1175B0(a1);
          v10 = v24;
          if ( v24 )
          {
            if ( v24 != 101 )
              return v10;
          }
          else
          {
            sub_C7ED0(a1);
            if ( *(_QWORD *)(a1 + 48) == a2 )
              return v10;
          }
        }
      }
    }
  }
  v9 = sub_EC330(a1);
  v10 = v9;
  if ( v9 )
  {
    if ( v9 != 16 )
      return v10;
LABEL_27:
    v10 = 0;
    *a4 = -1;
    return v10;
  }
  while ( 2 )
  {
    v11 = *(_QWORD *)(a1 + 136);
    v12 = 0;
    v13 = *(unsigned __int16 *)(v11 + 24) - 1;
    for ( i = v13 >> (1 - a3); ; i = (v12 + v13) >> 1 )
    {
      v15 = (char *)(*(_QWORD *)(v11 + 104)
                   + (unsigned __int16)(*(_WORD *)(v11 + 26) & __ROL2__(*(_WORD *)(*(_QWORD *)(v11 + 96) + 2 * i), 8)));
      if ( *(_BYTE *)(v11 + 2) )
      {
        while ( *v15++ < 0 )
        {
          if ( *(_QWORD *)(v11 + 88) <= (unsigned __int64)v15 )
          {
            sub_E8BB0(
              0xBu,
              "%s at line %d of [%.10s]",
              "database corruption",
              72348,
              "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
            return 11;
          }
        }
      }
      sub_C2860(v15, v26);
      v17 = v26[0];
      if ( (__int64)v26[0] >= a2 )
        break;
      v12 = v16 + 1;
      if ( v13 < v16 + 1 )
      {
        v19 = -1;
LABEL_21:
        if ( !*(_BYTE *)(v11 + 8) )
        {
          v20 = v12;
          goto LABEL_23;
        }
        *(_WORD *)(a1 + 86) = v16;
        *a4 = v19;
        v23 = 0;
LABEL_26:
        v10 = v23;
        *(_WORD *)(a1 + 70) = 0;
        return v10;
      }
LABEL_12:
      ;
    }
    if ( (__int64)v26[0] > a2 )
    {
      v13 = v16 - 1;
      if ( v12 > v16 - 1 )
      {
        v19 = 1;
        goto LABEL_21;
      }
      goto LABEL_12;
    }
    *(_WORD *)(a1 + 86) = v16;
    v20 = v16;
    if ( !*(_BYTE *)(v11 + 8) )
    {
      v12 = v16;
LABEL_23:
      v21 = *(_QWORD *)(v11 + 80);
      if ( *(unsigned __int16 *)(v11 + 24) > v12 )
        v22 = _byteswap_ulong(*(_DWORD *)(v21
                                        + (unsigned __int16)(*(_WORD *)(v11 + 26)
                                                           & __ROL2__(*(_WORD *)(*(_QWORD *)(v11 + 96) + 2 * v12), 8))));
      else
        v22 = _byteswap_ulong(*(_DWORD *)(v21 + *(unsigned __int8 *)(v11 + 9) + 8));
      *(_WORD *)(a1 + 86) = v20;
      v23 = sub_EBEA0(a1, v22);
      if ( v23 )
        goto LABEL_26;
      continue;
    }
    break;
  }
  *(_QWORD *)(a1 + 48) = v17;
  *(_BYTE *)(a1 + 1) |= 2u;
  *(_WORD *)(a1 + 70) = 0;
  *a4 = 0;
  return v10;
}
