__int64 __fastcall sub_43730(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = sub_199140(a1, a2);
  return sub_33870(v4, 0, nullptr, "UPDATE users SET last_active = ? WHERE id = ?", (__int64)"tu", v5, v3);
}
