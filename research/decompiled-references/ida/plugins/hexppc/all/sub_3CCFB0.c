_QWORD *__fastcall sub_3CCFB0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 i; // r12
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 j; // r12
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+10h] [rbp-50h] BYREF
  __int64 v21; // [rsp+18h] [rbp-48h]
  __int128 v22; // [rsp+20h] [rbp-40h]
  unsigned __int64 v23; // [rsp+38h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  v20 = a3;
  v21 = 0;
  v18 = 0;
  v22 = 0;
  sub_148530(&v19, a2, &v20, a5, &v18, 0, 67, a4);
  v6 = (__int64 *)v19;
  if ( v19 )
  {
    if ( (*(_DWORD *)(v19 + 104))-- == 1 )
    {
      sub_254CF0(v6);
      v8 = v6[23];
      if ( v8 )
      {
        v9 = v6[24];
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = (_QWORD *)(v8 + 24 * i);
            if ( *v11 )
            {
              v11[1] = 0;
              qfree();
              v8 = v6[23];
            }
          }
        }
        v6[24] = 0;
        qfree();
      }
      if ( v6[20] )
      {
        v6[21] = 0;
        qfree();
      }
      v12 = v6[16];
      if ( v12 )
      {
        v13 = v6[17];
        if ( v13 )
        {
          for ( j = 0; j != v13; ++j )
          {
            v15 = (_QWORD *)(v12 + 32 * j);
            if ( *v15 )
            {
              v15[1] = 0;
              qfree();
              v12 = v6[16];
            }
          }
        }
        v6[17] = 0;
        qfree();
      }
      sub_2513D0((__int64)(v6 + 2));
      j__qfree();
    }
  }
  v16 = v21;
  *a1 = v18;
  if ( v16 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return a1;
}

