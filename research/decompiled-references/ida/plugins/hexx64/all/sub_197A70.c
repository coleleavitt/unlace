__int64 __fastcall sub_197A70(__int64 a1, double a2)
{
  _DWORD *v2; // rsi
  __int64 result; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax

  v2 = *(_DWORD **)(a1 + 32);
  if ( *v2 != 2 )
    return 0;
  if ( sub_1952E0(*(_QWORD *)(a1 + 40), (__int64)v2, a2) )
  {
    v4 = *(_QWORD **)(a1 + 40);
    result = 1;
    if ( v4[13] )
      return result;
    v5 = v4[11];
    v6 = *(_QWORD *)(a1 + 32);
    v7 = v4[10];
    if ( v4[12] < (unsigned __int64)(v5 + 1) )
    {
      v8 = qvector_reserve((__int64)(v4 + 10), v7, v5 + 1, 8);
      v4[10] = v8;
      v7 = v8;
      v5 = v4[11];
    }
    *(_QWORD *)(v7 + 8 * v5) = v6;
    ++v4[11];
    *(_BYTE *)(a1 + 48) = 1;
  }
  return 0;
}

