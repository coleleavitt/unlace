unsigned __int64 __fastcall sub_11E5D0(__int64 a1, __int64 *a2, _QWORD *a3, double a4)
{
  int v6; // eax
  int v7; // edx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax
  const void *v20; // rsi
  __int64 *v21; // rax
  __int64 *v22; // [rsp+0h] [rbp-78h] BYREF
  __int128 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  sub_64280(a2, (__int64 *)(a1 + 136), a4);
  v6 = *(_DWORD *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 16) - v6;
  if ( v7 )
  {
    v9 = v7;
    v10 = a3[187];
    v11 = a3[180] + v6;
    v22 = nullptr;
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL) & v11;
    v23 = 0;
    if ( v9 + v12 - 1 >= v12 )
    {
      v22 = (__int64 *)qvector_reserve((__int64)&v22, 0, 1, 16);
      v21 = &v22[2 * v23];
      *v21 = v12;
      v21[1] = v9;
      *(_QWORD *)&v23 = v23 + 1;
    }
    v24 = sub_32FA90(a1, (__int64)a3);
    *(_QWORD *)&v25 = v13;
    sub_317BD0((__int64 *)&v22, (__m128i *)&v24);
    v16 = a3[24];
    v24 = 0;
    v25 = 0;
    if ( v16 )
    {
      v19 = (void *)qalloc_or_throw(16 * v16, (__int64)&v24, v14, v15);
      v20 = (const void *)a3[23];
      v24 = (__int64)v19;
      *((_QWORD *)&v25 + 1) = v16;
      memcpy(v19, v20, 16 * v16);
      *(_QWORD *)&v25 = v16;
    }
    sub_317C60(&v24, (__int64)(a3 + 26));
    sub_317C60((__int64 *)&v22, (__int64)&v24);
    sub_316CB0(a2 + 2, &v22, v17, v18);
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree((__int64)v22);
    }
  }
  return v26 - __readfsqword(0x28u);
}

