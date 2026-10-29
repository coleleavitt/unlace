__int64 __fastcall sub_439C0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  const char *v7; // rcx
  const char *v8; // rsi
  const char *v9; // rcx
  const char *v10; // rdx
  const char *v11; // r9
  unsigned int v12; // r13d
  void (__fastcall ***v13)(_QWORD); // rdi
  bool v14; // zf
  __int64 v16; // rsi
  __m128i si128; // xmm0
  void (__fastcall ***v19)(_QWORD); // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rcx
  const char *v24; // rdx
  const char *v25; // r9
  void *v26; // rsi
  __int64 v27; // rax
  unsigned int v29; // [rsp+14h] [rbp-4Ch] BYREF
  __int64 v30; // [rsp+18h] [rbp-48h] BYREF
  _QWORD v31[8]; // [rsp+20h] [rbp-40h] BYREF

  v31[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 80) <= 1u )
  {
    v16 = a2[2];
    if ( a2[4] <= 0x13u )
    {
      v20 = a2;
      v21 = sub_1987B0(a2 + 2, v16, 20, 1);
      v20[2] = v21;
      v16 = v21;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B6B60);
    a2[3] = 20;
    *(__m128i *)v16 = si128;
    *(_DWORD *)(v16 + 15) = 1936482665;
    *(_BYTE *)(a2[2] + 19LL) = 0;
    return 0;
  }
  if ( (int)sub_30650(*(_QWORD *)(a1[1] + 304)) <= 0 )
  {
    v26 = (void *)a2[2];
    if ( a2[4] <= 0xFu )
    {
      v27 = sub_1987B0(a2 + 2, v26, 16, 1);
      a2[2] = v27;
      v26 = (void *)v27;
    }
    a2[3] = 16;
    qmemcpy(v26, "invalid license", 15);
    *(_BYTE *)(a2[2] + 15LL) = 0;
    return 0;
  }
  v6 = (__int64)(a2 + 5);
  sub_318B0((__int64)&v30, a1[1], "SELECT id FROM users WHERE user_name = ? AND is_deleted = 1 ");
  if ( !v30 )
    return 0;
  v7 = s1;
  if ( *(_QWORD *)(a3 + 80) )
    v7 = *(const char **)(a3 + 72);
  if ( (unsigned __int8)sub_2F9D0(v6, (__int64)&v30, (__int64)"s", v7) )
  {
    unk_241E60(v31, &v30, v6);
    if ( v31[0] )
    {
      if ( (unsigned __int8)unk_241E70(v31, v6) )
      {
        v29 = 0;
        if ( (unsigned __int8)sub_2F910(v6, (__int64)v31, (__int64)"u", &v29) )
        {
          v22 = s1;
          if ( *(_QWORD *)(a3 + 8) )
            v22 = *(const char **)a3;
          v23 = s1;
          if ( *(_QWORD *)(a3 + 56) )
            v23 = *(const char **)(a3 + 48);
          v24 = s1;
          if ( *(_QWORD *)(a3 + 32) )
            v24 = *(const char **)(a3 + 24);
          v25 = s1;
          if ( *(_QWORD *)(a3 + 80) )
            v25 = *(const char **)(a3 + 72);
          if ( (unsigned __int8)sub_33870(
                                  a1[1],
                                  v6,
                                  nullptr,
                                  "UPDATE users SET user_name = ?, license_name = ?, license_email = ?, license_id = ?, i"
                                  "s_admin = ?, is_deleted = 0 WHERE id = ? ",
                                  (__int64)"ssssyu",
                                  v25,
                                  v24,
                                  v23,
                                  v22,
                                  *(_DWORD *)(a3 + 112) & 1,
                                  v29) )
          {
            v12 = v29;
            goto LABEL_20;
          }
        }
      }
      else
      {
        v8 = s1;
        if ( *(_QWORD *)(a3 + 8) )
          v8 = *(const char **)a3;
        v9 = s1;
        if ( *(_QWORD *)(a3 + 56) )
          v9 = *(const char **)(a3 + 48);
        v10 = s1;
        if ( *(_QWORD *)(a3 + 32) )
          v10 = *(const char **)(a3 + 24);
        v11 = s1;
        if ( *(_QWORD *)(a3 + 80) )
          v11 = *(const char **)(a3 + 72);
        if ( (unsigned __int8)sub_33870(
                                a1[1],
                                v6,
                                nullptr,
                                "INSERT INTO users ( user_name, license_name, license_email, license_id, is_admin) VALUES"
                                " (?, ?, ?, ?, ?)",
                                (__int64)"ssssy",
                                v11,
                                v10,
                                v9,
                                v8,
                                *(_DWORD *)(a3 + 112) & 1) )
        {
          v12 = sub_31420(a1[1], v6);
          if ( !a4
            || (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64))(*a1 + 40))(
                 a1,
                 a2,
                 a3 + 72,
                 a4) )
          {
            goto LABEL_20;
          }
        }
      }
      v12 = 0;
LABEL_20:
      v13 = (void (__fastcall ***)(_QWORD))v31[0];
      if ( v31[0] )
      {
        v14 = (*(_DWORD *)(v31[0] + 8LL))-- == 1;
        if ( v14 )
          (**v13)(v13);
      }
      goto LABEL_29;
    }
  }
  v12 = 0;
LABEL_29:
  v19 = (void (__fastcall ***)(_QWORD))v30;
  if ( v30 )
  {
    v14 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v14 )
      (**v19)(v19);
  }
  return v12;
}
