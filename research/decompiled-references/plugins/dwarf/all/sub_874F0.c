bool __fastcall sub_874F0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx

  v4 = a1[2];
  if ( a3 < v4 )
    return sub_85140(*a1, a2, a1[1], a3);
  sub_1D740((__int64)"Out-of-bounds index for locdescs: %lld (got %lld)\n", a3, v4);
  return 0;
}
