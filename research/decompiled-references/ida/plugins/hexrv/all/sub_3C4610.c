__int64 __fastcall sub_3C4610(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r14d
  __int64 result; // rax

  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, a3, a4);
  result = 0;
  if ( v5 != -1 )
  {
    sub_62740();
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(a1, a3, 1);
    sub_62740();
    sub_3C30D0(v5);
    sub_62740();
    sub_62740();
    return 1;
  }
  return result;
}

