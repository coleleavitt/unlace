unsigned __int64 __fastcall sub_3ED530(__int64 a1, __int64 *a2, double a3)
{
  sub_8F730(a1, a2);
  sub_8F0C0((__int64)a2, 2, "arm_spec_info.psi");
  if ( sub_CF9B0() != 1 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCBBEu, a3);
    BUG();
  }
  sub_8F0C0((__int64)a2, 2, "arm_spec_info.initial_inargoff");
  sub_7F780(a2, *(_QWORD *)(a1 + 176) + 1LL);
  sub_8F0C0((__int64)a2, 2, "arm_spec_info.lroff");
  sub_7F780(a2, *(_QWORD *)(a1 + 184) + 1LL);
  sub_8F0C0((__int64)a2, 2, "arm_spec_info.iflags");
  return sub_7F320(a2);
}

