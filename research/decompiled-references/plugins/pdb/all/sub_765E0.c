_QWORD *__fastcall sub_765E0(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v5; // rbx
  unsigned int *v6; // rax
  __int64 v7; // rdx
  char v8; // al

  v3 = a3;
  if ( (unsigned __int64)a3 >= a2[14] )
  {
    *a1 = 0;
    return a1;
  }
  v5 = operator new(0x58u);
  v6 = (unsigned int *)(a2[13] + 56 * v3);
  v7 = *v6;
  *(_QWORD *)(v5 + 8) = a2[8];
  *(_QWORD *)v5 = off_B22E0;
  *(_QWORD *)(v5 + 16) = a2;
  *(_QWORD *)(v5 + 24) = v6 + 2;
  *(_QWORD *)(v5 + 32) = v6 + 8;
  *(_QWORD *)(v5 + 40) = v7;
  *(_BYTE *)(v5 + 80) = 1;
  *(_OWORD *)(v5 + 48) = 0;
  *(_OWORD *)(v5 + 64) = -1;
  v8 = sub_76280((__m128i *)v5, 0);
  *(_BYTE *)(v5 + 80) = v8;
  if ( v8 )
  {
    *a1 = v5;
    return a1;
  }
  else
  {
    *a1 = 0;
    if ( !v5 )
      return a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return a1;
  }
}
