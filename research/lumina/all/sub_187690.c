_BYTE *__fastcall sub_187690(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  int v4; // r12d
  _BYTE *v5; // r14
  int v6; // eax
  int v8; // eax
  _BYTE *v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a4;
  v9[0] = a3;
  while ( 1 )
  {
    v5 = a3;
    v6 = sub_18ECE0(v9);
    if ( v6 == -1 )
      v6 = (char)*v9[0]++;
    if ( !v6 )
      break;
    v5 = v9[0];
    a3 = v9[0];
    if ( *(char *)(a1 + 184) == v6 )
    {
      v8 = sub_18ECE0(v9);
      if ( v8 == -1 )
        v8 = (char)*v9[0]++;
      if ( !v8 )
        break;
      a3 = v9[0];
    }
    else if ( v4 == v6 )
    {
      sub_187440(a1, a2, v9[0], *(_DWORD *)(a1 + 124));
      return v9[0];
    }
  }
  sub_187440(a1, a2, v5, *(_DWORD *)(a1 + 176));
  return nullptr;
}
