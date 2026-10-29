char *__fastcall sub_EE100(__int64 *a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  char *result; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rsi

  result = (char *)sub_D9DB0(*a4, 1u, a2, (__int64)a4, a5, a6, a7);
  if ( result )
  {
    v9 = sub_CAE80(result);
    v14 = *a1;
    v15 = v9;
    if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 )
    {
      return (char *)sub_C9430(v14, v9, v10, v11, v12, v13);
    }
    else
    {
      result = &byte_4;
      *(_QWORD *)v14 = v15;
      *(_WORD *)(v14 + 20) = 4;
    }
  }
  return result;
}
