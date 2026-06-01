bool __fastcall sub_6A210(__int64 a1, __int64 a2)
{
  return (unsigned int)sub_6A100(a1, a2, "alloca_probe", 0, 0)
      || (unsigned int)sub_6A100(a1, a2, "chkstk_ms", 0, 0)
      || (unsigned int)sub_6A100(a1, a2, "chkstk_darwin", 0, 0) != 0;
}

