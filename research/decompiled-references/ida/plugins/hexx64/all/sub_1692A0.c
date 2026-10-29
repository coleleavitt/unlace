__int64 __fastcall sub_1692A0(__int64 a1, double a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rdi

  v3 = sub_1120C0(*(_QWORD *)(a1 + 8), 0);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = v3;
  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
  if ( (unsigned int)v6 >= *(_DWORD *)(v4 + 64) )
    goto LABEL_7;
  v7 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v4 + 528) + 8 * v6), 0);
  result = 0;
  if ( v5 == v7 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v9 + 6) & 2) == 0 )
    {
      sub_159B40(v9, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, *(_QWORD *)(a1 + 56), 0, a2);
      v10 = *(_QWORD *)(a1 + 56);
      v11 = *(_QWORD *)(a1 + 64);
      v12 = *(unsigned int *)(v10 + 72);
      if ( (unsigned int)v12 < *(_DWORD *)(v11 + 64) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v12);
        sub_11D5A0(v10);
        v14 = *(_DWORD *)(a1 + 24);
        v15 = *(_QWORD *)(a1 + 8);
        BYTE1(v14) &= ~2u;
        LOBYTE(v14) = v14 | 0x80;
        *(_DWORD *)(a1 + 24) = v14;
        sub_13B2C0(v15);
        sub_112550(a1, *(_QWORD *)(a1 + 8), v13);
        sub_66FA0(*(_QWORD *)(a1 + 64), 1);
        return 1;
      }
LABEL_7:
      sub_167AF0(a2);
    }
  }
  return result;
}

