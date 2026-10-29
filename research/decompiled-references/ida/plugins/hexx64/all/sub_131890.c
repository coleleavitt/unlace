char __fastcall sub_131890(__int64 a1, __int64 a2, unsigned __int8 *a3, __m128i a4, __m128 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 v10; // r12
  unsigned __int64 *v11; // rdi
  __int64 v13; // rsi
  char v14; // al

  if ( (unsigned __int8 *)a2 != a3 )
  {
    sub_11CDA0(a2);
    sub_123A40(a2, a3, v8, v9);
  }
  v10 = *(_BYTE *)(a1 + 40);
  v11 = *(unsigned __int64 **)(a1 + 8);
  if ( *(_DWORD *)(a2 + 4) != -1 )
    return sub_131490(
             v11,
             *(const __m128i **)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             (__int16 *)a2,
             *(_DWORD *)(a1 + 32),
             v10,
             a4,
             a5,
             *(_DWORD *)(a1 + 36));
  v13 = v11[12];
  v14 = *(_BYTE *)(v13 + 145);
  if ( v14 )
    v14 = sub_11BB90((unsigned __int8 *)a2, v13, 0, *(double *)a4.m128i_i64);
  return v10 == (unsigned __int8)v14;
}

