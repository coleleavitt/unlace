__int64 __fastcall sub_43680(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  const char *v4; // rdi
  const char *v5; // rcx
  const char *v6; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = s1;
  if ( *(_QWORD *)(a3 + 32) )
    v4 = *(const char **)(a3 + 24);
  v5 = s1;
  if ( *(_QWORD *)(a3 + 8) )
    v5 = *(const char **)a3;
  v6 = s1;
  if ( *(_QWORD *)(a3 + 56) )
    v6 = *(const char **)(a3 + 48);
  return sub_33870(
           v3,
           a2 + 40,
           nullptr,
           "UPDATE users SET is_admin = ?, license_email = ?, license_id = ? WHERE user_name = ? AND is_deleted = 0 ",
           (__int64)"ysss",
           *(_DWORD *)(a3 + 112) & 1,
           v6,
           v5,
           v4);
}
