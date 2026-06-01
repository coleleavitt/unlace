__int64 __fastcall sub_19A40(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  qmutex_free();
  a1[163] = 0;
  sub_19890((__int64)a1);
  v2 = a1[158];
  a1[5] = 0;
  if ( v2 )
  {
    a1[159] = 0;
    qfree();
  }
  if ( a1[154] )
  {
    a1[155] = 0;
    qfree();
  }
  result = free_debug_event();
  if ( a1[6] )
  {
    a1[7] = 0;
    return qfree();
  }
  return result;
}

