__int64 __fastcall sub_11590(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx

  v4 = 0;
  qmutex_lock();
  while ( 1 )
  {
    v7 = a4 - v4;
    if ( (unsigned __int64)(a4 - v4) > 0x400 )
      v7 = 1024;
    v8 = sub_19420(a1 + 952, v4 + a2, a3 + v4, v7);
    v9 = v8;
    if ( v8 < 0 )
      break;
    v4 += v8;
    if ( v8 != v7 || a4 == v4 )
    {
      v9 = v4;
      break;
    }
  }
  qmutex_unlock();
  return v9;
}

