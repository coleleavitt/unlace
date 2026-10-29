bool __fastcall sub_5FEB0(_QWORD *a1, int a2)
{
  bool result; // al

  result = 0;
  if ( a2 >= 0 && (unsigned __int64)a2 < a1[1] )
    return (*(_QWORD *)(*a1 + 8LL * (a2 >> 6)) & (1LL << a2)) != 0;
  return result;
}

