void __fastcall sub_123D0(__int64 a1, __int64 a2, char a3)
{
  if ( a3 )
  {
    qmutex_lock();
    *(_BYTE *)(a1 + 2292) = 1;
    if ( !(unsigned __int8)sub_1D4F0(a1 + 952, 0) )
      sub_BDA0((__int64)"Error reading trace...\n");
    qmutex_unlock();
  }
}

