__int64 __fastcall sub_6780(__int64 *a1, __int64 a2, char a3)
{
  sub_5A90(a1[77], (__int64)(a1 + 28), a2, a3);
  if ( get_name_expr() < 0 )
  {
    return 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 56))(a1, 0, 0);
    if ( (a3 & 2) != 0 && (*(_BYTE *)(a1[79] + 4) & 0x40) == 0 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(a1, *(_QWORD *)(a1[79] + 184), 32);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, (unsigned int)(char)(*((_BYTE *)a1 + 250) + 48));
    }
    return 1;
  }
}

