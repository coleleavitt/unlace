__int64 __fastcall sub_6680(_QWORD *a1, __int64 a2, char a3)
{
  char v4; // al
  char v5; // r13
  __int64 v6; // rax
  __int64 result; // rax

  v4 = *(_BYTE *)(a2 + 32);
  v5 = v4 & 2;
  if ( (v4 & 2) != 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
    v4 = *(_BYTE *)(a2 + 32);
  }
  if ( (v4 & 0x40) != 0 && get_sreg() == -1 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 72LL),
      33);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 193);
  }
  else
  {
    v6 = *a1;
    if ( !a3 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v6 + 24))(a1, a2, 193);
      if ( v5 )
        return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      return result;
    }
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v6 + 120))(
               a1,
               a2,
               *(_QWORD *)(a2 + 16) + 16LL * a1[28]);
    if ( !(_BYTE)result )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 193);
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
    }
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
  return result;
}

