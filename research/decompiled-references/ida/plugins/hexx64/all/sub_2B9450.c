__int64 __fastcall sub_2B9450(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  __int64 result; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v3 = *(_DWORD *)(a1 + 32);
  if ( v3 < *(_DWORD *)(a2 + 32) )
    return 0xFFFFFFFFLL;
  if ( v3 > *(_DWORD *)(a2 + 32) )
    return 1;
  if ( v3 != 2 )
    return sub_3307E0((int *)a1, (int *)a2);
  result = sub_1C2AD0((int *)a1, (int *)a2, a3);
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a2 + 16);
    if ( v5 < v6 )
      return 0xFFFFFFFFLL;
    else
      return v6 < v5;
  }
  return result;
}

