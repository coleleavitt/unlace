__int64 __fastcall sub_34530(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rax
  __int64 *v9; // r13
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rax

  hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  v3 = 32LL * (int)a2;
  v4 = hexdsp(205, a1 + 720, (unsigned int)a2);
  v5 = *(_QWORD *)(a1 + 736);
  v6 = v4;
  v7 = v5;
  if ( !v6 )
    return v3 + v5;
  v9 = (__int64 *)(v5 + v3);
  v10 = *(_QWORD *)(v5 + v3 + 8);
  v11 = v3 + *(_QWORD *)(a1 + 584);
  v12 = *(_QWORD *)(v11 + 8);
  if ( v10 < v12 )
  {
    v13 = *v9;
    if ( v9[2] < v12 )
    {
      v14 = qvector_reserve(v9, v13, *(_QWORD *)(v11 + 8), 8);
      v10 = v9[1];
      *v9 = v14;
      v13 = v14;
    }
    memset((void *)(v13 + 8 * v10), 0, 8 * (v12 - v10));
    v9[1] = v12;
    v5 = *(_QWORD *)(a1 + 736);
  }
  else
  {
    if ( v12 != v10 )
    {
      v9[1] = v12;
      v5 = *(_QWORD *)(a1 + 736);
      v7 = v5;
    }
    if ( !v12 )
      return v3 + v7;
  }
  memcpy(*(void **)(v5 + v3), *(const void **)v11, 8 * v12);
  return v3 + *(_QWORD *)(a1 + 736);
}
