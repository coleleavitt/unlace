unsigned __int8 *__fastcall sub_109B30(__int64 a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  unsigned __int8 *result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rbp
  char *v14; // rax

  result = (unsigned __int8 *)sub_105410(a1, a3, a1, a4, a5, a6, a7);
  if ( result )
  {
    v13 = (__int64)result;
    if ( a2 == 2 )
    {
      v14 = (char *)sub_D9DB0(a3[1], 1u, a7, v9, v10, v11, v12);
      result = (unsigned __int8 *)sub_109A50(v13, v14, nullptr, a1);
    }
    else
    {
      result = *((unsigned __int8 **)result + 1);
    }
    if ( result )
      return (unsigned __int8 *)sub_F48B0(a1, *(&off_23AB40 + *result), -1, 1u, nullptr, v12);
  }
  return result;
}
