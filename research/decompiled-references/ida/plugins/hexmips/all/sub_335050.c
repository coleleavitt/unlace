bool __fastcall sub_335050(__int64 a1, char a2)
{
  int v2; // eax

  qsnprintf();
  v2 = time(nullptr);
  if ( !a2 )
    return (int)(v2 - reg_int_op()) > 604800;
  reg_int_op();
  return a2;
}

