void __fastcall sub_CBF60(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbp
  int v3; // eax
  int v4; // edx
  int v5; // edx

  v2 = *(_DWORD **)a1;
  if ( *(_DWORD *)(a1 + 56) )
  {
    a2 = 0;
    sub_CBDE0(a1, 0);
  }
  v3 = v2[2] - *(_DWORD *)(a1 + 36);
  v4 = v2[3];
  v2[2] = v3;
  v5 = v4 - *(_DWORD *)(a1 + 32);
  v2[3] = v5;
  v2[4] = v3 + 10 - v5;
  sub_CBEC0((__int64 *)a1, a2);
  sub_C91C0(*(_QWORD *)(a1 + 80), a2);
  sub_C91C0(*(_QWORD *)(a1 + 64), a2);
  sub_C91C0(a1, a2);
}
