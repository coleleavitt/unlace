__int64 __fastcall sub_D7B00(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  _DWORD *v26; // rax
  __int64 v27; // rbx
  _DWORD *v28; // [rsp+0h] [rbp-F8h]
  __int64 v29; // [rsp+8h] [rbp-F0h]
  __int64 v30; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+18h] [rbp-E0h]
  char v32[8]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C0h]
  __int64 v34; // [rsp+40h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-A8h]
  __int64 v36; // [rsp+58h] [rbp-A0h]
  __int64 v37[3]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v38[11]; // [rsp+A0h] [rbp-58h] BYREF

  v7 = a1[187];
  v38[3] = __readfsqword(0x28u);
  sub_D10B0((__int64)v32, v7, 0xB0u);
  v9 = a1[188];
  v30 = 0;
  v31 = 0;
  sub_D7840(a2, &v30, v9, v37, a4, 0, 0.0);
  sub_D7840(a2, &v30, a1[188], v38, a4, 1, 0.0);
  v12 = a4[3];
  if ( v12 )
  {
    v18 = (_QWORD *)a4[2];
    v19 = *(_QWORD *)(*(_QWORD *)(a1[187] + 24LL) + 16LL);
    sub_D7490(
      (__int64)a2,
      (__int64)&v30,
      a1[188],
      v19 & (*v18 - a1[180]),
      (v19 & (LODWORD(v18[2 * v12 - 2]) + LODWORD(v18[2 * v12 - 1]) - a1[180])) - (v19 & (*(_DWORD *)v18 - a1[180])),
      0.0);
  }
  v13 = a2[1];
  if ( a3 && v13 )
  {
    v20 = qalloc_or_throw(24, (__int64)&v30, v10, v11);
    *(_QWORD *)v20 = 0;
    a4 = (__int64 *)v20;
    *(_OWORD *)(v20 + 8) = 0;
    v23 = v31;
    if ( (_QWORD)v31 )
    {
      v24 = qalloc_or_throw(24 * v31, (__int64)&v30, v21, v22);
      *a4 = v24;
      v25 = 0;
      a4[2] = v23;
      while ( 1 )
      {
        v29 = v25;
        v26 = (_DWORD *)(24 * v25 + v24);
        v27 = v30 + 24 * v25;
        *v26 = 0;
        v28 = v26;
        copy_argloc();
        v25 = v29 + 1;
        v28[4] = *(_DWORD *)(v27 + 16);
        if ( v23 == v29 + 1 )
          break;
        v24 = *a4;
      }
      a4[1] = v23;
    }
    cleanup_argloc();
    if ( a4 )
    {
      *(_DWORD *)a3 = 2;
      *(_QWORD *)(a3 + 8) = a4;
    }
    v13 = a2[1];
  }
  v14 = v30;
  LOBYTE(a4) = v13 != 0;
  if ( v30 )
  {
    v15 = v31;
    if ( (_QWORD)v31 )
    {
      v16 = 0;
      do
      {
        ++v16;
        cleanup_argloc();
        v14 = v30;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v14);
  }
  if ( v38[0] )
  {
    v38[1] = 0;
    qfree(v38[0]);
  }
  if ( v37[0] )
  {
    v37[1] = 0;
    qfree(v37[0]);
  }
  if ( v35 )
  {
    v36 = 0;
    qfree(v35);
  }
  if ( v33 )
  {
    v34 = 0;
    qfree(v33);
  }
  return (unsigned int)a4;
}

