__int64 __fastcall sub_7D150(__int64 a1, _QWORD *a2, double a3)
{
  _BYTE *v4; // r12
  char v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax

  if ( *a2 >= a2[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC59Au, a3);
    BUG();
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = (_BYTE *)*a2;
  if ( *a2 < a2[1] )
  {
    while ( 1 )
    {
      v5 = *v4 ^ 0x7C;
      if ( *v4 == 124 )
        break;
      v6 = *(_QWORD *)(a1 + 8);
      v7 = 2;
      if ( v6 )
        v7 = v6-- + 1;
      v8 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v7 )
      {
        v9 = qvector_reserve(a1, v8, v7, 1);
        *(_QWORD *)a1 = v9;
        v8 = v9;
      }
      *(_QWORD *)(a1 + 8) = v7;
      ++v4;
      *(_BYTE *)(v8 + v6) = v5;
      *(_BYTE *)(*(_QWORD *)a1 + v6 + 1) = 0;
      if ( (unsigned __int64)v4 >= a2[1] )
        goto LABEL_11;
    }
    ++v4;
  }
LABEL_11:
  *a2 = v4;
  return a1;
}

