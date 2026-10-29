__int64 __fastcall sub_369FC0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( *(_DWORD *)(a2 + 8) == 65 )
    sub_64190(a1 + 8, *(_DWORD *)(a2 + 32), a3);
  if ( !sub_254DD0(a2) || strcmp(*(const char **)(*(_QWORD *)(a2 + 24) + 24LL), "va_start") )
    return 0;
  v5 = a1[11];
  v6 = a1[10];
  if ( a1[12] < (unsigned __int64)(v5 + 1) )
  {
    v7 = qvector_reserve((__int64)(a1 + 10), v6, v5 + 1, 8);
    a1[10] = v7;
    v6 = v7;
    v5 = a1[11];
  }
  *(_QWORD *)(v6 + 8 * v5) = a2;
  ++a1[11];
  return 0;
}

