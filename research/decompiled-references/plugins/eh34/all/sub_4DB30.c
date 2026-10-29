__int64 __fastcall sub_4DB30(unsigned __int64 *a1, int a2, int a3, void *a4, int a5)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdi
  void *v10; // r13
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdi
  void *v14; // rbp
  __int64 v15; // rdi
  int v17; // [rsp+0h] [rbp-68h] BYREF
  void *v18; // [rsp+8h] [rbp-60h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v7 = sub_4CB20(a1, a2, a5);
  v8 = *(_DWORD *)(v7 + 4);
  if ( v8 == 2 )
  {
    v9 = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v9 = 0;
    if ( v8 == 3 )
      v9 = **(_QWORD **)(v7 + 16);
  }
  LODWORD(v18) = a3;
  v17 = 1;
  sub_4CCA0((__int64 *)(v9 + 8), (unsigned __int64)&v17);
  if ( v17 == 6 )
  {
    v10 = v18;
    if ( v18 )
    {
      v11 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
      {
        *((_QWORD *)v18 + 1) = 0;
        qfree(v11);
      }
      operator delete(v10, 0x18u);
    }
  }
  v12 = *(_DWORD *)(v7 + 4);
  if ( v12 == 2 )
  {
    v13 = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v13 = 0;
    if ( v12 == 3 )
      v13 = **(_QWORD **)(v7 + 16);
  }
  v18 = a4;
  v17 = 5;
  sub_4CCA0((__int64 *)(v13 + 8), (unsigned __int64)&v17);
  if ( v17 == 6 )
  {
    v14 = v18;
    if ( v18 )
    {
      v15 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
      {
        *((_QWORD *)v18 + 1) = 0;
        qfree(v15);
      }
      operator delete(v14, 0x18u);
    }
  }
  return v7;
}
