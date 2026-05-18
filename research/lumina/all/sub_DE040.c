__int64 *__fastcall sub_DE040(__int64 a1, __int64 a2)
{
  __m128i *v2; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // r15
  __m128i *v7; // r12
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // r14
  __int64 *v11; // rax

  if ( !a2 )
    return nullptr;
  v2 = nullptr;
  v4 = sub_DE040(a1, *(_QWORD *)(a2 + 32));
  v5 = *(_QWORD *)(a2 + 24);
  v6 = (_QWORD *)v4;
  if ( v5 )
    v2 = sub_DD6E0(a1, v5, 0, nullptr);
  v7 = nullptr;
  v8 = sub_DD150(a1, *(_DWORD **)(a2 + 16), 0);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v8;
  if ( v9 )
    v7 = sub_DD6E0(a1, v9, 0, nullptr);
  v11 = sub_DD150(a1, *(_DWORD **)a2, 0);
  return sub_DC520(a1, v11, (__int64)v7, v10, (__int64)v2, v6);
}
