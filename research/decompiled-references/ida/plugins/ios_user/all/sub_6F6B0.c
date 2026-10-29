__int64 __fastcall sub_6F6B0(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // ebp
  const char *v5; // rsi

  qmutex_lock();
  v3 = *((unsigned __int8 *)a1 + 56);
  if ( !(_BYTE)v3 )
  {
    if ( !(unsigned __int8)sub_6F100((__int64)a1) )
    {
      *a2 = "dlopen";
      goto LABEL_3;
    }
    v5 = (const char *)sub_6F3E0((__int64)a1);
    if ( !v5 )
      goto LABEL_11;
    if ( !(unsigned __int8)sub_6F430(a1, v5, 0x1000164u) )
    {
      *a2 = "unsupported_version";
      goto LABEL_3;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 16LL))(*a1, a1[4]) )
    {
LABEL_11:
      *a2 = "dlsym";
      goto LABEL_3;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 24LL))(*a1);
    if ( !(unsigned __int8)sub_6F5E0(a1) )
    {
      *a2 = "openssl";
      goto LABEL_3;
    }
    *((_BYTE *)a1 + 56) = 1;
  }
  v3 = 1;
LABEL_3:
  qmutex_unlock();
  return v3;
}

