__int64 __fastcall sub_293D0(__int64 a1, _QWORD *a2, _QWORD *a3, int a4)
{
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  v5 = a4;
  if ( !*(_BYTE *)(a1 + 440) )
    sub_28840(a1);
  result = 0;
  if ( v5 < *(_QWORD *)(a1 + 232) )
  {
    v7 = *(_QWORD *)(a1 + 224) + 72 * v5;
    v8 = *(_QWORD *)(v7 + 24);
    v9 = *(_QWORD *)(v7 + 32);
    *a2 = v8;
    *a3 = v9;
    return 1;
  }
  return result;
}

