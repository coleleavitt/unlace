unsigned __int64 __fastcall sub_1D250(__int64 a1, __int64 a2, __int64 a3, const char *a4, __int64 a5)
{
  size_t v8; // r15
  size_t v9; // rbp
  int v10; // eax
  void *v12; // rax
  const void *v13; // rsi
  void *src; // [rsp+10h] [rbp-C8h]
  __int64 v15; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-A0h]
  void *v17; // [rsp+40h] [rbp-98h]
  __int128 v18; // [rsp+48h] [rbp-90h]
  void *v19; // [rsp+58h] [rbp-80h]
  __int128 v20; // [rsp+60h] [rbp-78h]
  __int64 v21; // [rsp+70h] [rbp-68h]
  __int64 v22; // [rsp+78h] [rbp-60h]
  __int128 v23; // [rsp+80h] [rbp-58h]
  int v24; // [rsp+90h] [rbp-48h]
  unsigned __int64 v25; // [rsp+98h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) != a2 )
  {
    src = nullptr;
    if ( a4 )
    {
      v8 = strlen(a4);
      src = (void *)qvector_reserve();
      memmove(src, a4, v8);
      *((_BYTE *)src + v8) = 0;
      v15 = a2;
      v16 = a3;
      v17 = nullptr;
      v18 = 0;
      if ( v8 != -1 )
      {
        v17 = (void *)qalloc_or_throw();
        *((_QWORD *)&v18 + 1) = v8 + 1;
        memcpy(v17, src, v8 + 1);
        *(_QWORD *)&v18 = v8 + 1;
      }
    }
    else
    {
      v15 = a2;
      v16 = a3;
      v17 = nullptr;
      v18 = 0;
    }
    v9 = *(_QWORD *)(a5 + 8);
    v19 = nullptr;
    v20 = 0;
    if ( v9 )
    {
      v12 = (void *)qalloc_or_throw();
      v13 = *(const void **)a5;
      v19 = v12;
      *((_QWORD *)&v20 + 1) = v9;
      memcpy(v12, v13, v9);
      *(_QWORD *)&v20 = v9;
    }
    v21 = 0;
    v22 = 0;
    v24 = 0;
    v23 = 0;
    if ( src )
      qfree();
    v10 = *(_DWORD *)(a1 + 16);
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      sub_4EA20(*(_QWORD *)(a1 + 8), &v15);
    }
    else
    {
      sub_4E160(*(_QWORD *)(a1 + 8), &v15);
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree();
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
  return v25 - __readfsqword(0x28u);
}

