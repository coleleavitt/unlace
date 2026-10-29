unsigned __int64 *__fastcall sub_1E8FB0(__int64 a1, unsigned int a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // al
  unsigned __int64 *result; // rax

  v4 = a2;
  if ( (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)a1 + 64LL) )
    sub_1DF460(a4);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 528LL) + 8 * v4);
  if ( v6 + 424 != a3 + 8 )
  {
    v7 = *(_QWORD *)(v6 + 424);
    *(_QWORD *)(v6 + 424) = *(_QWORD *)(a3 + 8);
    v8 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 8) = v7;
    v9 = *(_QWORD *)(v6 + 432);
    *(_QWORD *)(v6 + 432) = v8;
    *(_QWORD *)(a3 + 16) = v9;
  }
  v10 = *(_BYTE *)(v6 + 440);
  *(_BYTE *)(v6 + 440) = *(_BYTE *)(a3 + 24);
  *(_BYTE *)(a3 + 24) = v10;
  sub_1E8CA0(v6 + 416, a3);
  result = sub_13FCB0((unsigned __int64 **)(v6 + 456));
  *(_BYTE *)(v6 + 472) = 1;
  return result;
}

