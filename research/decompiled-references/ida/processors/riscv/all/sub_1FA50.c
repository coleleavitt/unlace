__int64 __fastcall sub_1FA50(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 == -1 )
    return set_default_sreg_value(0, 100, a2);
  else
    return split_sreg_range(a3, 100, a2, 3, 1);
}

