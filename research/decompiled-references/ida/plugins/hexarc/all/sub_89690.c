unsigned __int64 __fastcall sub_89690(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  int v4; // r12d
  __int64 v5; // rsi
  __int64 v7; // rax

  sub_88FC0((__int64)a2, 4, "callregs.policy");
  v3 = a2[1];
  v4 = *(_DWORD *)a1;
  v5 = *a2;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v7 = qvector_reserve();
    *a2 = v7;
    v5 = v7;
    v3 = a2[1];
  }
  *(_BYTE *)(v5 + v3) = v4;
  ++a2[1];
  sub_88FC0((__int64)a2, 4, "callregs.nregs");
  sub_792E0(a2);
  sub_88FC0((__int64)a2, 4, "callregs.gpregs");
  sub_798E0(a2, a1 + 1);
  sub_88FC0((__int64)a2, 4, "callregs.fpregs");
  sub_798E0(a2, a1 + 4);
  sub_88FC0((__int64)a2, 4, "m_callregs.gpno");
  sub_792E0(a2);
  sub_88FC0((__int64)a2, 4, "m_callregs.fpno");
  sub_792E0(a2);
  sub_88FC0((__int64)a2, 4, "m_callregs.argno");
  sub_792E0(a2);
  sub_88FC0((__int64)a2, 4, "m_callregs.swapped");
  sub_792E0(a2);
  sub_88FC0((__int64)a2, 4, "m_callregs.cc");
  return sub_792E0(a2);
}

