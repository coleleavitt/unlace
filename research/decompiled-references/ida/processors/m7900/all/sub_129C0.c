__int64 __fastcall sub_129C0(__int64 a1, unsigned __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  __int64 v4; // rsi
  __int64 v6; // r12
  char v7; // al

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( a2 == 4 )
    return v2(a1, 50);
  if ( a2 > 4 )
  {
    v4 = 51;
    if ( a2 == 8 )
      return v2(a1, v4);
  }
  else
  {
    v4 = 48;
    if ( a2 == 1 )
      return v2(a1, v4);
    v4 = 49;
    if ( a2 == 2 )
      return v2(a1, v4);
  }
  v6 = 0;
  v2(a1, 40);
  v7 = 0;
  do
  {
    if ( _bittest((const int *)&a2, v6) )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v6, 10);
      v7 = 1;
    }
    ++v6;
  }
  while ( v6 != 4 );
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 41);
}

