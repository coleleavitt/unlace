__int64 __fastcall sub_7F1B0(_DWORD *a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rbp
  char *v9; // rsi
  unsigned int v10; // eax

  if ( a4 )
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, (unsigned int)a4);
  v6 = *(unsigned __int16 *)(a2 + 6);
  v7 = a1[63] & 0x1018;
  if ( v7 == 4096 || v7 == 8 )
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *(&off_1747A0 + v6));
    if ( !a3 )
      goto LABEL_6;
  }
  else
  {
    sub_7E6F0(a1, v6);
    if ( !a3 )
    {
LABEL_6:
      v8 = 0;
      goto LABEL_14;
    }
  }
  if ( *((_WORD *)a1 + 124) != 129 || *(_QWORD *)(a2 + 16) )
  {
    v10 = sub_7E670((__int64)(a1 + 56));
    v8 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, v10);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
    v9 = "00h";
    if ( *((_WORD *)a1 + 125) > 6u )
      v9 = "00000000h";
    v8 = 0;
    (*(void (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v9, 31);
  }
LABEL_14:
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
  return v8;
}
