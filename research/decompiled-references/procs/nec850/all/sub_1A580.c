bool __fastcall sub_1A580(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 1;
  if ( *a1 >= *a2 )
  {
    result = 0;
    if ( *a1 == *a2 )
      return a1[1] > a2[1];
  }
  return result;
}
