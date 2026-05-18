__int64 __fastcall sub_136CC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int16 v4; // r14
  unsigned int v5; // r13d
  __int64 v7; // r15
  char v8; // al
  int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // rax
  _QWORD *v12; // r9
  int *v13; // rsi
  __int16 v14; // dx
  int v16; // edx
  _QWORD *v17; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-58h]
  _QWORD *v21; // [rsp+0h] [rbp-58h]
  char v22; // [rsp+Bh] [rbp-4Dh]
  int v23; // [rsp+Ch] [rbp-4Ch]
  _QWORD *v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)a1;
  v24[1] = (_QWORD *)__readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 63) != 1 )
  {
    v4 = *(_WORD *)(a2 + 54);
    v5 = 0;
    if ( v4 > 0 )
      return v5;
    if ( v4 )
    {
      v5 = 1;
      sub_DBD10(a1, "view %s is circularly defined", *(const char **)a2);
      return v5;
    }
    v5 = 1;
    v7 = sub_DD450(v3, *(char **)(a2 + 64), 0);
    if ( !v7 )
      goto LABEL_14;
    v8 = *(_BYTE *)(a1 + 292);
    v9 = *(_DWORD *)(a1 + 52);
    *(_BYTE *)(a1 + 292) = 0;
    v23 = v9;
    v22 = v8;
    sub_C48E0(a1, *(int **)(v7 + 40));
    *(_WORD *)(a2 + 54) = -1;
    ++*(_DWORD *)(v3 + 408);
    v10 = *(_QWORD *)(v3 + 496);
    *(_WORD *)(v3 + 412) = 0;
    *(_QWORD *)(v3 + 496) = 0;
    v20 = v10;
    v11 = sub_11F0B0(a1, v7, 64);
    v12 = (_QWORD *)v11;
    *(_QWORD *)(v3 + 496) = v20;
    *(_DWORD *)(a1 + 52) = v23;
    if ( v11 )
    {
      v13 = *(int **)(a2 + 32);
      if ( v13 )
      {
        v21 = (_QWORD *)v11;
        sub_11EBA0(*(_QWORD *)a1, v13, (_WORD *)(a2 + 54), (__int64 **)(a2 + 8));
        v5 = *(_DWORD *)(a1 + 48);
        v12 = v21;
        if ( !v5 )
        {
          v4 = *(_WORD *)(a2 + 54);
          if ( v4 == **(_DWORD **)(v7 + 32) )
          {
            sub_F41F0(a1, a2, v7, 64);
            v4 = *(_WORD *)(a2 + 54);
            v12 = v21;
          }
          goto LABEL_11;
        }
      }
      else
      {
        *(_WORD *)(a2 + 54) = *(_WORD *)(v11 + 54);
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v11 + 8);
        *(_DWORD *)(a2 + 48) |= *(_DWORD *)(v11 + 48) & 0x62;
        *(_WORD *)(v11 + 54) = 0;
        *(_QWORD *)(v11 + 8) = 0;
      }
      v4 = *(_WORD *)(a2 + 54);
      v5 = 0;
    }
    else
    {
      *(_WORD *)(a2 + 54) = 0;
    }
LABEL_11:
    *(_WORD *)(a2 + 56) = v4;
    sub_D8230(v3, v12);
    sub_D75C0(v3, (_QWORD *)v7, 1);
    v14 = 0;
    if ( (*(_DWORD *)(v3 + 408))-- == 1 )
      v14 = *(_WORD *)(v3 + 414);
    *(_WORD *)(v3 + 412) = v14;
    *(_BYTE *)(a1 + 292) = v22;
LABEL_14:
    *(_WORD *)(*(_QWORD *)(a2 + 96) + 114LL) |= 2u;
    if ( *(_BYTE *)(v3 + 103) )
      sub_D78A0(v3, a2);
    return v5;
  }
  v16 = *(_DWORD *)(v3 + 72) + 1;
  *(_DWORD *)(v3 + 72) = v16;
  v17 = *(_QWORD **)(a2 + 80);
  v18 = *(_QWORD *)a1;
  if ( v17 )
  {
    while ( v18 != *v17 )
    {
      v17 = (_QWORD *)v17[5];
      if ( !v17 )
        goto LABEL_23;
    }
    v5 = 0;
  }
  else
  {
LABEL_23:
    v19 = sub_C2AB0(v18 + 536, **(unsigned __int8 ***)(a2 + 72), nullptr)[2];
    if ( v19 )
    {
      v24[0] = nullptr;
      v5 = sub_E8340(
             v18,
             (const char **)a2,
             v19,
             *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const char *, __int64, const char **))(*(_QWORD *)v19 + 16LL),
             (__int64 *)v24);
      if ( v5 )
      {
        sub_DBD10(a1, "%s", (const char *)v24[0]);
        *(_DWORD *)(a1 + 24) = v5;
      }
      if ( v24[0] )
        sub_C9250(v18, v24[0]);
      v16 = *(_DWORD *)(v3 + 72);
    }
    else
    {
      v5 = 1;
      sub_DBD10(a1, "no such module: %s", **(const char ***)(a2 + 72));
      v16 = *(_DWORD *)(v3 + 72);
    }
  }
  *(_DWORD *)(v3 + 72) = v16 - 1;
  return v5;
}
