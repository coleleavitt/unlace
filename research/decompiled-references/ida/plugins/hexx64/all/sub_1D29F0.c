__int64 __fastcall sub_1D29F0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 784);
  result = 0;
  v3 = *(_QWORD *)(v1 + 80);
  *(_WORD *)(v1 + 104) = 0;
  if ( v3 )
  {
    *(_QWORD *)(v1 + 88) = 0;
    result = qfree(v3);
    *(_QWORD *)(v1 + 80) = 0;
    *(_QWORD *)(v1 + 96) = 0;
  }
  return result;
}

