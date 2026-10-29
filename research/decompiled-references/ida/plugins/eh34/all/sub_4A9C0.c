__int64 __fastcall sub_4A9C0(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdi

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 < v2 + 1 )
  {
    v7 = qvector_reserve(a1 + 32, 0, v2 + 1, 56);
    v8 = *(_QWORD *)(a1 + 40);
    v9 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v3;
    v4 = v7;
    v10 = *(_QWORD *)(a1 + 32);
    v11 = v8 - 1;
    if ( v11 >= 0 )
    {
      v12 = v7;
      do
      {
        v13 = v12;
        v12 += 56;
        sub_4C570(v13, v10);
        v14 = v10;
        v10 += 56;
        sub_4C1A0(v14);
      }
      while ( v11-- != 0 );
      v10 = *(_QWORD *)(a1 + 32);
    }
    qfree(v10);
    *(_QWORD *)(a1 + 32) = v4;
    v2 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 48) = v9;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  v5 = v4 + 56 * v2;
  sub_4C020(v5);
  ++*(_QWORD *)(a1 + 40);
  *(_DWORD *)(v5 + 4) = 0;
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(a1 + 32) + 56LL * *(int *)(a1 + 260);
  return v5;
}

