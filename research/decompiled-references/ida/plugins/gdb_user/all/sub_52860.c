__int64 __fastcall sub_52860(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp

  v1 = (*(__int64 (__fastcall **)(_QWORD))(qword_6AD00 + 256))(*(_QWORD *)(a1 + 80));
  *(_QWORD *)(a1 + 88) = v1;
  if ( !v1 )
    return 0;
  v2 = (*(__int64 (__fastcall **)(__int64))(qword_6AD00 + 24))(qword_6AD08);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_6AD00 + 168LL))(qword_6AD00, v2, a1);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(qword_6AD00 + 288))(*(_QWORD *)(a1 + 88), v2, v2);
  return 1;
}

