bool __fastcall sub_30700(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
    return *(_QWORD *)(a1 + 48) == *(_QWORD *)(a2 + 48);
  return result;
}

