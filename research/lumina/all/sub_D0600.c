__int64 __fastcall sub_D0600(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx

  if ( *(_BYTE *)(a1 + 103) )
    return 0;
  v7 = *a2 + 24LL * a3;
  sub_D0130(a1, (unsigned int)*(char *)(v7 + 1), *(_QWORD *)(v7 + 16), a4, a5, a6);
  *(_QWORD *)(v7 + 16) = 0;
  *(_WORD *)v7 = 183;
  return 1;
}
