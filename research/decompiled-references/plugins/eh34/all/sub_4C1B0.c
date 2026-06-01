__int64 __fastcall sub_4C1B0(__int64 a1, int *a2)
{
  int v2; // eax
  int v3; // eax
  __int64 v5; // [rsp+0h] [rbp-28h]

  sub_4C070(a1);
  LODWORD(v5) = -1;
  *(_DWORD *)(a1 + 4) = a2[1];
  *(_DWORD *)(a1 + 8) = a2[2];
  *(_DWORD *)(a1 + 32) = a2[8];
  *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 3);
  *(_DWORD *)(a1 + 48) = a2[12];
  *(_QWORD *)(a1 + 40) = *((_QWORD *)a2 + 5);
  a2[2] = 0;
  *((_QWORD *)a2 + 3) = v5;
  *((_QWORD *)a2 + 5) = v5;
  v2 = *a2;
  a2[8] = 2;
  a2[12] = 2;
  *(_DWORD *)a1 = v2;
  v3 = a2[1];
  if ( v3 == 2 || v3 == 3 || v3 == 1 )
  {
    *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
    a2[1] = 0;
    *((_QWORD *)a2 + 2) = 0;
  }
  return a1;
}
