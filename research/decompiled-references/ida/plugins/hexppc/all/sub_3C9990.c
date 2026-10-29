__int64 __fastcall sub_3C9990(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 == (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    get_ea_diffpos_name();
    sub_67E30((__int64 *)a1);
  }
  return a1;
}

