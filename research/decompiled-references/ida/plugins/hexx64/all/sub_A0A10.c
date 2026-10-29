__int64 __fastcall sub_A0A10(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 32))(
           *(_QWORD *)(a1 + 8),
           a2,
           a3,
           *(unsigned int *)(a1 + 16),
           *(unsigned __int8 *)(a1 + 24),
           *(unsigned __int8 *)(a1 + 25));
}

