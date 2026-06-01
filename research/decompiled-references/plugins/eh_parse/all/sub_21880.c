char __fastcall sub_21880(__int64 a1)
{
  char result; // al

  result = getinf_flag(3, 4);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 64) )
      return *(_QWORD *)(a1 + 40) != -1;
    else
      return sub_215D0(a1);
  }
  return result;
}
