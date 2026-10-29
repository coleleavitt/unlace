char __fastcall sub_139AB0(__int64 a1, unsigned int a2, int a3, double a4)
{
  char result; // al
  __int64 v5; // rax
  __int64 v7; // rbp
  int v8; // edx

  result = *(_BYTE *)(a1 + 248);
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( a2 >= *(_DWORD *)(v5 + 64) )
      sub_1346B0(a4);
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * a2);
    v8 = sub_1399E0(v7, 1);
    result = 0;
    if ( v8 )
      return *(_DWORD *)(*(_QWORD *)(v7 + 368) + 4LL * (v8 == -1)) == a3;
  }
  return result;
}

