__int64 __fastcall sub_CFD60(__int64 a1, unsigned __int8 *a2)
{
  int v2; // eax
  _DWORD *v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  _DWORD *v7; // rdx
  __int64 v8; // rax
  int v9; // eax

  v2 = *a2;
  if ( v2 == 167 || v2 == 179 )
  {
    v7 = *(_DWORD **)(a1 + 40);
    v8 = *((int *)a2 + 11);
    if ( (int)v8 < *v7 )
    {
      v9 = v7[v8 + 1];
      if ( v9 > 0 )
        *((_DWORD *)a2 + 11) = v9;
    }
  }
  if ( (a2[4] & 1) != 0 )
  {
    v3 = *(_DWORD **)(a1 + 40);
    v4 = *((int *)a2 + 13);
    if ( (int)v4 < *v3 )
    {
      v5 = v3[v4 + 1];
      if ( v5 > 0 )
        *((_DWORD *)a2 + 13) = v5;
    }
  }
  return 0;
}
