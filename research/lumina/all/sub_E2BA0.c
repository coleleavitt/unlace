unsigned __int64 sub_E2BA0(
        __int64 a1,
        unsigned int a2,
        char *a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        ...)
{
  char v11; // al
  unsigned int v13; // ebx
  unsigned int *v14; // rdx
  __int64 *v16; // rax
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // kr00_8
  __int64 v22; // kr08_8
  gcc_va_list va; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-60h]

  va_start(va, a11);
  v24 = __readfsqword(0x28u);
  v11 = *a3;
  if ( *a3 )
  {
    v13 = 0;
    do
    {
      if ( v11 == 115 )
      {
        if ( va[0].gp_offset > 0x2F )
        {
          v22 = va_arg(va, _QWORD);
          v16 = &v22;
        }
        else
        {
          v16 = (__int64 *)((char *)va[0].reg_save_area + va[0].gp_offset);
          va[0].gp_offset += 8;
        }
        v17 = *v16;
        v18 = sub_E1710(a1, *v16 == 0 ? 75 : 117, 0, a2 + v13, 0);
        sub_DCC50(a1, v18, v17, 0, v19, v20);
      }
      else
      {
        if ( v11 != 105 )
          return __readfsqword(0x28u) ^ v24;
        if ( va[0].gp_offset > 0x2F )
        {
          v21 = va_arg(va, _QWORD);
          v14 = (unsigned int *)&v21;
        }
        else
        {
          v14 = (unsigned int *)((char *)va[0].reg_save_area + va[0].gp_offset);
          va[0].gp_offset += 8;
        }
        sub_E1710(a1, 71, *v14, v13 + a2, 0);
      }
      v11 = a3[++v13];
    }
    while ( v11 );
  }
  else
  {
    v13 = 0;
  }
  sub_E1710(a1, 84, a2, v13, 0);
  return __readfsqword(0x28u) ^ v24;
}
