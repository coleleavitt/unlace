__int64 sub_C7640(
        unsigned __int8 *a1,
        _BYTE *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        ...)
{
  char v10; // r13
  unsigned int v11; // ebp
  char v12; // r14
  int **overflow_arg_area; // r12
  __int64 result; // rax
  char v15; // r10
  signed __int8 v16; // dl
  __int64 v17; // r9
  int v18; // ecx
  char v19; // dl
  _DWORD **v20; // rbx
  __int64 v21; // rdx
  int **v22; // rdx
  gcc_va_list va; // [rsp+0h] [rbp-88h] BYREF

  va_start(va, a10);
  v10 = 0;
  v11 = 16;
  v12 = 0;
  overflow_arg_area = (int **)va[0].overflow_arg_area;
  result = 0;
  while ( 1 )
  {
    v15 = a2[1] - 48;
    if ( *a2 == 48 )
    {
      if ( v15 > 0 )
        return result;
      v18 = 0;
    }
    else
    {
      v16 = *a1;
      if ( (byte_1BEF00[*a1] & 4) == 0 )
        return result;
      v17 = (__int64)&a1[(unsigned __int8)(*a2 - 49) + 1];
      v18 = 0;
      while ( 1 )
      {
        ++a1;
        v18 = v16 + 10 * v18 - 48;
        if ( a1 == (unsigned __int8 *)v17 )
          break;
        v16 = *a1;
        if ( (byte_1BEF00[*a1] & 4) == 0 )
          return result;
      }
      if ( v15 > v18 || word_1BAA00[(char)a2[2] - 97] < v18 )
        return result;
    }
    v19 = a2[3];
    if ( !v19 )
      break;
    if ( *a1 != v19 )
      return result;
    if ( v11 > 0x2F )
    {
      v22 = overflow_arg_area;
      v10 = 1;
      ++overflow_arg_area;
    }
    else
    {
      v21 = v11;
      v12 = 1;
      v11 += 8;
      v22 = (int **)((char *)va[0].reg_save_area + v21);
    }
    ++a1;
    result = (unsigned int)(result + 1);
    a2 += 4;
    **v22 = v18;
  }
  if ( v12 )
    va[0].gp_offset = v11;
  if ( v10 )
    va[0].overflow_arg_area = overflow_arg_area;
  if ( va[0].gp_offset > 0x2F )
    v20 = (_DWORD **)va[0].overflow_arg_area;
  else
    v20 = (_DWORD **)((char *)va[0].reg_save_area + va[0].gp_offset);
  result = (unsigned int)(result + 1);
  **v20 = v18;
  return result;
}
