unsigned __int64 __fastcall add_xrefs_all_ah_t__::vfunc_6(
        __int64 a1,
        __int64 a2,
        QT::QGraphicsScene *a3,
        int **a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  int *v10; // rdx
  int *v11; // rax
  int *v12; // rdx
  int *v13; // rbx
  int *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+0h] [rbp-78h] BYREF
  __int64 v24; // [rsp+8h] [rbp-70h]
  QT::QGraphicsScene *v25; // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v8 = *((_QWORD *)a3 + 8);
  v28 = __readfsqword(0x28u);
  v9 = 0;
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 48);
  v10 = a4[2];
  v23 = v9;
  v24 = a2;
  v25 = a3;
  v26 = 0;
  v27 = 0;
  if ( v10 )
    v26 = qvector_reserve(&v26, 0, v10, 8);
  v11 = *a4;
  if ( !*a4 || *v11 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v11 = *a4;
  }
  v12 = a4[1];
  v13 = v12;
  if ( !v11 || *v11 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v12 = a4[1];
  }
  v14 = &v12[2 * (_QWORD)a4[2]];
  if ( v13 != v14 )
  {
    v15 = v27;
    do
    {
      v16 = v26;
      v17 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
      if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v15 + 1) )
      {
        v26 = qvector_reserve(&v26, v26, v15 + 1, 8);
        v15 = v27;
        v16 = v26;
      }
      *(_QWORD *)(v16 + 8 * v15) = v17;
      v13 += 2;
      v15 = v27 + 1;
      *(_QWORD *)&v27 = v27 + 1;
    }
    while ( v14 != v13 );
  }
  sub_24830(a3, (__int64)&v26, *(_DWORD *)(a1 + 12));
  sub_1FB30((__int64)a3, 1);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, (_BYTE *)&dword_0 + 1, v18, v19, v20, v21, v23, v24, v25);
  }
  sub_2FB30(&v23);
  return v28 - __readfsqword(0x28u);
}

