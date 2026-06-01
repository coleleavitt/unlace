__int64 __fastcall sub_11430(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // ebx

  qmutex_lock();
  if ( !*(_BYTE *)(a1 + 1034) || (v6 = 1, !(unsigned __int8)sub_1B5C0(a1 + 952, a2, a3, a4)) )
    v6 = -1;
  qmutex_unlock();
  return v6;
}

