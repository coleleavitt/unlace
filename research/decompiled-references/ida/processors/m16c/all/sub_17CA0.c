unsigned __int64 __fastcall sub_17CA0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 i; // r15
  _QWORD *v8; // r13
  __int64 v10; // [rsp+0h] [rbp-78h]
  __int64 v11; // [rsp+8h] [rbp-70h]
  unsigned __int64 v12; // [rsp+38h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  netnode_qsupstr();
  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 )
  {
    v11 = *(_QWORD *)(a1 + 168);
    if ( v11 )
    {
      v10 = 0;
      v3 = 0;
      do
      {
        v4 = (_QWORD *)(v2 + v3);
        v5 = *(_QWORD *)(v2 + v3 + 56);
        if ( v5 )
        {
          v6 = v4[8];
          if ( v6 )
          {
            for ( i = 0; i != v6; ++i )
            {
              v8 = (_QWORD *)(v5 + 48 * i);
              if ( v8[3] )
              {
                v8[4] = 0;
                qfree();
              }
              if ( *v8 )
              {
                v8[1] = 0;
                qfree();
              }
              v5 = v4[7];
            }
          }
          v4[8] = 0;
          qfree();
        }
        if ( v4[4] )
        {
          v4[5] = 0;
          qfree();
        }
        if ( v4[1] )
        {
          v4[2] = 0;
          qfree();
        }
        ++v10;
        v2 = *(_QWORD *)(a1 + 160);
        v3 += 88;
      }
      while ( v11 != v10 );
    }
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  getinf_buf();
  qstrlwr();
  qstrncat();
  read_ioports();
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a1 + 4368);
  return v12 - __readfsqword(0x28u);
}

