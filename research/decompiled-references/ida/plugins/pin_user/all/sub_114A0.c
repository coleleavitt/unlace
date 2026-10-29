__int64 __fastcall sub_114A0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebx

  qmutex_lock();
  if ( !*(_BYTE *)(a1 + 1034) || (v6 = 1, !(unsigned __int8)sub_1C250(a1 + 952, a3, a4, a2)) )
    v6 = -1;
  qmutex_unlock();
  return v6;
}

