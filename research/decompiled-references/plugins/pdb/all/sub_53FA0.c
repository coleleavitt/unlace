__int64 __fastcall sub_53FA0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 (***a5)())
{
  __int64 v7; // rax
  __int64 v9; // r15
  char *v10; // rbx
  char *v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 *v14; // rbx
  unsigned int v15; // ebp
  unsigned __int64 v16; // rdi
  void *v18; // rax
  void *v19; // rsi
  unsigned __int64 *v20; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v7 = a1[5];
  v23 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(v7 + 144);
  sub_75D50(v9);
  v22 = 0;
  src = nullptr;
  sub_75920(v9, &src, a2, a2 + a3);
  if ( (*(_DWORD *)debug & 0x40000) != 0 )
  {
    sub_7AC20(a1[5], a4);
    sub_29350();
    v10 = (char *)src;
    v11 = (char *)src + 4 * v22;
    if ( v11 != src )
    {
      do
      {
        sub_29350();
        v10 += 4;
      }
      while ( v11 != v10 );
    }
    sub_29350();
  }
  v12 = operator new(0x20u);
  v13 = v22;
  v14 = (unsigned __int64 *)v12;
  *(_QWORD *)v12 = 0;
  *(_QWORD *)(v12 + 8) = 0;
  *(_OWORD *)(v12 + 16) = 0;
  if ( v13 )
  {
    v18 = (void *)qalloc_or_throw(4 * v13);
    v14[1] = (unsigned __int64)v18;
    v19 = src;
    v14[3] = v13;
    memcpy(v18, v19, 4 * v13);
    v14[2] = v13;
  }
  v20 = v14;
  v15 = sub_53D30(a1, &v20, a5);
  if ( v14 )
  {
    v16 = v14[1];
    if ( v16 )
    {
      v14[2] = 0;
      qfree(v16);
    }
    operator delete(v14, 0x20u);
  }
  if ( src )
  {
    *(_QWORD *)&v22 = 0;
    qfree(src);
  }
  return v15;
}
