signed __int64 __fastcall sub_F2C0(__int64 a1, double a2)
{
  signed __int64 result; // rax

  *(_WORD *)(a1 + 256) = netnode_altval(*(_QWORD *)(a1 + 248), -3, 65);
  result = netnode_qsupstr(**(_QWORD **)(a1 + 208), a1 + 128, -1, 83);
  if ( result > 0 )
    return sub_E0C0(a1 + 120, 0, a2);
  return result;
}

