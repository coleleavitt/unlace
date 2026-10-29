__int64 __fastcall sub_D09A0(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v4; // rdx
  int *v5; // rsi
  __int64 v6; // rax
  int *v7; // rsi
  __int64 v8; // rax
  int v10; // eax
  int v11; // esi
  int *v12; // rsi

  v2 = 0;
  if ( *(_BYTE *)a2 == 0xB3 )
  {
    v11 = *(_DWORD *)(a2 + 44);
    v2 = 1;
    if ( v11 != a1[2] )
      v2 = sub_D08E0((__int64)a1, v11);
  }
  if ( *(_QWORD *)(a2 + 16) )
    v2 |= sub_D0AB0(a1);
  if ( *(_QWORD *)(a2 + 24) )
  {
    v2 |= sub_D0AB0(a1);
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 4);
    if ( (v10 & 0x800) != 0 )
    {
      if ( (v10 & 0x20) != 0 )
        *a1 = 1;
      v2 |= sub_D0B00(a1, *(_QWORD *)(a2 + 32));
    }
    else
    {
      v12 = *(int **)(a2 + 32);
      if ( v12 )
        v2 |= sub_D0930((__int64)a1, v12);
    }
  }
  if ( (*(_BYTE *)a2 & 0xFB) == 0xA8 && (*(_BYTE *)(a2 + 7) & 1) != 0 )
  {
    v4 = *(_QWORD **)(a2 + 64);
    v5 = (int *)v4[2];
    if ( v5 )
    {
      v6 = sub_D0930((__int64)a1, v5);
      v4 = *(_QWORD **)(a2 + 64);
      v2 |= v6;
    }
    v7 = (int *)v4[3];
    if ( v7 )
    {
      v8 = sub_D0930((__int64)a1, v7);
      v4 = *(_QWORD **)(a2 + 64);
      v2 |= v8;
    }
    if ( v4[9] )
      return sub_D0AB0(a1) | v2;
  }
  return v2;
}
