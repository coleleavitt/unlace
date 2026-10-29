__int64 __fastcall sub_1D840(unsigned __int8 *a1, __int64 a2)
{
  __int16 v3; // r13
  __int64 v4; // rdi
  unsigned __int8 v5; // al
  __int64 v6; // rdi
  unsigned int v7; // ebp
  const char *v8; // rax
  const char *v9; // rbp
  size_t v10; // rax
  size_t v11; // r13
  void *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rax
  char *src; // [rsp+0h] [rbp-118h]
  size_t n; // [rsp+8h] [rbp-110h]
  __int64 v18; // [rsp+20h] [rbp-F8h] BYREF
  void *v19; // [rsp+28h] [rbp-F0h]
  __int128 v20; // [rsp+30h] [rbp-E8h]
  __int16 v21; // [rsp+40h] [rbp-D8h]
  __int64 v22; // [rsp+48h] [rbp-D0h]
  __int128 v23; // [rsp+50h] [rbp-C8h]
  __int64 v24; // [rsp+60h] [rbp-B8h]
  __int128 v25; // [rsp+68h] [rbp-B0h]
  __int64 v26; // [rsp+78h] [rbp-A0h]
  __int128 v27; // [rsp+80h] [rbp-98h]
  __int16 v28; // [rsp+90h] [rbp-88h]
  __int64 v29; // [rsp+98h] [rbp-80h]
  __int128 v30; // [rsp+A0h] [rbp-78h]
  __int64 v31; // [rsp+B0h] [rbp-68h]
  __int128 v32; // [rsp+B8h] [rbp-60h]
  __int64 v33; // [rsp+C8h] [rbp-50h]
  __int64 v34; // [rsp+D0h] [rbp-48h]
  int v35; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v36; // [rsp+E8h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  if ( byte_7FAF8 )
  {
    if ( *a1 )
    {
      sub_5D660(a1 + 8, 0xFFFFFFFFLL);
      *(_WORD *)a1 = 0;
    }
    *((_QWORD *)a1 + 1) = sub_5D580(0);
    src = nullptr;
    n = 0;
    if ( !(unsigned __int8)qgetenv() )
    {
      src = (char *)qvector_reserve();
      n = 10;
      strcpy(src, "localhost");
    }
    v18 = 192;
    v19 = nullptr;
    v3 = dword_7FAF4;
    v20 = 0;
    if ( n )
    {
      v19 = (void *)qalloc_or_throw();
      *((_QWORD *)&v20 + 1) = n;
      memcpy(v19, src, n);
      *(_QWORD *)&v20 = n;
    }
    v4 = *((_QWORD *)a1 + 1);
    v21 = v3;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v34 = 0;
    v35 = -1;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v5 = sub_5D5F0(v4, &v18);
    v6 = v31;
    *a1 = v5;
    if ( v6 )
    {
      *(_QWORD *)&v32 = 0;
      qfree();
    }
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree();
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
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
    v7 = *a1;
    if ( !(_BYTE)v7 )
    {
      if ( a2 )
      {
        v8 = (const char *)sub_5D5D0(*((_QWORD *)a1 + 1));
        v9 = v8;
        if ( v8 && (v10 = strlen(v8), (v11 = v10) != 0) )
        {
          v13 = *(void **)a2;
          v14 = v10 + 1;
          if ( *(_QWORD *)(a2 + 16) < v10 + 1 )
          {
            v15 = qvector_reserve();
            *(_QWORD *)a2 = v15;
            v13 = (void *)v15;
          }
          *(_QWORD *)(a2 + 8) = v14;
          memmove(v13, v9, v11);
          *(_BYTE *)(*(_QWORD *)a2 + v11) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 8) = 0;
        }
      }
      sub_5D660(a1 + 8, 0xFFFFFFFFLL);
      v7 = *a1;
    }
    if ( src )
      qfree();
  }
  else
  {
    return 1;
  }
  return v7;
}

