bool __fastcall sub_30600(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
      return *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32);
  }
  return result;
}

