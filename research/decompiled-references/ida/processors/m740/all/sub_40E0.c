__int64 __fastcall sub_40E0(_QWORD *a1, __int64 a2, char a3)
{
  char v4; // r14
  char v5; // r13
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // r12d
  void (__fastcall *v9)(_QWORD *, __int64, __int64); // rax

  v4 = *(_BYTE *)(a2 + 32) & 1;
  v5 = *(_BYTE *)(a2 + 32) & 2;
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
  v6 = *a1;
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 32))(a1, 92);
    if ( !a3 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 145);
      goto LABEL_13;
    }
    v6 = *a1;
    v8 = 8;
  }
  else
  {
    if ( !a3 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v6 + 24))(a1, a2, 161);
      if ( !v5 )
        return result;
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
    }
    v8 = 16;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v6 + 120))(
             a1,
             a2,
             *(_QWORD *)(a2 + 16) + 16LL * a1[28]);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
    v9 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL);
    if ( v8 == 16 )
      v9(a1, a2, 161);
    else
      v9(a1, a2, 145);
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
  }
LABEL_13:
  if ( v5 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
  return result;
}

