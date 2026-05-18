__int64 __fastcall sub_CDA90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // eax

  *(_OWORD *)a3 = 0;
  *(_OWORD *)(a3 + 16) = 0;
  *(_OWORD *)(a3 + 32) = 0;
  *(_OWORD *)(a3 + 48) = 0;
  *(_OWORD *)(a3 + 64) = 0;
  if ( !a5 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(a1 + 40))(a1, a2, a3, a4, 0);
  v6 = 1016;
  *(_DWORD *)(a3 + 12) = a5;
  *(_DWORD *)(a3 + 56) = a4;
  if ( a5 > 0 )
    v6 = a5;
  *(_QWORD *)(a3 + 72) = a2;
  *(_QWORD *)(a3 + 64) = a1;
  *(_DWORD *)(a3 + 8) = v6;
  *(_QWORD *)a3 = &unk_23BDC0;
  return 0;
}
