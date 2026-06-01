char __fastcall sub_1355F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char result; // al
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rbp
  int v10; // edx

  result = *(_BYTE *)(a1 + 248);
  if ( result )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( (unsigned int)a2 >= *(_DWORD *)(v7 + 64) )
      sub_1301F0(a1, a2, a3, a4, a5, a6);
    v8 = a3;
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * (unsigned int)a2);
    v10 = sub_135520(v9, 1);
    result = 0;
    if ( v10 )
      return *(_DWORD *)(*(_QWORD *)(v9 + 368) + 4LL * (v10 == -1)) == v8;
  }
  return result;
}

