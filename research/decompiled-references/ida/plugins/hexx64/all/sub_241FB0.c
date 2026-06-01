__int64 __fastcall sub_241FB0(__int64 ***a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  __int64 *v7; // r14
  __int64 v8; // rax
  __int64 **v10; // [rsp+0h] [rbp-48h]
  __int64 v11; // [rsp+8h] [rbp-40h]

  v11 = (__int64)&(*a1)[3 * (_QWORD)a1[1]];
  if ( *a1 == (__int64 **)v11 )
    return 1;
  v10 = *a1;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = (__int64)&(*v10)[(_QWORD)v10[1]];
    if ( (__int64 *)v6 != *v10 )
    {
      v7 = *v10;
      do
      {
        while ( 1 )
        {
          v8 = sub_32ABC0(*v7, a3, 1);
          if ( v8 >= -127 )
            break;
          ++v7;
          ++v4;
          if ( (__int64 *)v6 == v7 )
            goto LABEL_8;
        }
        v5 -= ((sub_23E480(*(_DWORD *)(a2 + 640), v8, a3, 1) & 0x20000) == 0) - 1LL;
        ++v7;
      }
      while ( (__int64 *)v6 != v7 );
    }
LABEL_8:
    v10 += 3;
  }
  while ( (__int64 **)v11 != v10 );
  if ( v5 >= v4 )
    return 1;
  else
    return 2;
}

