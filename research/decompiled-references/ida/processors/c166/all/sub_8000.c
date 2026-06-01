__int64 __fastcall sub_8000(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  const char *v8; // rsi

  v4 = a1[77];
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, a3, -1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 80LL))(a1, a3);
    v6 = sub_AC30(v4, a3, (unsigned int)*(char *)(a2 + 5));
    v7 = *a1;
    if ( v6 )
    {
      v8 = s1;
      if ( *(_QWORD *)(v6 + 16) )
        v8 = *(const char **)(v6 + 8);
      return (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(v7 + 56))(a1, v8, 34);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(v7 + 64))(a1, 18);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, *(_QWORD *)(a2 + 16), 16);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
      result = remember_problem();
      *(_QWORD *)(v4 + 264) = a3;
    }
  }
  return result;
}

