__int64 __fastcall sub_D3640(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rbx
  _DWORD *v23; // [rsp+0h] [rbp-F8h]
  __int64 v24; // [rsp+8h] [rbp-F0h]
  __int64 v25; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v26; // [rsp+18h] [rbp-E0h]
  char v27[8]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C0h]
  __int64 v29; // [rsp+40h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-A8h]
  __int64 v31; // [rsp+58h] [rbp-A0h]
  _QWORD v32[3]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v33[11]; // [rsp+A0h] [rbp-58h] BYREF

  v7 = a1[187];
  v33[3] = __readfsqword(0x28u);
  sub_CCBF0((__int64)v27, v7, 0xB0u);
  v9 = a1[188];
  v25 = 0;
  v26 = 0;
  sub_D3380(a2, &v25, v9, v32, a4, 0);
  sub_D3380(a2, &v25, a1[188], v33, a4, 1);
  v10 = a4[3];
  if ( v10 )
  {
    v15 = (_QWORD *)a4[2];
    v16 = *(_QWORD *)(*(_QWORD *)(a1[187] + 24LL) + 16LL);
    sub_D2FD0(
      (__int64)a2,
      (__int64)&v25,
      a1[188],
      v16 & (*v15 - a1[180]),
      (v16 & (LODWORD(v15[2 * v10 - 2]) + LODWORD(v15[2 * v10 - 1]) - a1[180])) - (v16 & (*v15 - a1[180])));
  }
  v11 = a2[1];
  if ( a3 && v11 )
  {
    v17 = qalloc_or_throw();
    *(_QWORD *)v17 = 0;
    a4 = (__int64 *)v17;
    *(_OWORD *)(v17 + 8) = 0;
    v18 = v26;
    if ( (_QWORD)v26 )
    {
      v19 = qalloc_or_throw();
      *a4 = v19;
      v20 = 0;
      a4[2] = v18;
      while ( 1 )
      {
        v24 = v20;
        v21 = (_DWORD *)(24 * v20 + v19);
        v22 = v25 + 24 * v20;
        *v21 = 0;
        v23 = v21;
        copy_argloc();
        v20 = v24 + 1;
        v23[4] = *(_DWORD *)(v22 + 16);
        if ( v18 == v24 + 1 )
          break;
        v19 = *a4;
      }
      a4[1] = v18;
    }
    cleanup_argloc();
    if ( a4 )
    {
      *(_DWORD *)a3 = 2;
      *(_QWORD *)(a3 + 8) = a4;
    }
    v11 = a2[1];
  }
  LOBYTE(a4) = v11 != 0;
  if ( v25 )
  {
    v12 = v26;
    if ( (_QWORD)v26 )
    {
      v13 = 0;
      do
      {
        ++v13;
        cleanup_argloc();
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  if ( v33[0] )
  {
    v33[1] = 0;
    qfree();
  }
  if ( v32[0] )
  {
    v32[1] = 0;
    qfree();
  }
  if ( v30 )
  {
    v31 = 0;
    qfree();
  }
  if ( v28 )
  {
    v29 = 0;
    qfree();
  }
  return (unsigned int)a4;
}

