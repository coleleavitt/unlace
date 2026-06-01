__int64 __fastcall sub_14370(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v5; // rdx

  v3 = *(_WORD *)(a3 + 12);
  if ( v3 == 2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 4;
    v5 = a1[5];
    goto LABEL_6;
  }
  if ( v3 == 16 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 4;
    v5 = a1[7];
LABEL_6:
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, a1[4], v5, 31, 0, 1);
    return 1;
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))*a1)(a1, v3);
    return 0;
  }
  return 1;
}
