__int64 __fastcall sub_155920(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rax

  v1 = operator new(0x28u);
  *(_QWORD *)v1 = 0;
  v2 = v1;
  *(_OWORD *)(v1 + 8) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  v3 = a1[1];
  v4 = *a1;
  if ( a1[2] < (unsigned __int64)(v3 + 1) )
  {
    v8 = qvector_reserve((__int64)a1, v4, v3 + 1, 8);
    *a1 = v8;
    v4 = v8;
    v3 = a1[1];
  }
  *(_QWORD *)(v4 + 8 * v3) = v2;
  v5 = *a1;
  v6 = a1[1] + 1;
  a1[1] = v6;
  return *(_QWORD *)(v5 + 8 * v6 - 8);
}

