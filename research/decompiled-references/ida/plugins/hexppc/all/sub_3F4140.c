__int64 __fastcall sub_3F4140(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // rdx
  char v7; // cl
  char v8; // al

  v4 = a3;
  if ( (unsigned int)a3 > 7 || (dword_41C120[a3] & a2) == 0 )
  {
    v8 = *(_BYTE *)(a1 + 40LL * a3 + 65);
    if ( (unsigned __int8)(v8 - 11) > 1u && v8 != 1 )
      return 0xFFFFFFFFLL;
  }
  result = sub_3F3B40(a1, a3, a4);
  v6 = a1 + 40 * v4;
  v7 = *(_BYTE *)(v6 + 65);
  if ( v7 == 11 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL) + 4 * (unsigned int)*(unsigned __int16 *)(v6 + 70);
  if ( v7 == 12 )
    return *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL) + (unsigned int)*(unsigned __int16 *)(v6 + 70);
  return result;
}

