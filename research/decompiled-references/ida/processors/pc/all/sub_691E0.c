bool __fastcall sub_691E0(__int64 a1, __int64 a2)
{
  return (unsigned int)sub_690D0(a1, a2, "alloca_probe", 0, 0)
      || (unsigned int)sub_690D0(a1, a2, "chkstk_ms", 0, 0)
      || (unsigned int)sub_690D0(a1, a2, "chkstk_darwin", 0, 0) != 0;
}
