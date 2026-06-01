unsigned __int64 __fastcall sub_3E6A80(__int64 a1, __int64 *a2, double a3)
{
  sub_8BAF0(a1, a2);
  sub_8B480((__int64)a2, 2, "mips_spec_info.psi");
  if ( sub_CBD70() != 1 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC06u, a3);
    BUG();
  }
  sub_8B480((__int64)a2, 2, "mips_spec_info.lroff");
  sub_7BB40(a2, *(_QWORD *)(a1 + 120));
  sub_8B480((__int64)a2, 2, "mips_spec_info.iflags");
  return sub_7B6E0(a2);
}

