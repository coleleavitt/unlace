__int64 __fastcall sub_22770(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 dword; // rbx

  if ( (unsigned __int8)sub_82E80(a1, a3) )
  {
    if ( (get_flags_ex() & 0xF00000) == 0x500000 )
    {
      if ( a4 == 4 )
        dword = (unsigned int)get_dword();
      else
        dword = get_qword();
      if ( dword > 0x20 && (unsigned __int8)is_mapped() )
      {
        insn_add_dref();
        return dword;
      }
    }
    else if ( netnode_altval() != 2 )
    {
      netnode_supset();
    }
  }
  return -1;
}

