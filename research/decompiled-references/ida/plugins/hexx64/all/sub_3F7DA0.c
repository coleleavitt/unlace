__int64 __fastcall sub_3F7DA0(__int64 a1, int a2, unsigned int a3, __m128i a4, __m128 a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned int dtype_by_size; // r13d
  unsigned __int8 v10; // al

  result = a3;
  v7 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v7 + 84) == 8 && (_DWORD)result )
  {
    v8 = *(int *)(v7 + 80);
    if ( (int)result < v8 )
    {
      dtype_by_size = (unsigned __int8)get_dtype_by_size();
      v10 = get_dtype_by_size();
      sub_1D6840(a1, dtype_by_size, v10, a2, a2, 0, a4, a5, a6);
      return (unsigned int)v8;
    }
  }
  return result;
}

