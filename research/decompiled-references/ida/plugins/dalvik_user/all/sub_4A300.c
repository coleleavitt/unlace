__int64 __fastcall sub_4A300(unsigned __int64 a1, double a2, double a3, double a4, double a5)
{
  double v6; // xmm4_8
  __m128 v7; // xmm5

  qmutex_lock();
  if ( *(_BYTE *)(a1 + 32) )
  {
    sub_4A220(a1);
    sub_5D660(a1 + 40, 0xFFFFFFFFLL);
    sub_44380(a1, a2, a3, a4, a5, v6, v7);
  }
  return qmutex_unlock();
}

