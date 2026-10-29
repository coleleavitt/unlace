__int64 sub_3A330()
{
  __int64 v1; // [rsp+8h] [rbp-40h]

  if ( can_be_off32() != -1 && (getinf_flag(), get_dword(), (unsigned __int8)calc_reference_data()) && getseg() )
    return v1;
  else
    return -1;
}

