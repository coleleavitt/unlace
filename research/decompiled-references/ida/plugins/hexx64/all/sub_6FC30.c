__int64 __fastcall sub_6FC30(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, double a5)
{
  int v7; // r12d
  unsigned int v8; // ebp

  if ( a3 == a4 )
    return 1;
  v7 = 0;
  sub_64190(a2, a3, a5);
  while ( v7 < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, a3) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, a3, (unsigned int)v7);
    if ( !sub_64930(a2, v8) && (unsigned __int8)sub_6FC30(a1, a2, v8, a4) )
      return 1;
    ++v7;
  }
  return 0;
}

