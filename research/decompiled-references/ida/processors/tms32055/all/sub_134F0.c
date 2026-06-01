__int64 __fastcall sub_134F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r12d
  __int64 result; // rax

  v2 = 0;
  v3 = *(__int16 *)(a2 + 34);
  do
  {
    if ( _bittest(&v3, v2) )
      result = (*(__int64 (__fastcall **)(__int64, __int16 *, __int64))(*(_QWORD *)a1 + 56LL))(a1, (&off_38400)[v2], 9);
    ++v2;
  }
  while ( v2 != 13 );
  return result;
}

