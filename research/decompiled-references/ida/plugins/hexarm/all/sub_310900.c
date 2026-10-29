__int64 __fastcall sub_310900(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r13d
  unsigned int v4; // ebx

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  if ( v2 <= 0 )
    return 0;
  v3 = v2;
  v4 = 0;
  while ( a2 != (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, a2, v4)
       || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, a2, a2) )
  {
    if ( v3 == ++v4 )
      return 0;
  }
  return 1;
}

