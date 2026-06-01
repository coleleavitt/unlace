__int64 __fastcall sub_35110(__int64 a1, __int64 *a2, __int64 a3, __int64 (*a4)())
{
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rax

  v4 = a2[1];
  v6 = *a2;
  if ( a2[2] < (unsigned __int64)(v4 + 1) )
  {
    v10 = qvector_reserve();
    v4 = a2[1];
    *a2 = v10;
    v6 = v10;
  }
  v7 = v6 + 40 * v4;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_BYTE *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 8) = 0;
  ++a2[1];
  sub_33800((_QWORD *)a1, v7, nullptr, a4);
  v8 = *(_QWORD *)(v7 + 24);
  if ( v8 )
  {
    *(_BYTE *)(v8 + 48) = 1;
    *(_BYTE *)(a1 + 56) = 0;
  }
  return 0;
}

