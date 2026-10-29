__int64 __fastcall sub_7D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  if ( a5 )
  {
    if ( get_qword() && (unsigned __int8)is_mapped() && (get_flags_ex() & 0x4000) == 0 )
      set_name();
    return get_qword();
  }
  else
  {
    if ( (unsigned int)get_dword() && (unsigned __int8)is_mapped() && (get_flags_ex() & 0x4000) == 0 )
      set_name();
    return (unsigned int)get_dword();
  }
}

