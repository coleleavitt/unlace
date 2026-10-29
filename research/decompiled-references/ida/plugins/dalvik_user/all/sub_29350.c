__int64 __fastcall sub_29350(_QWORD *a1)
{
  unsigned int v1; // ebp

  qmutex_lock();
  sub_1BE10(a1 + 5);
  v1 = sub_4B000(a1[2], a1 + 5);
  sub_28A00((unsigned __int64 **)a1 + 5);
  if ( (_BYTE)v1 )
    sub_291C0(a1);
  qmutex_unlock();
  return v1;
}

