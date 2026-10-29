__int64 __fastcall sub_15880(_WORD *a1)
{
  __int16 _16bit; // ax
  unsigned int v2; // edx

  _16bit = get_16bit();
  v2 = 0;
  if ( _16bit != -1 )
  {
    *a1 = _16bit;
    return 1;
  }
  return v2;
}
