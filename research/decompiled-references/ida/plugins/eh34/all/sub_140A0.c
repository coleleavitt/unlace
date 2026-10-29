__int64 __fastcall sub_140A0(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // eax
  _QWORD *v5; // rax
  _QWORD **v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdx

  if ( a2 != 7 )
    return 0;
  v4 = *a3;
  if ( *a3 <= 0x2F )
  {
    v7 = *((_QWORD *)a3 + 2);
    v8 = v4 + 8;
    *a3 = v8;
    if ( *(_QWORD *)(v7 + v4) != 0x9676D4FFFEBD5C67LL )
      return 0;
    if ( (unsigned int)v8 <= 0x2F )
    {
      v6 = (_QWORD **)(v8 + v7);
      *a3 = v4 + 16;
LABEL_12:
      v9 = *v6;
      v10 = (_QWORD *)operator new(0x10u);
      v11 = *(_QWORD *)(a1 + 16);
      *v10 = off_8BD60;
      v10[1] = v11;
      *v9 = v10;
      return 1;
    }
    v6 = *((_QWORD ***)a3 + 1);
LABEL_11:
    *((_QWORD *)a3 + 1) = v6 + 1;
    goto LABEL_12;
  }
  v5 = *((_QWORD **)a3 + 1);
  v6 = (_QWORD **)(v5 + 1);
  *((_QWORD *)a3 + 1) = v5 + 1;
  if ( *v5 == 0x9676D4FFFEBD5C67LL )
    goto LABEL_11;
  return 0;
}

