void __fastcall sub_3EABC0(__int64 a1, int a2, int a3, int a4, double a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // r14
  int v10; // edx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r15d

  v6 = *(_QWORD *)(a1 + 832);
  v7 = *(_QWORD *)(v6 + 712);
  if ( !v7 )
    goto LABEL_10;
  v9 = *(int *)(*(_QWORD *)(v6 + 704) + 4 * v7 - 4);
  *(_QWORD *)(v6 + 712) = v7 - 1;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
  if ( v10 <= 4
    || (v11 = *(unsigned __int16 *)(a1 + 48), LOWORD(v11) = v11 - 476, (unsigned __int16)v11 > 0x17u)
    || (v12 = 13371391, !_bittest64(&v12, v11)) )
  {
    sub_3E8D60(a1, 4u, v10, a4, 0x3BEA45E214ADDC55LL, v9, 0);
    if ( !*(_QWORD *)(a1 + 192) )
      goto LABEL_9;
LABEL_6:
    v13 = *(_QWORD *)(a1 + 832);
    v14 = *(_QWORD *)(v13 + 712);
    if ( v14 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(v13 + 704) + 4 * v14 - 4);
      *(_QWORD *)(v13 + 712) = v14 - 1;
      sub_3E9B00(a1, *(_QWORD *)(a1 + 192), *(unsigned __int8 *)(a1 + 184), v15, 1);
      sub_3E8D60(a1, 0x16u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v9, v15, v9, 0);
      sub_3E6F70(*(_QWORD *)(a1 + 832), v15);
      goto LABEL_9;
    }
LABEL_10:
    sub_3E4E50(a5);
  }
  sub_3E8D60(a1, 4u, v10, a4, 0x3BEA45E214ADDC55LL, v9, 0);
  sub_3EA150(a1, 4, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v9, v9, 0, a5);
  if ( *(_QWORD *)(a1 + 192) )
    goto LABEL_6;
LABEL_9:
  sub_3E8D60(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v9, a3, v9, 0);
  sub_3E9170(a1, a2, v9);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v9);
}

