int __fastcall sub_25A390(__int64 a1, __int64 a2, double a3)
{
  int result; // eax
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rdi
  _QWORD *v7; // r8
  bool v8; // cl
  bool v9; // si

  result = sub_2596A0(a1, a2, a3);
  if ( !result )
  {
    v4 = *(_QWORD **)(a1 + 32);
    v5 = *(_QWORD **)(a2 + 32);
    v6 = &v4[*(_QWORD *)(a1 + 40)];
    v7 = &v5[*(_QWORD *)(a2 + 40)];
    v8 = v4 != v6;
    v9 = v5 != v7;
    if ( v4 != v6 )
    {
      while ( v9 )
      {
        if ( *v4 < *v5 )
          return -1;
        if ( *v5 < *v4 )
          return 1;
        ++v4;
        ++v5;
        v8 = v6 != v4;
        v9 = v7 != v5;
        if ( v6 == v4 )
          break;
      }
    }
    if ( v4 != v6 )
      return v8 && v5 == v7;
    result = -1;
    if ( !v9 )
      return v8 && v5 == v7;
  }
  return result;
}

