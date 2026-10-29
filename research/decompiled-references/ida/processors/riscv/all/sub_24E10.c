__int64 __fastcall sub_24E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 sreg; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int128 v21; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( a4 != -1 )
    a3 = a4;
  if ( a5 < 0 )
    goto LABEL_6;
  v5 = a3;
  if ( !(_WORD)a5 )
  {
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 11;
    *(_OWORD *)(a1 + 8) = 0;
    v7 = qvector_reserve(a1, 0, 1, 24);
    v8 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v7;
    v9 = v7 + 24 * v8;
    *(_QWORD *)v9 = 0;
    *(_QWORD *)(v9 + 8) = v5;
    *(_DWORD *)(v9 + 16) = 0;
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
  if ( (unsigned __int16)a5 != 3 )
    goto LABEL_6;
  v10 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v10 + 468) & 4) == 0 )
    goto LABEL_6;
  sreg = get_sreg(a3, 100);
  v21 = 0;
  if ( sreg == -1 )
  {
    v12 = sub_1FA90(v10, -1);
    if ( v12 != -1 )
    {
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 11;
      *(_OWORD *)(a1 + 8) = 0;
      v13 = qvector_reserve(a1, 0, 1, 24);
      v14 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v13;
      v15 = v13 + 24 * v14;
      *(_QWORD *)v15 = v12;
      *(_QWORD *)(v15 + 8) = -1;
      *(_DWORD *)(v15 + 16) = 0x200000;
      ++*(_QWORD *)(a1 + 8);
      return a1;
    }
LABEL_6:
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  v16 = v5;
  v17 = -1;
  if ( (unsigned __int8)get_sreg_range(&v21, v16, 100) )
    v17 = v21;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 11;
  *(_OWORD *)(a1 + 8) = 0;
  v18 = qvector_reserve(a1, 0, 1, 24);
  v19 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v18;
  v20 = v18 + 24 * v19;
  *(_QWORD *)v20 = sreg;
  *(_QWORD *)(v20 + 8) = v17;
  *(_DWORD *)(v20 + 16) = 0x200000;
  ++*(_QWORD *)(a1 + 8);
  return a1;
}

