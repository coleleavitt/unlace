__int64 __fastcall sub_19120(__int64 a1, int a2)
{
  int v2; // esi
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 28) + a2;
  result = 0;
  if ( v2 <= 7 )
  {
    *(_DWORD *)(a1 + 28) = v2;
    return 1;
  }
  return result;
}

