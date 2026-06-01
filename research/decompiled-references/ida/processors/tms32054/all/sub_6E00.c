__int64 __fastcall sub_6E00(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  if ( a4 && get_sreg() == -1 )
    return -1;
  else
    return use_mapping();
}

