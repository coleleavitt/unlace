__int64 __fastcall sub_163A10(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rbp
  unsigned int v4; // r12d
  __int64 *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  if ( ((*a2 - 4) & 0xFB) == 0 )
    return 0;
  if ( !sub_121960(a2, *(_QWORD *)(a1 + 48), 0) )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)v3 != 69 )
    return 1;
  v4 = *(_DWORD *)(a1 + 64);
  if ( !sub_121960((unsigned __int8 *)(v3 + 32), *(_QWORD *)(a1 + 48), 0) )
    return 1;
  if ( *(_BYTE *)(v3 + 48) != 13 )
    return 1;
  sub_3138A0(v4);
  if ( (unsigned int)ecmp() )
    return 1;
  v5 = *(__int64 **)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v5[1];
  v8 = *v5;
  if ( v5[2] < (unsigned __int64)(v7 + 1) )
  {
    v9 = qvector_reserve();
    *v5 = v9;
    v8 = v9;
    v7 = v5[1];
  }
  *(_QWORD *)(v8 + 8 * v7) = v6;
  ++v5[1];
  return 0;
}

