unsigned __int64 __fastcall sub_3EAEA0(__int64 a1, __int64 *a2)
{
  sub_8FCF0(a1, a2);
  sub_8F680((__int64)a2, 2, "x86_spec_info.alloca_calls");
  sub_7FF90(a2, a1 + 56);
  sub_8F680((__int64)a2, 2, "x86_spec_info.fpdeltas");
  sub_80030(a2, a1 + 104);
  sub_8F680((__int64)a2, 2, "x86_spec_info.ssecmp_boundaries");
  sub_7F8E0(a2);
  if ( a1 + 136 != *(_QWORD *)(a1 + 152) )
  {
    do
      sub_7F8E0(a2);
    while ( a1 + 136 != std::_Rb_tree_increment() );
  }
  sub_8F680((__int64)a2, 2, "x86_spec_info.iflags");
  return sub_7F8E0(a2);
}

