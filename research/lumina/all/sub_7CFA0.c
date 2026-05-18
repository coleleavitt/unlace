void __fastcall sub_7CFA0(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int *v10; // rax
  char *v11; // r10
  unsigned int *v12; // r9
  unsigned int *v13; // r14
  __int64 v14; // r13
  unsigned int *v15; // [rsp+8h] [rbp-50h]
  char *v16; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v7 = a4;
    v8 = a5;
    if ( a4 )
    {
      if ( a4 + a5 == 2 )
      {
LABEL_9:
        if ( a2[1] + ((unsigned __int64)*a2 << 32) < a1[1] + ((unsigned __int64)*a1 << 32) )
          sub_7C800(a1, a2);
      }
      else
      {
        while ( 1 )
        {
          if ( v7 <= v8 )
          {
            v14 = v8 / 2;
            v13 = &a2[548 * (v8 / 2)];
            v12 = sub_7BDA0(a1, (__int64)a2, *v13, v13[1]);
            v9 = 0xE21A291C077975B9LL * (((char *)v12 - (char *)a1) >> 4);
          }
          else
          {
            v9 = v7 / 2;
            v10 = sub_7BE20(a2, a3, a1[548 * (v7 / 2)], a1[548 * (v7 / 2) + 1]);
            v12 = &a1[548 * (v7 / 2)];
            v13 = v10;
            v14 = 0xE21A291C077975B9LL * (((char *)v10 - v11) >> 4);
          }
          v15 = v12;
          v16 = sub_7C870((char *)v12, v11, (char *)v13);
          v8 -= v14;
          sub_7CFA0(a1, v15, v16, v9, v14);
          v7 -= v9;
          if ( !v7 || !v8 )
            break;
          a1 = (unsigned int *)v16;
          a2 = v13;
          if ( v7 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}
