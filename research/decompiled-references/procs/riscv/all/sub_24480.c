__int64 __fastcall sub_24480(__int64 a1, __int64 a2, unsigned __int8 a3, double a4, double a5, __m128 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  int *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r13
  _BOOL8 v14; // rdi
  unsigned int v15; // eax
  _QWORD **v16; // rbx
  unsigned int v17; // ebp
  void *v18; // rdi
  __int64 v20[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-A8h]
  __int128 v22; // [rsp+18h] [rbp-A0h]
  int v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+30h] [rbp-88h]
  __int128 v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+48h] [rbp-70h] BYREF
  int v27; // [rsp+50h] [rbp-68h] BYREF
  void *v28; // [rsp+58h] [rbp-60h]
  int *v29; // [rsp+60h] [rbp-58h]
  int *v30; // [rsp+68h] [rbp-50h]
  __int64 v31; // [rsp+70h] [rbp-48h]
  __int64 v32; // [rsp+78h] [rbp-40h]
  __int64 v33; // [rsp+80h] [rbp-38h]
  unsigned __int64 v34; // [rsp+88h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v20[0] = a1;
  v20[1] = a2;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v27 = 0;
  v28 = nullptr;
  v29 = &v27;
  v30 = &v27;
  v31 = 0;
  v32 = 0;
  v33 = -1;
  v22 = 0;
  v25 = 0;
  v7 = (_QWORD *)operator new(0x30u);
  v7[4] = 2;
  v7[5] = 0;
  v8 = sub_22430(&v26, (__int64)&v27, 2);
  v13 = (_QWORD *)v8;
  if ( v9 )
  {
    v14 = v8 || &v27 == v9 || v9[8] > 2;
    v13 = v7;
    std::_Rb_tree_insert_and_rebalance(v14, v7, v9, &v27);
    ++v31;
  }
  else if ( v7 )
  {
    operator delete(v7, 0x30u);
  }
  v13[5] = 0;
  v15 = sub_23E80(v20, a3, 0.0, a5, a6, (__int64)v9, v10, v11, v12);
  v16 = (_QWORD **)v28;
  v17 = v15;
  if ( v28 )
  {
    do
    {
      sub_22780(v16[3]);
      v18 = v16;
      v16 = (_QWORD **)v16[2];
      operator delete(v18, 0x30u);
    }
    while ( v16 );
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v17;
}
