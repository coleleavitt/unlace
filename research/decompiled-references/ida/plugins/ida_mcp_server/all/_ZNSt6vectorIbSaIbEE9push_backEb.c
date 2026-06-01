__int64 __fastcall std::vector<bool>::push_back(__int64 a1, char a2)
{
  int v3; // ecx
  __int64 *v4; // rsi
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 16);
  if ( v4 == *(__int64 **)(a1 + 32) )
    return std::vector<bool>::_M_insert_aux();
  if ( v3 == 63 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = v4 + 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = v3 + 1;
  }
  result = *v4 | (1LL << v3);
  if ( !a2 )
    result = *v4 & ~(1LL << v3);
  *v4 = result;
  return result;
}

