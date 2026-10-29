__int64 __fastcall sub_2570(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rbp
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  _DWORD *v7; // r8
  _DWORD *v8; // rbx
  __int64 i; // rdx
  unsigned int *v10; // rax
  char v11; // al
  char v12; // cl
  __int64 v13; // rax

  v2 = *(_QWORD *)(a1 + 224);
  if ( !v2 )
    return -1;
  v3 = *a2;
  if ( *a2 == -1 )
    return -1;
  v5 = *(_DWORD **)(a1 + 216);
  v6 = v2;
  v7 = &v5[v6];
  v8 = v5;
  for ( i = (v6 * 4) >> 2; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v10 = &v8[i >> 1];
      if ( *v10 >= v3 )
        break;
      v8 = v10 + 1;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_7;
    }
  }
LABEL_7:
  if ( v7 == v8 )
  {
    --v8;
  }
  else if ( v5 != v8 && v3 != *v8 )
  {
    v11 = netnode_charval();
    v5 = *(_DWORD **)(a1 + 216);
    v12 = v11;
    v13 = (unsigned int)*v8;
    if ( (v12 & 0x10) != 0 )
      v13 -= 4;
    if ( v3 != v13 )
      --v8;
  }
  return v8 - v5;
}

