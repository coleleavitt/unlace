__int64 __fastcall sub_10CEA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int *v4; // rdi
  unsigned int v5; // r9d
  __int16 v6; // ax
  unsigned int v7; // r12d
  unsigned int v8; // eax
  __int64 v10; // r13
  int v11; // r14d
  _DWORD *v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r14d
  unsigned int v16; // [rsp+Ch] [rbp-2Ch]

  v3 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v3 + 21) == 2 )
  {
    v7 = *(_DWORD *)(v3 + 48);
    if ( v7 )
      return v7;
    if ( !*(_QWORD *)(v3 + 296) && *(_BYTE *)(v3 + 9) != 2 )
    {
      v10 = *(_QWORD *)v3;
      v11 = *(_DWORD *)(v3 + 32);
      v12 = sub_D2260(0x200u, a2);
      if ( !v12 )
      {
        *(_QWORD *)(v3 + 64) = 0;
        return 7;
      }
      *v12 = v11;
      v13 = *(_QWORD **)(v3 + 80);
      *(_QWORD *)(v3 + 64) = v12;
      if ( !*v13 )
      {
        if ( *(_BYTE *)(v3 + 9) == 4 )
        {
          a2 = 0;
          sub_CDA90(0, 0, (__int64)v13, 0, -1);
        }
        else
        {
          v15 = 2054;
          if ( *(_BYTE *)(v3 + 16) )
          {
            v7 = dword_24149C;
            v15 = 4110;
          }
          v14 = sub_C35E0(v3);
          if ( v14 )
            goto LABEL_22;
          a2 = *(_QWORD *)(v3 + 224);
          v14 = sub_CDA90(v10, a2, *(_QWORD *)(v3 + 80), v15, v7);
          if ( v14 )
            goto LABEL_22;
        }
      }
      *(_DWORD *)(v3 + 52) = 0;
      *(_QWORD *)(v3 + 96) = 0;
      *(_BYTE *)(v3 + 24) = 0;
      *(_QWORD *)(v3 + 104) = 0;
      v14 = sub_10CD00(v3, a2);
      if ( v14 )
      {
LABEL_22:
        v16 = v14;
        sub_C9E70(*(_QWORD *)(v3 + 64), a2);
        *(_QWORD *)(v3 + 64) = 0;
        return v16;
      }
    }
    *(_BYTE *)(v3 + 21) = 3;
  }
  sub_C31A0(a1);
  v4 = *(unsigned int **)(v3 + 64);
  if ( v4 && !(unsigned int)sub_C2ED0(v4, *(_DWORD *)(a1 + 48)) )
  {
    if ( v5 > *(_DWORD *)(v3 + 36) )
    {
      v6 = *(_WORD *)(a1 + 52);
      if ( *(_BYTE *)(v3 + 21) != 4 )
        v6 |= 8u;
      goto LABEL_9;
    }
    v7 = sub_D7330(a1);
    if ( v7 )
      return v7;
  }
  v6 = *(_WORD *)(a1 + 52);
LABEL_9:
  v7 = 0;
  *(_WORD *)(a1 + 52) = v6 | 4;
  if ( *(int *)(v3 + 128) > 0 )
  {
    v7 = sub_D7190(a1);
    v8 = *(_DWORD *)(a1 + 48);
    if ( *(_DWORD *)(v3 + 32) >= v8 )
      return v7;
    goto LABEL_11;
  }
  v8 = *(_DWORD *)(a1 + 48);
  if ( *(_DWORD *)(v3 + 32) < v8 )
LABEL_11:
    *(_DWORD *)(v3 + 32) = v8;
  return v7;
}
