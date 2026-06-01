bool __fastcall sub_280760(__int64 a1)
{
  return !(unsigned __int8)sub_280560(a1, 1, 1)
      && !(unsigned __int8)sub_280560(a1, 66, 1)
      && !(unsigned __int8)sub_280630(a1)
      && (get_tinfo_property() & 0xF) == 8;
}

