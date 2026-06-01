__int64 __fastcall sub_EEF0(__int64 a1)
{
  int v1; // eax
  bool v2; // zf
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 592);
  if ( v1 == 1 )
    return 7;
  v2 = v1 == 2;
  result = 15;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  return result;
}

