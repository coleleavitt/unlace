__int64 __fastcall sub_137E00(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 *v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r12
  __int64 v9; // rbx
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rbx

  v4 = *(__int64 **)(a1 + 1336);
  if ( !v4 )
    return 0;
  if ( a3 == 9 )
    a3 = *(_DWORD *)(a1 + 312);
  if ( (int)a3 >= (unsigned __int64)v4[1] )
    return 0;
  v6 = *v4;
  v7 = 3LL * a3;
  v8 = (_QWORD *)(v6 + 8 * v7);
  if ( !v8 )
    return 0;
  v9 = sub_137CB0((__int64 *)(v6 + 8 * v7), a2, a4);
  if ( v9 == *v8 + 112LL * v8[1] )
    return 0;
  sub_11CDA0(v9 + 88);
  sub_11CDA0(v9 + 72);
  sub_11CDA0(v9 + 56);
  memmove((void *)v9, (const void *)(v9 + 112), *v8 + 112LL * v8[1] - v9 - 112);
  if ( v8[1]-- == 1 )
  {
    while ( 1 )
    {
      v12 = *(__int64 **)(a1 + 1336);
      v13 = v12[1];
      if ( !v13 )
        break;
      v14 = *v12;
      v15 = *(_QWORD *)(*v12 + 24 * v13 - 16);
      if ( v15 )
        break;
      v16 = v13 - 1;
      v12[1] = v16;
      v17 = (__int64 *)(v14 + 24 * v16);
      v18 = *v17;
      if ( *v17 )
      {
        v19 = v17[1];
        if ( v19 )
        {
          v20 = 0;
          do
          {
            v21 = v18 + v20;
            ++v15;
            v20 += 112;
            sub_11CDA0(v21 + 88);
            sub_11CDA0(v21 + 72);
            sub_11CDA0(v21 + 56);
            v18 = *v17;
          }
          while ( v19 != v15 );
        }
        v17[1] = 0;
        qfree(v18);
      }
    }
  }
  return 1;
}

