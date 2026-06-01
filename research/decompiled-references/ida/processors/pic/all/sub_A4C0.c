unsigned __int64 __fastcall sub_A4C0(__int64 a1, int a2, __m128 a3, double a4)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 i; // r15
  _QWORD *v11; // r13
  __int64 v13; // [rsp+0h] [rbp-78h]
  __int64 v14; // [rsp+8h] [rbp-70h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
  {
    v14 = *(_QWORD *)(a1 + 160);
    if ( v14 )
    {
      v13 = 0;
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v5 + v6);
        v8 = *(_QWORD *)(v5 + v6 + 56);
        if ( v8 )
        {
          v9 = v7[8];
          if ( v9 )
          {
            for ( i = 0; i != v9; ++i )
            {
              v11 = (_QWORD *)(v8 + 48 * i);
              if ( v11[3] )
              {
                v11[4] = 0;
                qfree();
              }
              if ( *v11 )
              {
                v11[1] = 0;
                qfree();
              }
              v8 = v7[7];
            }
          }
          v7[8] = 0;
          qfree();
        }
        if ( v7[4] )
        {
          v7[5] = 0;
          qfree();
        }
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        ++v13;
        v5 = *(_QWORD *)(a1 + 152);
        v6 += 88;
      }
      while ( v14 != v13 );
    }
    *(_QWORD *)(a1 + 160) = 0;
    qfree();
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  *(_DWORD *)(a1 + 200) = a2;
  read_ioports();
  sub_A130((_QWORD *)a1, a3, a4);
  return v15 - __readfsqword(0x28u);
}

