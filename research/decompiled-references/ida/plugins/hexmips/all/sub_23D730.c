__int64 __fastcall sub_23D730(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  _QWORD *v7; // r14
  __int64 v8; // rax
  _QWORD *v10; // [rsp+0h] [rbp-48h]
  __int64 v11; // [rsp+8h] [rbp-40h]

  v11 = *a1 + 24LL * a1[1];
  if ( *a1 == v11 )
    return 1;
  v10 = (_QWORD *)*a1;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *v10 + 8LL * v10[1];
    if ( v6 != *v10 )
    {
      v7 = (_QWORD *)*v10;
      do
      {
        while ( 1 )
        {
          v8 = sub_325C90(*v7, a3, 1);
          if ( v8 >= -127 )
            break;
          ++v7;
          ++v4;
          if ( (_QWORD *)v6 == v7 )
            goto LABEL_8;
        }
        v5 -= ((sub_239C00(*(_DWORD *)(a2 + 640), v8, a3, 1) & 0x20000) == 0) - 1LL;
        ++v7;
      }
      while ( (_QWORD *)v6 != v7 );
    }
LABEL_8:
    v10 += 3;
  }
  while ( (_QWORD *)v11 != v10 );
  if ( v5 >= v4 )
    return 1;
  else
    return 2;
}

