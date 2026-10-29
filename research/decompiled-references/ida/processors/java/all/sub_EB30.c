__int64 __fastcall sub_EB30(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  LOBYTE(a3) = a3 | 0x80;
  return ieee_realcvt(a1, a2, a3);
}

