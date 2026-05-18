__int64 __fastcall sub_44C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  const char *v11; // rcx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  void (__fastcall ***v18)(_QWORD); // rdi
  bool v19; // zf
  void (__fastcall ***v20)(_QWORD); // rdi
  unsigned int v21; // ebx
  int v23; // r8d
  int v24; // r9d
  unsigned int v25; // eax
  unsigned int v27; // [rsp+10h] [rbp-50h] BYREF
  int v28; // [rsp+14h] [rbp-4Ch] BYREF
  __int64 v29; // [rsp+18h] [rbp-48h] BYREF
  _QWORD v30[8]; // [rsp+20h] [rbp-40h] BYREF

  v4 = a2 + 40;
  v6 = *(_QWORD *)(a1 + 8);
  v30[1] = __readfsqword(0x28u);
  v27 = 0;
  sub_318B0(
    (__int64)&v29,
    v6,
    "SELECT id, user_name, license_name, license_email, license_id, is_admin, karma FROM users WHERE user_name = ?");
  if ( *(_QWORD *)(a2 + 48) > 1u )
  {
    sub_16B870(
      (unsigned int)"Error while creating statement %s: %s\n",
      (unsigned int)"SELECT id, user_name, license_name, license_email, license_id, is_admin, karma FROM users WHERE user_name = ?",
      *(_QWORD *)(a2 + 40),
      v8,
      v9,
      v10);
    if ( v29 )
      goto LABEL_3;
    return v27;
  }
  if ( !v29 )
    return v27;
LABEL_3:
  v11 = s1;
  if ( *(_QWORD *)(a4 + 8) )
    v11 = *(const char **)a4;
  if ( (unsigned __int8)sub_2F9D0(v4, (__int64)&v29, (__int64)"s", v11) )
  {
    if ( *(_QWORD *)(a2 + 48) > 1u )
      sub_16B870(
        (unsigned int)"Error while setting arguments %s: %s\n",
        (unsigned int)"SELECT id, user_name, license_name, license_email, license_id, is_admin, karma FROM users WHERE user_name = ?",
        *(_QWORD *)(a2 + 40),
        v12,
        v13,
        v14);
    unk_241E60(v30, &v29, v4);
    if ( *(_QWORD *)(a2 + 48) > 1u )
      sub_16B870(
        (unsigned int)"Error while executing query %s: %s\n",
        (unsigned int)"SELECT id, user_name, license_name, license_email, license_id, is_admin, karma FROM users WHERE user_name = ?",
        *(_QWORD *)(a2 + 40),
        v15,
        v16,
        v17);
    if ( v30[0] )
    {
      if ( (unsigned __int8)unk_241E70(v30, v4) )
      {
        sub_2F910(v4, (__int64)v30, (__int64)"ussssyi", &v27, a3 + 72, a3 + 24, a3 + 48, a3, &v28, a3 + 96);
        v25 = *(_DWORD *)(a3 + 112) & 0xFFFFFFFE;
        if ( v28 )
          v25 = *(_DWORD *)(a3 + 112) | 1;
        *(_DWORD *)(a3 + 112) = v25 | 2;
        if ( *(_QWORD *)(a2 + 48) > 1u )
          sub_16B870(
            (unsigned int)"Error while retrieving argument from query %s: %s\n",
            (unsigned int)"SELECT id, user_name, license_name, license_email, license_id, is_admin, karma FROM users WHERE user_name = ?",
            *(_QWORD *)(a2 + 40),
            a3,
            v23,
            v24);
      }
      v18 = (void (__fastcall ***)(_QWORD))v30[0];
      if ( v30[0] )
      {
        v19 = (*(_DWORD *)(v30[0] + 8LL))-- == 1;
        if ( v19 )
          (**v18)(v18);
      }
    }
  }
  v20 = (void (__fastcall ***)(_QWORD))v29;
  v21 = v27;
  if ( v29 )
  {
    v19 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v19 )
      (**v20)(v20);
  }
  return v21;
}
