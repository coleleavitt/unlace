__int64 __fastcall sub_375B0(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  const char *v3; // r13
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12

  v2 = *(const char **)(a2 + 40);
  if ( !v2 || (v3 = *(const char **)(a2 + 64), !(unsigned __int8)qfileexist()) )
  {
    a1[8] = "certchain_not_found";
    return 0;
  }
  if ( !v3 || !(unsigned __int8)qfileexist() )
  {
    a1[8] = "privkey_not_found";
    return 0;
  }
  if ( !(unsigned __int8)sub_36F10(&qword_48840, a1 + 8) )
    return 0;
  v5 = sub_30280(0);
  a1[4] = v5;
  if ( !(unsigned __int8)sub_30300(v5) )
  {
    a1[8] = "irs";
    return 0;
  }
  qmutex_lock();
  v6 = qword_48870;
  if ( qword_48870 )
  {
    qmutex_unlock();
    a1[10] = v6;
  }
  else
  {
    v7 = sub_37060((__int64 **)&qword_48840, 0, v2, v3);
    qword_48870 = v7;
    qmutex_unlock();
    a1[10] = v7;
    if ( !v7 )
      goto LABEL_15;
  }
  result = sub_374C0((__int64)a1);
  if ( !(_BYTE)result )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  return result;
}

