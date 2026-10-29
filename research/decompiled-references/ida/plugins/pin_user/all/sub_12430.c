__int64 __fastcall sub_12430(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // ebx

  qmutex_lock();
  if ( a3 == 4 )
  {
    v8 = (unsigned __int8)sub_1B430(a1 + 952, 4, a4, a5);
  }
  else
  {
    sub_BDA0((__int64)"Sorry, the tracer module cannot handle hardware breakpoints\n");
    v8 = 0;
  }
  qmutex_unlock();
  return v8;
}

