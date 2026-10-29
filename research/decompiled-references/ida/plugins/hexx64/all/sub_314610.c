__int64 __fastcall sub_314610(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // dl
  __int64 result; // rax
  _QWORD *v6; // rdx
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx

  v4 = sub_316CB0((__int64 *)(a1 + 8), (__int64 **)(a2 + 8), a3, a4);
  result = 1;
  if ( v4 )
  {
    result = 3;
    if ( (*(_DWORD *)a1 & 0xF) == 2 && *(_QWORD *)(a1 + 16) == 1 )
    {
      v6 = *(_QWORD **)(a1 + 8);
      if ( !*v6 )
      {
        v7 = *(_DWORD *)(a1 + 4);
        v8 = -1;
        v9 = v6[1] - 1LL;
        if ( v7 != 8 )
          v8 = (1LL << (8 * (unsigned __int8)v7)) - 1;
        return (unsigned int)(v9 == v8) + 3;
      }
    }
  }
  return result;
}

