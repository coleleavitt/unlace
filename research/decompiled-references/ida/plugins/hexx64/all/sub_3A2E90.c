bool __fastcall sub_3A2E90(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 24) )
    return *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32);
  return result;
}

