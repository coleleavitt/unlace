__int64 __fastcall sub_11510(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  qmutex_lock();
  if ( (unsigned __int8)sub_19140(a1 + 952, a2) )
  {
    if ( (unsigned __int8)sub_21EF0(a1, a2) )
    {
      v2 = -6;
    }
    else
    {
      sub_22040(a1, a2);
      v2 = 1;
    }
  }
  else
  {
    v2 = -1;
  }
  qmutex_unlock();
  return v2;
}

