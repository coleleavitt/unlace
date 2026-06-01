__int64 __fastcall sub_99D0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  const char *v3; // rsi

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( (unsigned __int8)choose_ioport_device() )
  {
    v3 = (const char *)&qword_D948;
    if ( v2[23] )
      v3 = (const char *)v2[22];
    sub_98D0(v2, v3);
  }
  return 0;
}

