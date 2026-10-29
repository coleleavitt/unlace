__int64 __fastcall sub_111F0(__int64 a1)
{
  unsigned int v1; // ebx

  qmutex_lock();
  if ( *(_DWORD *)(a1 + 1028) != 2 || (v1 = 1, !(unsigned __int8)sub_19B90(a1 + 952)) )
    v1 = -1;
  qmutex_unlock();
  return v1;
}

