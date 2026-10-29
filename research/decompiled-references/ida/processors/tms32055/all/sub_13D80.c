__int64 __fastcall sub_13D80(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // al
  const char *v9; // rsi
  __int64 result; // rax
  char v11; // [rsp+0h] [rbp-18h]

  v3 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6));
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v3, 33);
  v8 = *(_BYTE *)(a2 + 32);
  if ( v8 == 2 )
  {
    v9 = " >= ";
  }
  else if ( v8 > 2 )
  {
    if ( v8 != 3 )
      goto LABEL_15;
    v9 = " != ";
  }
  else
  {
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = " < ";
        goto LABEL_6;
      }
LABEL_15:
      sub_10CA0((__int64)"interr: out: o_relop", v3, v4, v5, v6, v7, v11);
    }
    v9 = " == ";
  }
LABEL_6:
  (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v9, 9);
  result = *(unsigned __int8 *)(a2 + 33);
  if ( (_BYTE)result == 1 )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
             a1,
             *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(int *)(a2 + 8)),
             33);
  if ( (_BYTE)result == 2 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 12);
  }
  return result;
}

