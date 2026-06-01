bool __fastcall sub_33A3D0(__int64 a1, char a2)
{
  int v2; // eax

  qsnprintf();
  v2 = time(nullptr);
  if ( !a2 )
    return (int)(v2 - reg_int_op()) > (int)&loc_93A80;
  reg_int_op();
  return a2;
}

