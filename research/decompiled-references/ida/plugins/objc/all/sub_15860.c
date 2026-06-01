__int64 __fastcall sub_15860(_DWORD *a1)
{
  int _32bit; // eax
  unsigned int v2; // edx

  _32bit = get_32bit();
  v2 = 0;
  if ( _32bit != -1 )
  {
    *a1 = _32bit;
    return 1;
  }
  return v2;
}
