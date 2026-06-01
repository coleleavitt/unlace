__int64 __fastcall sub_2D0D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12

  v2 = *(_QWORD *)(a2 + 40);
  if ( !v2 || (v3 = *(_QWORD *)(a2 + 64), !(unsigned __int8)qfileexist()) )
  {
    a1[8] = "certchain_not_found";
    return 0;
  }
  if ( !v3 || !(unsigned __int8)qfileexist() )
  {
    a1[8] = "privkey_not_found";
    return 0;
  }
  if ( !(unsigned __int8)sub_2CA30(&qword_3BC20, a1 + 8) )
    return 0;
  v5 = sub_25D40(0);
  a1[4] = v5;
  if ( !(unsigned __int8)sub_25DC0(v5) )
  {
    a1[8] = "irs";
    return 0;
  }
  qmutex_lock();
  v6 = qword_3BC50;
  if ( qword_3BC50 )
  {
    qmutex_unlock();
    a1[10] = v6;
  }
  else
  {
    v7 = sub_2CB80((__int64 **)&qword_3BC20, 0, v2, v3);
    qword_3BC50 = v7;
    qmutex_unlock();
    a1[10] = v7;
    if ( !v7 )
      goto LABEL_15;
  }
  result = sub_2CFE0((__int64)a1);
  if ( !(_BYTE)result )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  return result;
}

