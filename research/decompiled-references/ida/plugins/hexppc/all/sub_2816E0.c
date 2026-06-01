bool __fastcall sub_2816E0(__int64 a1)
{
  return !(unsigned __int8)sub_2814E0(a1, 1, 1)
      && !(unsigned __int8)sub_2814E0(a1, 66, 1)
      && !(unsigned __int8)sub_2815B0(a1)
      && (get_tinfo_property() & 0xF) == 8;
}

