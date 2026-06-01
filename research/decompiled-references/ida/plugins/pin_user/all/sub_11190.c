__int64 __fastcall sub_11190(__int64 a1)
{
  unsigned int v1; // ebx

  qmutex_lock();
  if ( !*(_DWORD *)(a1 + 1028) || (unsigned __int8)sub_19AD0(a1 + 952) )
    v1 = 1;
  else
    v1 = -1;
  qmutex_unlock();
  return v1;
}

