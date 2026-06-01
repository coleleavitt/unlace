__int64 __fastcall sub_6FCF0(__int64 a1, unsigned int a2, __int64 *a3, double a4)
{
  int v5; // ebp
  __int64 result; // rax
  unsigned int v7; // r12d

  v5 = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, a2);
  if ( (int)result > 0 )
  {
    do
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2, (unsigned int)v5);
      if ( !sub_64930(a3, v7) )
      {
        sub_64190(a3, v7, a4);
        sub_6FCF0(a1, v7, a3);
      }
      ++v5;
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, a2);
    }
    while ( v5 < (int)result );
  }
  return result;
}

