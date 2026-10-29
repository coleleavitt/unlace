__int64 __fastcall sub_385030(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *(_QWORD *)a1 == -1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 48 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    result = 0;
    if ( *(_DWORD *)(v3 + 8) == 61 )
      return *(_QWORD *)(v3 + 24);
  }
  else if ( v1 == 61 )
  {
    return *(_QWORD *)(a1 + 24);
  }
  else
  {
    result = 0;
    if ( v1 == 77 )
      return *(_QWORD *)(a1 + 24) + 64LL;
  }
  return result;
}

