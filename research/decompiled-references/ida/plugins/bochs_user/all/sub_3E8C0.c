__int64 __fastcall sub_3E8C0(__int64 a1, unsigned __int64 **a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  unsigned __int64 *v12; // rax
  __int64 v13; // r10
  unsigned __int64 *v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 *v17; // rax
  __int64 v18; // r10
  unsigned __int64 *v19; // r14
  unsigned __int64 v20; // rsi
  void (__fastcall ***v21)(_QWORD, __int64, unsigned __int64 *, __int64); // rdi
  void (__fastcall ***v22)(_QWORD, __int64, unsigned __int64 *, __int64); // rdi
  void (__fastcall ***v23)(_QWORD, __int64, unsigned __int64 *, __int64); // rdi

  result = 4;
  if ( (a3 & 0xFFF) != 0 )
    return result;
  v7 = *(_QWORD *)(a1 + 72) + ((a3 >> 36) & 0xFF8);
  v8 = sub_3E000(a1, v7, 8);
  v9 = v8;
  if ( !v8 )
    return 6;
  if ( (*(_BYTE *)v8 & 1) == 0 )
  {
    *v8 = 7;
    v10 = sub_3E840((_QWORD *)a1) & 0xFFFFFFFFFFFFF000LL | *v8 & ~(((1LL << (*(_BYTE *)(a1 + 4176) - 12)) - 1) << 12);
    *v9 = v10;
    v21 = *(void (__fastcall ****)(_QWORD, __int64, unsigned __int64 *, __int64))(a1 + 4184);
    if ( !v21 )
      goto LABEL_5;
    (**v21)(v21, v7, v9, 8);
  }
  v10 = *v9;
LABEL_5:
  v11 = (~(-1LL << *(_QWORD *)(a1 + 4176)) & v10 & 0xFFFFFFFFFFFFF000LL) + ((a3 >> 27) & 0xFF8);
  v12 = sub_3E000(a1, v11, 8);
  v14 = v12;
  if ( !v12 )
    return 6;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v15 = *v12;
  }
  else
  {
    *v12 = 7;
    v15 = sub_3E840((_QWORD *)a1) & 0xFFFFFFFFFFFFF000LL | *v12 & ~(((1LL << (*(_BYTE *)(a1 + 4176) - 12)) - 1) << 12);
    *v14 = v15;
    v22 = *(void (__fastcall ****)(_QWORD, __int64, unsigned __int64 *, __int64))(a1 + 4184);
    if ( v22 )
    {
      (**v22)(v22, v11, v14, 8);
      v15 = *v14;
    }
    v13 = ~(-1LL << *(_QWORD *)(a1 + 4176));
  }
  v16 = (v13 & v15 & 0xFFFFFFFFFFFFF000LL) + ((a3 >> 18) & 0xFF8);
  v17 = sub_3E000(a1, v16, 8);
  v19 = v17;
  if ( !v17 )
    return 6;
  if ( (*(_BYTE *)v17 & 1) != 0 )
  {
    v20 = *v17;
  }
  else
  {
    *v17 = 7;
    v20 = sub_3E840((_QWORD *)a1) & 0xFFFFFFFFFFFFF000LL | *v17 & ~(((1LL << (*(_BYTE *)(a1 + 4176) - 12)) - 1) << 12);
    *v19 = v20;
    v23 = *(void (__fastcall ****)(_QWORD, __int64, unsigned __int64 *, __int64))(a1 + 4184);
    if ( v23 )
    {
      (**v23)(v23, v16, v19, 8);
      v20 = *v19;
    }
    v18 = ~(-1LL << *(_QWORD *)(a1 + 4176));
  }
  if ( !sub_3E000(a1, ((a3 >> 9) & 0xFF8) + (v18 & v20 & 0xFFFFFFFFFFFFF000LL), 8) )
    return 6;
  if ( a2 )
    *a2 = v19;
  return 0;
}

