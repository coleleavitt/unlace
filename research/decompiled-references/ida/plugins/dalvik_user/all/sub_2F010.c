__int64 __fastcall sub_2F010(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  unsigned int v5; // r13d

  v5 = (unsigned int)a1;
  qmutex_lock();
  v4 = (_QWORD *)sub_2ED20(a1);
  LOBYTE(v5) = v4 != nullptr;
  if ( a2 && v4 )
  {
    *(_BYTE *)a2 = 1;
    *(_QWORD *)(a2 + 8) = *v4;
    *(_QWORD *)(a2 + 16) = v4[1];
    *(_QWORD *)(a2 + 24) = v4[12] + ((a3 - v4[42]) >> 1);
  }
  qmutex_unlock();
  return v5;
}

