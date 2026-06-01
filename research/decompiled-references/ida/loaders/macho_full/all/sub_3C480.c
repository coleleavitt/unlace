__int64 __fastcall sub_3C480(int a1, void (__fastcall ***a2)(__int64, __int64, __int64 *))
{
  void (__fastcall **v2)(__int64, __int64, __int64 *); // rax
  __int64 v4; // rax
  _QWORD *v6; // r12
  void (__fastcall **v7)(__int64, __int64, __int64 *); // rax
  _QWORD *v8; // rbp
  __int64 v9; // rbx
  void *v10; // rdi
  _QWORD *v11; // rbx
  int *v12; // rbx
  int *v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 i; // r14
  __int64 *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-80h] BYREF
  int *v23; // [rsp+10h] [rbp-78h] BYREF
  __int128 v24; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v2 = *a2;
  v27 = __readfsqword(0x28u);
  v4 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int64 *)))v2[9])(a2);
  if ( ((a1 - 3) & 0xFFFFFFFD) == 0 )
  {
    v6 = (_QWORD *)v4;
    v7 = *a2;
    v24 = 0;
    v23 = nullptr;
    (*v7)((__int64)a2, 3, (__int64 *)&v23);
    (**a2)((__int64)a2, 5, &v22);
    if ( v22 < -1 || v22 > *(int *)(v6[24] + 560LL) )
      v22 = -1;
    v8 = (_QWORD *)v6[25];
    v9 = v8[2];
    while ( v9 )
    {
      sub_16110(*(_QWORD **)(v9 + 24));
      v10 = (void *)v9;
      v9 = *(_QWORD *)(v9 + 16);
      operator delete(v10, 0x28u);
    }
    v8[2] = 0;
    v8[3] = v8 + 1;
    v8[4] = v8 + 1;
    v8[5] = 0;
    v11 = (_QWORD *)v6[26];
    if ( *v11 )
    {
      v11[1] = 0;
      qfree();
      *v11 = 0;
      v11[2] = 0;
    }
    if ( (_QWORD)v24 )
    {
      v12 = v23;
      v13 = &v23[2 * v24];
      if ( v13 != v23 )
      {
        do
        {
          sub_2CE00((_QWORD *)v6[24], v6[25], *v12, v22);
          v12 += 2;
        }
        while ( v13 != v12 );
      }
      v14 = v6[25];
      v15 = *(_QWORD *)(v14 + 24);
      for ( i = v14 + 8; i != v15; v15 = std::_Rb_tree_increment() )
      {
        v17 = (__int64 *)v6[26];
        v18 = *(int *)(v15 + 32);
        v19 = v17[1];
        v20 = *v17;
        if ( v17[2] < (unsigned __int64)(v19 + 1) )
        {
          v21 = qvector_reserve();
          *v17 = v21;
          v20 = v21;
          v19 = v17[1];
        }
        *(_QWORD *)(v20 + 8 * v19) = v18;
        ++v17[1];
      }
    }
    ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int64 *), __int64))(*a2)[7])(a2, 4);
    v26 = 0;
    v25 = 0;
    sub_35470(&v25);
    (*a2)[14]((__int64)a2, 4, &v25);
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree();
    }
  }
  return 1;
}

