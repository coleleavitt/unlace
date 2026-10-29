__int64 __fastcall sub_11380(__int64 a1, unsigned int a2)
{
  int v2; // ebx

  qmutex_lock();
  v2 = -((unsigned __int8)sub_19ED0(a1 + 952, a2) == 0);
  qmutex_unlock();
  return v2 | 1u;
}

