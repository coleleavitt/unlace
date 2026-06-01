__int64 __fastcall sub_5060(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r14
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax

  rangeset_t_add();
  v5 = *a3;
  v6 = (_QWORD *)(a1 + 24 * a2);
  v7 = v6[7];
  v8 = v6[6];
  if ( v6[8] < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve();
    v6[6] = v10;
    v8 = v10;
    v7 = v6[7];
  }
  *(_QWORD *)(v8 + 8 * v7) = v5;
  ++*(_QWORD *)(a1 + 24 * a2 + 56);
  *(_BYTE *)(a1 + 240) = 1;
  return 1;
}
