__int64 __fastcall sub_1129C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rdx
  unsigned int v9; // r13d
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // r14d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int16 v16; // ax
  unsigned int *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r13d
  _DWORD *v21; // rax
  unsigned int v22; // [rsp+4h] [rbp-44h] BYREF
  __int64 v23; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v24[7]; // [rsp+10h] [rbp-38h] BYREF

  v24[1] = __readfsqword(0x28u);
  v23 = 0;
  if ( a3 <= 1 || *(_DWORD *)(a1 + 64) < a3 )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      73274,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 112);
    v24[0] = a2;
    v6 = *(_QWORD *)(v5 + 24);
    ++*(_WORD *)(v5 + 54);
    ++*(_DWORD *)(v6 + 24);
  }
  else
  {
    a2 = a3;
    v24[0] = sub_CC2C0(a1, a3);
  }
  v22 = sub_10D290(*(_QWORD *)(v4 + 112), a2);
  if ( !v22 )
  {
    v8 = *(_QWORD *)(v4 + 80);
    v9 = _byteswap_ulong(*(_DWORD *)(v8 + 36));
    *(_DWORD *)(v8 + 36) = _byteswap_ulong(v9 + 1);
    if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
    {
      v18 = v24[0];
      if ( !v24[0] )
      {
        a2 = a3;
        v22 = sub_C3B70((_QWORD *)a1, a3, v24);
        if ( v22 )
          goto LABEL_6;
        v18 = v24[0];
      }
      v22 = sub_10D290(*(_QWORD *)(v18 + 112), a2);
      if ( v22 )
        goto LABEL_6;
      a2 = 0;
      memset(*(void **)(v24[0] + 80LL), 0, *(unsigned int *)(*(_QWORD *)(v24[0] + 72LL) + 52LL));
    }
    if ( *(_BYTE *)(a1 + 33) )
    {
      a2 = a3;
      sub_111970(a1, a3, 2, 0, (int *)&v22);
      if ( v22 )
        goto LABEL_6;
    }
    if ( !v9 )
      goto LABEL_35;
    v10 = 73321;
    v9 = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v4 + 80) + 32LL));
    if ( *(_DWORD *)(a1 + 64) >= v9 )
    {
      a2 = v9;
      v22 = sub_C3B70((_QWORD *)a1, v9, &v23);
      if ( v22 )
        goto LABEL_6;
      v11 = *(_DWORD *)(a1 + 56) >> 2;
      v12 = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v23 + 80) + 4LL));
      if ( v11 - 2 >= v12 )
      {
        if ( v11 - 8 > v12 )
        {
          v13 = sub_10D290(*(_QWORD *)(v23 + 112), v9);
          v22 = v13;
          if ( v13 )
            goto LABEL_6;
          *(_DWORD *)(*(_QWORD *)(v23 + 80) + 4LL) = _byteswap_ulong(v12 + 1);
          *(_DWORD *)(*(_QWORD *)(v23 + 80) + 4 * v12 + 8) = _byteswap_ulong(a3);
          if ( v24[0] )
          {
            if ( (*(_BYTE *)(a1 + 40) & 4) == 0 )
            {
              v14 = *(_QWORD *)(v24[0] + 112LL);
              v15 = *(_QWORD *)(v14 + 40);
              if ( !*(_BYTE *)(v15 + 16) )
              {
                v16 = *(_WORD *)(v14 + 52);
                if ( (v16 & 2) != 0 && !*(_DWORD *)(v15 + 128) )
                  *(_WORD *)(v14 + 52) = v16 & 0xFFEB | 0x10;
              }
            }
          }
          if ( !*(_QWORD *)(a1 + 96) )
          {
            v20 = *(_DWORD *)(a1 + 64);
            v21 = sub_D2260(0x200u, a2);
            if ( !v21 )
            {
              *(_QWORD *)(a1 + 96) = 0;
              v13 = 7;
LABEL_29:
              v22 = v13;
              goto LABEL_6;
            }
            *v21 = v20;
            *(_QWORD *)(a1 + 96) = v21;
          }
          v17 = *(unsigned int **)(a1 + 96);
          if ( a3 <= *v17 )
            v13 = sub_D6EC0(v17, a3);
          goto LABEL_29;
        }
LABEL_35:
        v19 = v24[0];
        if ( !v24[0] )
        {
          a2 = a3;
          v22 = sub_C3B70((_QWORD *)a1, a3, v24);
          if ( v22 )
            goto LABEL_6;
          v19 = v24[0];
        }
        v22 = sub_10D290(*(_QWORD *)(v19 + 112), a2);
        if ( !v22 )
        {
          **(_QWORD **)(v24[0] + 80LL) = _byteswap_ulong(v9);
          *(_DWORD *)(*(_QWORD *)(v4 + 80) + 32LL) = _byteswap_ulong(a3);
        }
        goto LABEL_6;
      }
      v10 = 73332;
    }
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v10,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    v22 = 11;
  }
LABEL_6:
  if ( v24[0] )
  {
    *(_BYTE *)v24[0] = 0;
    if ( v24[0] )
      sub_C36A0(*(_QWORD *)(v24[0] + 112LL));
  }
  if ( v23 )
    sub_C36A0(*(_QWORD *)(v23 + 112));
  return v22;
}
