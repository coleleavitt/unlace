__int64 __fastcall sub_3E1C0(__int64 a1, const char *a2, __int16 a3, __int64 a4)
{
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r14
  __int64 v10; // rdi
  unsigned int v11; // ebp
  const char *v13; // rax
  const char *v14; // r12
  size_t v15; // rax
  size_t v16; // r14
  void *v17; // rdi
  size_t v18; // r15
  __int64 v19; // rax
  void *src; // [rsp+0h] [rbp-128h]
  __int64 v21; // [rsp+20h] [rbp-108h] BYREF
  void *v22; // [rsp+28h] [rbp-100h]
  __int128 v23; // [rsp+30h] [rbp-F8h]
  __int16 v24; // [rsp+40h] [rbp-E8h]
  __int64 v25; // [rsp+48h] [rbp-E0h]
  __int128 v26; // [rsp+50h] [rbp-D8h]
  __int64 v27; // [rsp+60h] [rbp-C8h]
  __int128 v28; // [rsp+68h] [rbp-C0h]
  __int64 v29; // [rsp+78h] [rbp-B0h]
  __int128 v30; // [rsp+80h] [rbp-A8h]
  __int16 v31; // [rsp+90h] [rbp-98h]
  __int64 v32; // [rsp+98h] [rbp-90h]
  __int128 v33; // [rsp+A0h] [rbp-88h]
  __int64 v34; // [rsp+B0h] [rbp-78h]
  __int128 v35; // [rsp+B8h] [rbp-70h]
  __int64 v36; // [rsp+C8h] [rbp-60h]
  __int64 v37; // [rsp+D0h] [rbp-58h]
  int v38; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+E8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  src = nullptr;
  *(_QWORD *)(a1 + 256) = sub_4C940(0);
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7 + 1;
    v9 = v7;
    src = (void *)qvector_reserve();
    memmove(src, a2, v9);
    *((_BYTE *)src + v9) = 0;
    v21 = 192;
    v22 = nullptr;
    v23 = 0;
    if ( v8 )
    {
      v22 = (void *)qalloc_or_throw();
      *((_QWORD *)&v23 + 1) = v8;
      memcpy(v22, src, v8);
      *(_QWORD *)&v23 = v8;
    }
  }
  else
  {
    v21 = 192;
    v22 = nullptr;
    v23 = 0;
  }
  v24 = a3;
  v10 = *(_QWORD *)(a1 + 256);
  v26 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v37 = 0;
  v38 = -1;
  v28 = 0;
  v30 = 0;
  v33 = 0;
  v35 = 0;
  v11 = sub_4C9B0(v10, &v21);
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( src )
    qfree();
  *(_BYTE *)(a1 + 250) = v11 ^ 1;
  if ( !(_BYTE)v11 )
  {
    v13 = (const char *)sub_4C990(*(_QWORD *)(a1 + 256));
    v14 = v13;
    if ( v13 && (v15 = strlen(v13), (v16 = v15) != 0) )
    {
      v17 = *(void **)a4;
      v18 = v15 + 1;
      if ( *(_QWORD *)(a4 + 16) < v15 + 1 )
      {
        v19 = qvector_reserve();
        *(_QWORD *)a4 = v19;
        v17 = (void *)v19;
      }
      *(_QWORD *)(a4 + 8) = v18;
      memmove(v17, v14, v16);
      *(_BYTE *)(*(_QWORD *)a4 + v16) = 0;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = 0;
    }
    sub_4CA20(a1 + 256, 0xFFFFFFFFLL);
  }
  return v11;
}

