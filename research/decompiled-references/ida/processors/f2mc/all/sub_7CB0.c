bool __fastcall sub_7CB0(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(a2 + 1) == 7 )
    return *(_QWORD *)(a1 + 16) + 7LL == *(_QWORD *)(a2 + 16);
  return result;
}

