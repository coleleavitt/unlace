unsigned __int64 __fastcall sub_3AEC0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, int a5)
{
  size_t v5; // r15
  char *v6; // rbx
  __int64 v7; // rax
  size_t v8; // r12
  __int64 *v9; // rax
  __int64 v10; // r14
  char *v13; // rax
  signed __int64 v14; // rax
  char *v15; // r14
  size_t v16; // r15
  size_t v17; // rax
  const void **v18; // [rsp+8h] [rbp-60h]
  size_t v19; // [rsp+8h] [rbp-60h]
  char *v20; // [rsp+10h] [rbp-58h]
  size_t v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v5 = 0;
  v6 = nullptr;
  v22 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 600LL);
  v8 = *(_QWORD *)(v7 + 24LL * a5 + 8);
  if ( v8 )
  {
    v18 = (const void **)(v7 + 24LL * a5);
    v6 = (char *)qalloc_or_throw();
    memcpy(v6, *v18, v8);
    if ( *(int *)(a4 + 4) >= 0 || (v13 = strrchr(v6, 47)) == nullptr || (v14 = v13 - v6, v14 == -1) )
    {
      v5 = v8;
    }
    else
    {
      v15 = &v6[v14 + 1];
      if ( &v6[v14] == (char *)-1LL )
      {
        v17 = 0;
      }
      else
      {
        v16 = strlen(&v6[v14 + 1]);
        v20 = (char *)qvector_reserve();
        v21 = v16 + 1;
        memmove(v20, v15, v16);
        v20[v16] = 0;
        v15 = v20;
        v5 = 0;
        v17 = v21;
      }
      if ( v6 )
      {
        v19 = v17;
        qfree();
        v17 = v19;
      }
      v8 = v17;
      v6 = v15;
    }
  }
  v9 = *a2;
  v9[1] = v8;
  v10 = *v9;
  v9[2] = v5;
  *v9 = (__int64)v6;
  sub_35470(*a2 + 3);
  if ( v10 )
    qfree();
  return v22 - __readfsqword(0x28u);
}

