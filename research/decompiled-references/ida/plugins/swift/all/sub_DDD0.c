__int64 __fastcall sub_DDD0(__int64 a1, double a2)
{
  unsigned int v2; // ebp

  create_data(a1, 0x20000000, 4, -1);
  v2 = op_offset(a1, 0, 4610, -1, 0, 0);
  if ( !(_BYTE)v2 )
    sub_CB10((__int64)"could not create offset at %a\n", a2);
  return v2;
}

