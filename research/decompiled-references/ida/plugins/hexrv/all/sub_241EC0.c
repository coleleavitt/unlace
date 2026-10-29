__int64 __fastcall sub_241EC0(__int64 a1)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  get_tinfo_property();
  get_tinfo_size();
  sub_674F0((__int64 *)a1);
  return a1;
}

