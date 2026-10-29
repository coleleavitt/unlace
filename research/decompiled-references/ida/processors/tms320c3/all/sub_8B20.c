unsigned __int64 __fastcall sub_8B20(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 name_expr; // rdx
  __int64 v7; // rax
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  name_expr = get_name_expr();
  v7 = *(_QWORD *)a1;
  if ( name_expr <= 0 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(__int64, __int64))(v7 + 32))(a1, 64);
      v7 = *(_QWORD *)a1;
    }
    (*(void (__fastcall **)(__int64, __int64))(v7 + 64))(a1, 18);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a3, 160);
    sub_8830(a1, (__int64)" (ea = %a)", 0.0);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
    remember_problem();
  }
  else
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(__int64, __int64))(v7 + 32))(a1, 64);
      v7 = *(_QWORD *)a1;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 56))(a1, 0, 0);
  }
  return v9 - __readfsqword(0x28u);
}

