__int64 __fastcall sub_14AA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // si
  void (__fastcall **v7)(_QWORD *); // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned int dword; // eax
  unsigned __int64 v11; // rdx
  void (__fastcall **v12)(_QWORD *); // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rax

  v5 = *(_WORD *)(a3 + 12);
  if ( v5 == 17 )
  {
    *(_DWORD *)(a2 + 4) &= ~4u;
    *(_WORD *)a2 = 4;
    v12 = (void (__fastcall **)(_QWORD *))*a1;
    v13 = a1[5];
    v14 = a1[4];
    v15 = (__int64 (__fastcall *)(__int64, __int64, __int64))v12[10];
    if ( v15 == sub_149F0 )
      put_dword(v14, v13);
    else
      v15((__int64)a1, v14, v13);
  }
  else
  {
    if ( v5 != 25 )
    {
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
      return 0;
    }
    *(_DWORD *)(a2 + 4) &= ~4u;
    *(_WORD *)a2 = 4;
    v7 = (void (__fastcall **)(_QWORD *))*a1;
    v8 = a1[4];
    v9 = (__int64 (__fastcall *)(__int64, __int64))v7[6];
    if ( v9 == sub_14A30 )
      dword = get_dword(v8);
    else
      dword = v9((__int64)a1, v8);
    v11 = dword & 0xFFFFFF;
    if ( (dword & 0x800000) != 0 )
      v11 = dword | 0xFFFFFFFFFF000000LL;
    *(_QWORD *)(a2 + 32) = v11;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
      a1,
      a1[4],
      a1[5],
      23,
      1,
      1);
  }
  return 1;
}
