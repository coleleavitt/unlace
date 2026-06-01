__int64 __fastcall sub_47EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 sreg; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax

  if ( a4 != -1 )
    a3 = a4;
  if ( a5 < 0 )
    goto LABEL_12;
  v6 = a3;
  if ( (_WORD)a5 )
  {
    if ( (unsigned __int16)a5 == 28 )
    {
      sreg = get_sreg(a3, 68);
      if ( sreg != -1 )
      {
        *(_QWORD *)a1 = 0;
        *(_BYTE *)(a1 + 24) = 11;
        *(_OWORD *)(a1 + 8) = 0;
        v17 = qvector_reserve(a1, 0, 1, 24);
        v18 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v17;
        v19 = v17 + 24 * v18;
        *(_QWORD *)v19 = sreg;
        *(_QWORD *)(v19 + 8) = v6;
        *(_DWORD *)(v19 + 16) = 0x200000;
        ++*(_QWORD *)(a1 + 8);
        return a1;
      }
    }
    else if ( a6 && (unsigned __int16)a5 == 25 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      v8 = a3;
      if ( get_sreg(a3, 67) )
      {
        if ( *(_DWORD *)(v7 + 260) == 1 )
          v8 = v6 + 1;
      }
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 11;
      *(_OWORD *)(a1 + 8) = 0;
      v9 = qvector_reserve(a1, 0, 1, 24);
      v10 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v9;
      v11 = v9 + 24 * v10;
      *(_QWORD *)v11 = v8;
      *(_QWORD *)(v11 + 8) = v6;
      *(_DWORD *)(v11 + 16) = 0x100000;
      ++*(_QWORD *)(a1 + 8);
      return a1;
    }
LABEL_12:
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  *(_BYTE *)(a1 + 24) = 11;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v13 = qvector_reserve(a1, 0, 1, 24);
  v14 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v13;
  v15 = v13 + 24 * v14;
  *(_QWORD *)v15 = 0;
  *(_QWORD *)(v15 + 8) = v6;
  *(_DWORD *)(v15 + 16) = 0;
  ++*(_QWORD *)(a1 + 8);
  return a1;
}

