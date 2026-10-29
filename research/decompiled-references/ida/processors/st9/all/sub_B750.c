__int64 __fastcall sub_B750(__int64 a1, __int64 a2, char a3)
{
  if ( (*(_BYTE *)(a2 + 1) != 5 || (*(_BYTE *)(a2 + 32) & 2) == 0) && !a3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 35);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, 0);
}

