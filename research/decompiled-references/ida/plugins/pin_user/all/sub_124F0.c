__int64 __fastcall sub_124F0(__int64 a1, int a2, __int64 a3)
{
  unsigned int v5; // r13d

  if ( *(_BYTE *)(a1 + 1033) )
    return 1;
  qmutex_lock();
  if ( a2 == 4 )
  {
    v5 = (unsigned __int8)sub_1B4D0(a1 + 952, a3);
  }
  else
  {
    sub_BDA0((__int64)"Sorry, the tracer module cannot handle non software breakpoints\n");
    v5 = 0;
  }
  qmutex_unlock();
  return v5;
}

