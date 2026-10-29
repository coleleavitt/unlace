__int64 __fastcall sub_3F4920(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rax
  _DWORD *v9; // rcx

  if ( *(_DWORD *)(a1 + 360) == a3 )
    return *(_QWORD *)(a1 + 4416);
  if ( *(_DWORD *)(a1 + 392) != a3 )
  {
    v4 = -1;
    if ( *(_DWORD *)(a1 + 388) == a3 )
    {
      v5 = *(_QWORD *)(a4 + 40);
      if ( v5 == a2 || v5 + 4 == a2 )
        return *(_QWORD *)(a1 + 4432);
    }
    return v4;
  }
  v4 = *(_QWORD *)(a1 + 4424);
  if ( v4 == -1 )
    return v4;
  v7 = *(_QWORD *)(a4 + 920);
  v8 = *(_DWORD **)(v7 + 8);
  v9 = &v8[*(_QWORD *)(v7 + 16)];
  if ( v8 == v9 )
    return v4;
  while ( a3 != *v8 )
  {
    if ( v9 == ++v8 )
      return v4;
  }
  if ( v8 != v9 )
    return -1;
  return v4;
}

