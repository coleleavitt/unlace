unsigned __int64 __fastcall sub_4870(_QWORD *a1, __int64 a2)
{
  char v2; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  char *v6; // rsi
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( get_name_expr() <= 0 )
  {
    v4 = sub_61E0(a1[77], *(_QWORD *)(a2 + 16));
    v5 = *a1;
    if ( v4 )
    {
      v6 = byte_8E90;
      if ( *(_QWORD *)(v4 + 16) )
        v6 = *(char **)(v4 + 8);
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(v5 + 56))(a1, v6, 34);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(v5 + 64))(a1, 18);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *(_QWORD *)(a2 + 16), 16);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
      remember_problem();
    }
  }
  else
  {
    if ( strchr(nullptr, 43) || strchr(nullptr, 45) )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)*(char *)(a1[79] + 256LL));
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, 0, 0);
    if ( v2 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)*(char *)(a1[79] + 257LL));
  }
  return v7 - __readfsqword(0x28u);
}

