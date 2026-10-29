__int64 __fastcall sub_16030(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  void (__fastcall *v6)(_QWORD *, __int64); // rdx
  __int64 v7; // rsi
  __int64 v8; // rbp
  _BYTE *v9; // rax

  if ( a2 != -1 && (~(_DWORD)a2 & 0xF0000) == 0 )
  {
    v9 = (_BYTE *)sub_18430(a1[77]);
    if ( v9 )
    {
      if ( *v9 )
        return (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v9, 34);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a3, a2, -1);
  if ( !(_BYTE)result )
  {
    v5 = *a1;
    v6 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL);
    if ( *(_BYTE *)(a3 + 1) == 6 && *(_WORD *)(a1[79] + 4LL) == 2 )
    {
      v8 = *(_QWORD *)(a3 + 16) >> 16;
      if ( a1[30] >> 16 != v8 )
      {
        v6(a1, 31);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, v8, 16);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 31);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        v5 = *a1;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, void (__fastcall *)(_QWORD *, __int64)))(v5 + 64))(a1, 18, v6);
      v7 = *(unsigned __int16 *)(a3 + 16);
    }
    else
    {
      v6(a1, 18);
      v7 = *(_QWORD *)(a3 + 16);
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, v7, 16);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
    return remember_problem();
  }
  return result;
}

