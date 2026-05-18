__int64 *__fastcall sub_DCF40(__int64 a1, _DWORD *a2, __int64 a3, int a4)
{
  int v6; // ebx
  __int64 *result; // rax
  __int64 v8; // r10

  v6 = *a2 - 1;
  result = (__int64 *)sub_DCB40(*(_QWORD *)a1, *(const void **)a3, *(unsigned int *)(a3 + 8));
  *(_QWORD *)&a2[6 * v6 + 4] = result;
  if ( a4 )
  {
    sub_C23E0((char *)result);
    result = (__int64 *)*(unsigned __int8 *)(a1 + 292);
    if ( (unsigned __int8)result > 1u && (_BYTE)result != 3 )
      return sub_DC5F0((__int64 *)a1, *(_QWORD *)(v8 + 16), (const __m128i *)a3);
  }
  return result;
}
