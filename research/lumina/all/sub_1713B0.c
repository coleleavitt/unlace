__int64 __fastcall sub_1713B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp

  v1 = (*(__int64 (__fastcall **)(_QWORD))(qword_242700 + 256))(*(_QWORD *)(a1 + 80));
  *(_QWORD *)(a1 + 88) = v1;
  if ( !v1 )
    return 0;
  v2 = (*(__int64 (__fastcall **)(__int64))(qword_242700 + 24))(qword_242708);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_242700 + 168LL))(qword_242700, v2, a1);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(qword_242700 + 288))(*(_QWORD *)(a1 + 88), v2, v2);
  return 1;
}
