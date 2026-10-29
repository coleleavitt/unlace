bool __fastcall sub_2A9480(__int64 a1)
{
  bool result; // al

  result = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 56) )
    return *(_DWORD *)(a1 + 16) != *(_DWORD *)(a1 + 64);
  return result;
}

