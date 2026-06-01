__int64 __fastcall sub_113D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // ebx

  qmutex_lock();
  v4 = -((unsigned __int8)sub_19E10(a1 + 952, a2, a3) == 0);
  qmutex_unlock();
  return v4 | 1u;
}

