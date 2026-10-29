__int64 __fastcall sub_62E70(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( a2 >= *(_QWORD *)(a1 + 24) )
    return 0;
  v4 = *(__int64 **)(a1 + 8);
  v5 = v4[1];
  v6 = *v4;
  if ( v4[2] < (unsigned __int64)(v5 + 1) )
  {
    v8 = qvector_reserve();
    *v4 = v8;
    v6 = v8;
    v5 = v4[1];
  }
  v7 = 16 * v5 + v6;
  *(_OWORD *)v7 = -1;
  ++v4[1];
  *(_QWORD *)v7 = a2;
  *(_QWORD *)(v7 + 8) = *(_QWORD *)(a1 + 24);
  return 1;
}
