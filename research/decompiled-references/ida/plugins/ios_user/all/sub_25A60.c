__int64 __fastcall sub_25A60(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax

  if ( !*(_DWORD *)(qword_8FB50 + 144LL * *(int *)(a1 + 1176) + 120) )
  {
    v3 = *(int *)(a1 + 1188);
    if ( (int)v3 > 0 && v3 < a3[1] )
      *(_QWORD *)(*a3 + 32 * v3 + 8) &= ~0x100uLL;
  }
  return 1;
}

