__int64 *__fastcall sub_F2500(__int64 a1, __int64 a2, double a3)
{
  int v3; // ebx
  _BYTE *v6; // rdi
  __int64 *v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned __int8 *v11; // rsi
  __int64 v12; // rax
  char v13; // al

  v3 = *(unsigned __int16 *)(a2 + 96);
  if ( *(_DWORD *)(a1 + 48) )
    return nullptr;
  v6 = *(_BYTE **)a1;
  v7 = (*(_BYTE *)(a2 + 99) & 8) != 0
     ? sub_E3110(v6, *(unsigned __int16 *)(a2 + 94), v3 - (unsigned int)*(unsigned __int16 *)(a2 + 94))
     : sub_E3110(v6, *(unsigned __int16 *)(a2 + 96), 0);
  if ( !v7 )
    return nullptr;
  if ( v3 )
  {
    v8 = (unsigned int)(v3 - 1);
    v9 = 0;
    v10 = v8 + 1;
    do
    {
      v11 = *(unsigned __int8 **)(*(_QWORD *)(a2 + 64) + 8 * v9);
      v12 = 0;
      if ( v11 != "BINARY" )
        v12 = sub_F2480((__int64 *)a1, v11, a3);
      v7[v9 + 4] = v12;
      *(_BYTE *)(v7[3] + v9) = *(_BYTE *)(*(_QWORD *)(a2 + 56) + v9);
      ++v9;
    }
    while ( v10 != v9 );
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    v13 = *(_BYTE *)(a2 + 100);
    if ( (v13 & 1) == 0 )
    {
      *(_BYTE *)(a2 + 100) = v13 | 1;
      *(_DWORD *)(a1 + 24) = 513;
    }
    if ( (*(_DWORD *)v7)-- == 1 )
      sub_CFCD0(v7);
    return nullptr;
  }
  return v7;
}
