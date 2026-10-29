__int64 __fastcall sub_409E80(__int64 a1, double a2, __m128 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned int *v5; // rax

  result = sub_4069C0(a1, *(_BYTE *)(a1 + 384), a2, a3);
  if ( (_DWORD)result )
    return 1;
  v4 = *(_QWORD *)(a1 + 400);
  if ( *(_QWORD *)(a1 + 848) == v4 )
  {
    v5 = *(unsigned int **)(*(_QWORD *)(a1 + 16) + 56LL);
    if ( v5 && sub_32F060(*v5, 1) )
      *(_QWORD *)(a1 + 16) = sub_679D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    sub_3F56D0(a1, 0x37u, 2, *(_QWORD *)(a1 + 856), 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
    return 1;
  }
  if ( *(_QWORD *)(a1 + 856) == v4 )
  {
    *(_OWORD *)(a1 + 848) = 0;
    return 1;
  }
  return result;
}

