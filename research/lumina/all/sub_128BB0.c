__int64 __fastcall sub_128BB0(__int64 a1, __int64 a2, int *a3, double a4)
{
  char v4; // al
  int v6; // r12d
  int v7; // eax
  unsigned int v8; // r13d
  int i; // r14d
  unsigned int v10; // edx
  __int64 v11; // rax

  v4 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 0xB0 )
    v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == -79 )
  {
    v6 = **(_DWORD **)(a2 + 32);
  }
  else
  {
    if ( v4 != -118 )
      return sub_1289B0(a1, a2, a3, a4);
    v6 = **(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  }
  if ( v6 == 1 )
    return sub_1289B0(a1, a2, a3, a4);
  *a3 = 0;
  if ( *(_BYTE *)a2 == 0x8A )
    return sub_123390(a1, (char *)a2);
  v7 = *(_DWORD *)(a1 + 56);
  v8 = v7 + 1;
  *(_DWORD *)(a1 + 56) = v6 + v7;
  if ( v6 > 0 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v10 = v8 + i;
      v11 = 3LL * i;
      sub_127C90(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v11 + 8), v10, a4);
    }
  }
  return v8;
}
