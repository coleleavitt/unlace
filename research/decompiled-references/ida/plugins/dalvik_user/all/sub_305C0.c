bool __fastcall sub_305C0(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( a2 && a1[2] == a2[2] && a1[3] == a2[3] )
    return a1[4] == a2[4];
  return result;
}

