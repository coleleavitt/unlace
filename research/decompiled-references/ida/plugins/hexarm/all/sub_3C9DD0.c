__int64 __fastcall sub_3C9DD0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r14d
  __int64 result; // rax

  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, a3, a4);
  result = 0;
  if ( v5 != -1 )
  {
    sub_664C0();
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(a1, a3, 1);
    sub_664C0();
    sub_3C8890(v5);
    sub_664C0();
    sub_664C0();
    return 1;
  }
  return result;
}

