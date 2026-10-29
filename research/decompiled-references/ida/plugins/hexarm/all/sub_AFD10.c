bool __fastcall sub_AFD10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v9; // rdx
  bool result; // al
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rbx
  void *v14; // rax
  const void *v15; // rsi
  __int64 v16[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v17; // [rsp+20h] [rbp-58h]
  __int128 v18; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v7 = *(_QWORD *)(a4 + 8);
  v19 = __readfsqword(0x28u);
  v9 = sub_A94E0(a1, a2, v7, a5, 1u);
  result = 0;
  if ( !v9 )
  {
    v11 = *(_QWORD *)(a4 + 8);
    if ( a5 == v11 )
    {
      return 1;
    }
    else
    {
      sub_63A00(v16, a3);
      v12 = *(_QWORD *)(a3 + 24);
      v17 = nullptr;
      v18 = 0;
      if ( v12 )
      {
        v14 = (void *)qalloc_or_throw();
        v15 = *(const void **)(a3 + 16);
        v17 = v14;
        *((_QWORD *)&v18 + 1) = v12;
        memcpy(v14, v15, 16 * v12);
        *(_QWORD *)&v18 = v12;
      }
      v13 = sub_A97D0(a1, v16, v11, a5, 1u);
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree();
      }
      qfree();
      return v13 == 0;
    }
  }
  return result;
}

