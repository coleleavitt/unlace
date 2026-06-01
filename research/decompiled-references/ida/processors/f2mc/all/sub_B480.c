unsigned __int64 __fastcall sub_B480(__int64 a1, int a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 i; // r15
  _QWORD *v11; // r13
  int v12; // r12d
  __int64 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 208) = a2;
  *(_QWORD *)(a1 + 192) = 0;
  v3 = getinf();
  if ( (unsigned int)v3 > 0xD || (v4 = -8293, _bittest64(&v4, v3)) )
    *(_DWORD *)(a1 + 208) &= ~2u;
  v5 = *(_QWORD *)(a1 + 160);
  if ( v5 )
  {
    v15 = *(_QWORD *)(a1 + 168);
    if ( v15 )
    {
      v14 = 0;
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
        ++v14;
        v5 = *(_QWORD *)(a1 + 160);
        v6 += 88;
      }
      while ( v15 != v14 );
    }
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  read_ioports();
  if ( *(_DWORD *)(a1 + 208) && *(_QWORD *)(a1 + 168) )
  {
    v12 = 0;
    do
    {
      while ( 1 )
      {
        create_data();
        if ( !(unsigned __int8)set_name() )
          break;
        ++v12;
        set_cmt();
        if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 168) )
          return v16 - __readfsqword(0x28u);
      }
      ++v12;
      set_cmt();
    }
    while ( (unsigned __int64)v12 < *(_QWORD *)(a1 + 168) );
  }
  return v16 - __readfsqword(0x28u);
}

