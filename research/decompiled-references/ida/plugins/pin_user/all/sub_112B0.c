__int64 __fastcall sub_112B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // ebx

  if ( !a2 )
    return 0xFFFFFFFFLL;
  qmutex_lock();
  v2 = sub_188A0(a1 + 952);
  sub_1C500(a1 + 952, 0, v2);
  v3 = -((unsigned __int8)sub_19D90(a1 + 952, a2) == 0);
  qmutex_unlock();
  return v3 | 1u;
}

