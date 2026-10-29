__int64 *__fastcall sub_E0F70(__int64 *a1, int **a2, __int64 a3, __int16 a4)
{
  __int64 *result; // rax
  int v7; // edx
  __int64 v8; // rdx

  result = sub_DEC00(*a1, 167, 0, 0);
  if ( result )
  {
    v7 = *(_DWORD *)(a3 + 64);
    *((_WORD *)result + 24) = a4;
    *((_DWORD *)result + 11) = v7;
    v8 = *(_QWORD *)(a3 + 32);
    *((_DWORD *)result + 1) |= 0x100000u;
    result[8] = v8;
    result = sub_E0F20(a1, *a2, (__int64)result);
    *a2 = (int *)result;
  }
  return result;
}
