bool __fastcall sub_3CAC30(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16)
    && *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24)
    && *(_QWORD *)(a1 + 40) == *(_QWORD *)(a2 + 40)
    && *(_QWORD *)(a1 + 56) == *(_QWORD *)(a2 + 56) )
  {
    return *(_QWORD *)(a1 + 64) == *(_QWORD *)(a2 + 64);
  }
  return result;
}

