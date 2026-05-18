__int64 __fastcall sub_B86F0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  const char *v5; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const void *v9; // rbx
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-30h]

  v4 = *(_WORD *)(a3 + 24);
  if ( v4 == 4 || v4 == 2 && (v12 = a3, v7 = sub_17E3E0(a2), a3 = v12, *(_QWORD *)(v7 + 8) > 1u) )
  {
    if ( (__int64 *)a3 != a1 )
    {
      v8 = *(_QWORD *)(a3 + 8);
      if ( v8 > 1 )
      {
        v9 = *(const void **)a3;
        v10 = (void *)*a1;
        if ( a1[2] < v8 )
        {
          v11 = sub_1987B0(a1, *a1, *(_QWORD *)(a3 + 8), 1);
          *a1 = v11;
          v10 = (void *)v11;
        }
        a1[1] = v8;
        memmove(v10, v9, v8 - 1);
        *(_BYTE *)(*a1 + v8 - 1) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    return 1;
  }
  else
  {
    v5 = sub_2C700(1348);
    sub_B81F0(a2, (__int64)"%s", v5);
    return 0;
  }
}
