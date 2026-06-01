bool __fastcall sub_B02D0(__int64 a1, unsigned __int64 **a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v8; // rdx
  __int64 v10; // rdx
  bool result; // al
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rbx
  void *v16; // rax
  const void *v17; // rsi
  unsigned __int64 *v18[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v8 = *(_QWORD *)(a4 + 8);
  v21 = __readfsqword(0x28u);
  v10 = sub_A9AA0(a1, a2, v8, a5, 1u);
  result = 0;
  if ( !v10 )
  {
    v12 = *(_QWORD *)(a4 + 8);
    if ( a5 == v12 )
    {
      return 1;
    }
    else
    {
      sub_64000((__int64 *)v18, a3, a6);
      v14 = *(_QWORD *)(a3 + 24);
      v19 = 0;
      v20 = 0;
      if ( v14 )
      {
        v16 = (void *)qalloc_or_throw(16 * v14, a3, 16 * v14, v13);
        v17 = *(const void **)(a3 + 16);
        v19 = (__int64)v16;
        *((_QWORD *)&v20 + 1) = v14;
        memcpy(v16, v17, 16 * v14);
        *(_QWORD *)&v20 = v14;
      }
      v15 = sub_A9D90(a1, v18, v12, a5, 1u);
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree(v19);
      }
      qfree((__int64)v18[0]);
      return v15 == 0;
    }
  }
  return result;
}

