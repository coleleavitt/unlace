__int64 __fastcall sub_1EC90(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // r13d
  unsigned int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi

  v3 = 1;
  v6 = *a2;
  v7 = *(_DWORD *)(a1 + 12);
  if ( v6 < v7 )
  {
    v8 = *a2;
    if ( !(_WORD)v6 )
    {
      *(_BYTE *)(a1 + 8) |= 0x10u;
      v8 = *a2;
    }
    v3 = 0;
    add_dref(a3, *(_QWORD *)(a1 + 16) + v8, 5);
    v7 = *(_DWORD *)(a1 + 12);
  }
  v9 = a2[1];
  v10 = v9;
  if ( v7 < (unsigned int)v9 )
  {
    v3 = 1;
    v11 = a2[2];
    if ( (unsigned int)v11 >= v7 )
      return 1;
  }
  else
  {
    if ( (_DWORD)v9 == v7 )
    {
      *(_BYTE *)(a1 + 8) |= 0x20u;
      v10 = a2[1];
    }
    add_dref(a3, *(_QWORD *)(a1 + 16) + v10, 5);
    v11 = a2[2];
    if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 12) )
      return 1;
  }
  add_dref(a3, *(_QWORD *)(a1 + 16) + v11, 5);
  return v3;
}
