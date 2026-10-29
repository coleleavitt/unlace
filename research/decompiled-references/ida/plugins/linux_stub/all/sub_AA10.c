__int64 __fastcall sub_AA10(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v8; // rax

  v6 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
  if ( v6 == sub_A6F0 )
    return (*(__int64 (__fastcall **)(_QWORD *))(a1[28] + 328LL))(a1 + 28);
  v8 = ((__int64 (*)(void))v6)();
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v8 + 328LL))(
           v8,
           a2,
           a3,
           a4,
           a5,
           a6);
}

