__int64 __fastcall sub_16B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ebp
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( a5 < 0 )
    goto LABEL_7;
  if ( a4 != -1 )
    a3 = a4;
  a5 = (unsigned __int16)a5;
  v5 = a5;
  v6 = a3;
  if ( !(_WORD)a5 )
  {
    *(_BYTE *)(a1 + 24) = 11;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v7 = qvector_reserve(a1, 0, 1, 24);
    v8 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v7;
    v9 = v7 + 24 * v8;
    *(_QWORD *)v9 = 0;
    *(_QWORD *)(v9 + 8) = v6;
    *(_DWORD *)(v9 + 16) = 0;
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
  v11 = sub_EFB0(*(_QWORD **)(a2 + 8), a3, (unsigned __int16)a5);
  if ( v11 == -1 )
  {
LABEL_7:
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 11;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v12 = qvector_reserve(a1, 0, 1, 24);
    v13 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v12;
    v14 = v12 + 24 * v13;
    *(_QWORD *)v14 = v11;
    *(_QWORD *)(v14 + 8) = v6;
    *(_WORD *)(v14 + 16) = 0;
    *(_WORD *)(v14 + 18) = 32 * (v5 == 4);
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
}

