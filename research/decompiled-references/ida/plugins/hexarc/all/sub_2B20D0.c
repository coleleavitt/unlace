__int64 __fastcall sub_2B20D0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 < *(_DWORD *)(a2 + 32) )
    return 0xFFFFFFFFLL;
  if ( v2 > *(_DWORD *)(a2 + 32) )
    return 1;
  if ( v2 != 2 )
    return sub_329190(a1, a2);
  result = sub_1BC250((int *)a1, (int *)a2);
  if ( !(_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a2 + 16);
    if ( v4 < v5 )
      return 0xFFFFFFFFLL;
    else
      return v5 < v4;
  }
  return result;
}

