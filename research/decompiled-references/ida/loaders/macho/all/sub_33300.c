__int64 *__fastcall sub_33300(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, char a6, char a7)
{
  __int64 v7; // r15
  void *v10; // [rsp+10h] [rbp-50h] BYREF
  __int128 v11; // [rsp+18h] [rbp-48h]
  unsigned __int64 v12; // [rsp+28h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a5 )
  {
    if ( a6 )
    {
      sub_32F50(a1, a2, 16 * a4 + a3, a5, -1, (__int64)"symbol table size", 0);
      if ( a7 )
        sub_14740(*a1, a1[1]);
    }
    else
    {
      v7 = a3 + 12 * a4;
      v11 = 0;
      v10 = (void *)qvector_reserve();
      memset(v10, 0, 12 * a5);
      *(_QWORD *)&v11 = a5;
      sub_33170((__int64 *)&v10, a2, v7, a5, -1, (__int64)"symbol table size", 0);
      sub_26B00(a1, (__int64)v10, v11, a7);
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree();
      }
    }
  }
  return a1;
}

