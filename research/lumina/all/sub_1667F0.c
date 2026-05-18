__int64 __fastcall sub_1667F0(__int64 a1, _QWORD *a2)
{
  char v2; // dl
  __int64 v3; // rax
  bool v4; // zf
  const char *v5; // rdx
  char v6; // r12
  const char *v7; // rdx
  __int64 result; // rax

  v2 = sub_167250(a2[17], 10000);
  v3 = a2[19];
  v4 = v2 == 0;
  v5 = s1;
  if ( v4 )
  {
    if ( v3 )
      v5 = (const char *)a2[18];
    sub_2F0E0((__int64)a2, (__int64)"Handshake with %s failed (timeout period %d ms)\n", v5, 10000);
    if ( !a2[19] )
    {
      sub_2F0E0((__int64)a2, (__int64)"Closing connection from %s...\n", s1);
      return sub_166730(a1, (__int64)a2);
    }
    sub_2F0E0((__int64)a2, (__int64)"Closing connection from %s...\n", (const char *)a2[18]);
    return sub_166730(a1, (__int64)a2);
  }
  if ( v3 )
    v5 = (const char *)a2[18];
  sub_2F0E0((__int64)a2, (__int64)"Accepting connection from %s...\n", v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
  v7 = s1;
  if ( a2[19] )
    v7 = (const char *)a2[18];
  result = sub_2F0E0((__int64)a2, (__int64)"Closing connection from %s...\n", v7);
  if ( v6 )
    return sub_166730(a1, (__int64)a2);
  return result;
}
