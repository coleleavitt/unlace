__int64 __fastcall sub_C2D90(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v8; // r12

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v6 + 32) )
    xmmword_241500();
  if ( a2 + v5 > *(_QWORD *)v6 || (*(_BYTE *)(v6 + 44) & 2) != 0 )
  {
    *a4 = 0;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 24) + a2;
    ++*(_DWORD *)(v6 + 40);
    *a4 = v8;
  }
  if ( *(_QWORD *)(v6 + 32) )
    xmmword_241510();
  return 0;
}
