__int64 __fastcall sub_436F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  const char *v4; // r9

  v3 = *(_QWORD *)(a1 + 8);
  v4 = s1;
  if ( *(_QWORD *)(a3 + 80) )
    v4 = *(const char **)(a3 + 72);
  return sub_33870(v3, a2 + 40, nullptr, "UPDATE users SET is_deleted = 1 WHERE user_name = ?", (__int64)"s", v4);
}
