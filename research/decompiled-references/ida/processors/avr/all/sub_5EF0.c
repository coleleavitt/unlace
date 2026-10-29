__int64 __fastcall sub_5EF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  const char *v8; // rsi
  char v9; // [rsp+0h] [rbp-8h]

  switch ( a2 )
  {
    case 0LL:
      return (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "X", 33);
    case 1LL:
      v7 = *a1;
      v8 = "X";
      goto LABEL_9;
    case 2LL:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      return (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "X", 33);
    case 3LL:
      return (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "Y", 33);
    case 4LL:
      v7 = *a1;
      v8 = "Y";
      goto LABEL_9;
    case 5LL:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      return (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "Y", 33);
    case 6LL:
      return (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "Z", 33);
    case 7LL:
      v7 = *a1;
      v8 = "Z";
LABEL_9:
      (*(void (__fastcall **)(__int64 *, const char *, __int64))(v7 + 56))(a1, v8, 33);
      return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
    case 8LL:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      return (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "Z", 33);
    default:
      sub_5D90((__int64)"%a: bad phrase number", a1[30], a3, a4, a5, a6, v9);
  }
}

