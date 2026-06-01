__int64 sub_5010(
        __int64 a1,
        int a2,
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
  int v10; // r15d
  size_t v12; // rbp
  const char **v13; // rdx
  const char *v14; // r14
  size_t v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // kr00_8
  gcc_va_list va; // [rsp+0h] [rbp-88h] BYREF

  va_start(va, a10);
  v10 = 0;
  v12 = 0;
  *(_BYTE *)(a1 + 152) = 0;
  if ( a2 > 0 )
  {
    do
    {
      if ( va[0].gp_offset <= 0x2F )
      {
        v13 = (const char **)((char *)va[0].reg_save_area + va[0].gp_offset);
        va[0].gp_offset += 8;
      }
      else
      {
        v18 = va_arg(va, _QWORD);
        v13 = (const char **)&v18;
      }
      v14 = *v13;
      if ( *v13 )
      {
        v15 = strlen(*v13);
        if ( v15 )
        {
          if ( v12 )
          {
            *(_BYTE *)(a1 + v12 + 152) = 32;
            v16 = v12 + 153;
            v17 = 10239 - (v12 + 1);
            v15 += v12 + 1;
          }
          else
          {
            v16 = 152;
            v17 = 10239;
          }
          qstrncpy(a1 + v16, v14, v17);
          if ( v15 > 0x27FE )
            return a1 + 152;
          *(_BYTE *)(a1 + v15 + 152) = 0;
          v12 = v15;
        }
      }
      ++v10;
    }
    while ( a2 != v10 );
  }
  return a1 + 152;
}
