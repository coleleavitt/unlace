__int64 __fastcall sub_7C30(__int64 *a1, __int64 a2, __int64 a3, char a4, char a5)
{
  int v8; // eax
  __int64 name_expr; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v8 = sub_6E60(a1[77], a2);
  if ( v8 != 255 && a4 )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
             a1,
             *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * v8),
             33);
  name_expr = get_name_expr();
  v11 = *a1;
  if ( name_expr <= 0 )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 64))(a1, 18);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a3, 192);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 18);
    remember_problem();
  }
  else
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(v11 + 32))(a1, 64);
      v11 = *a1;
    }
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 56))(a1, 0, 0);
  }
  return v12 - __readfsqword(0x28u);
}

