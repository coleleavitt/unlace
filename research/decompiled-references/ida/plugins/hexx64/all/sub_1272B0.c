__int64 __fastcall sub_1272B0(__int64 a1, unsigned __int64 *a2, int a3, __int64 a4, double a5)
{
  __int64 v8; // rsi
  char v9; // al
  unsigned int *v10; // rsi
  bool v11; // al
  int v12; // edx
  unsigned int v13; // [rsp+0h] [rbp-1Ch]
  unsigned int v14; // [rsp+0h] [rbp-1Ch]
  unsigned int v15; // [rsp+0h] [rbp-1Ch]

  if ( *(_DWORD *)(a1 + 4) <= a3 )
    return 0;
  if ( !a3 )
    return 0;
  if ( (*(_BYTE *)(a1 + 1) & 4) == 0 )
  {
    if ( *(_BYTE *)a1 != 4 )
      goto LABEL_7;
    v10 = *(unsigned int **)(a1 + 8);
    v14 = a4;
    v11 = sub_122600(v10);
    a4 = v14;
    if ( !v11 )
      goto LABEL_15;
  }
  v15 = a4;
  if ( !sub_11CAD0(a3) )
    return 0;
  a4 = v15;
  if ( *(_BYTE *)a1 == 4 )
  {
    v10 = *(unsigned int **)(a1 + 8);
LABEL_15:
    if ( *v10 == 10 )
    {
      *(_DWORD *)(a1 + 4) = a3;
      v10[17] = a3;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 65LL) &= ~4u;
      *(_BYTE *)(a1 + 1) &= ~4u;
      return 1;
    }
  }
LABEL_7:
  v8 = a2[12];
  if ( !*(_BYTE *)(v8 + 145) )
    return sub_1274C0((unsigned __int8 *)a1, (__int64)a2, (unsigned int)a3, a4);
  v13 = a4;
  v9 = sub_11BB90((unsigned __int8 *)a1, v8, 0, a5);
  a4 = v13;
  if ( !v9 )
    return sub_1274C0((unsigned __int8 *)a1, (__int64)a2, (unsigned int)a3, a4);
  v12 = *(_DWORD *)(a1 + 4);
  if ( a3 < v12 )
    return sub_126F10((int *)a1, a2, v12 - a3, v13, a5);
  return 0;
}

