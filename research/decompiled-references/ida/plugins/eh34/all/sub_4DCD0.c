__int64 __fastcall sub_4DCD0(__int64 a1, void *a2, int a3, int a4)
{
  int v4; // edx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  void *v9; // r13
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  void *v13; // rbp
  __int64 v14; // rdi
  int v16; // [rsp+0h] [rbp-68h] BYREF
  void *v17; // [rsp+8h] [rbp-60h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 24) + a3;
  v18 = __readfsqword(0x28u);
  v6 = sub_4D3C0((unsigned __int64 *)a1, 18, v4, 1);
  v7 = *(_DWORD *)(v6 + 4);
  if ( v7 == 2 )
  {
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v8 = 0;
    if ( v7 == 3 )
      v8 = **(_QWORD **)(v6 + 16);
  }
  LODWORD(v17) = a4;
  v16 = 1;
  sub_4CCA0((__int64 *)(v8 + 8), (unsigned __int64)&v16);
  if ( v16 == 6 )
  {
    v9 = v17;
    if ( v17 )
    {
      v10 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
      {
        *((_QWORD *)v17 + 1) = 0;
        qfree(v10);
      }
      operator delete(v9, 0x18u);
    }
  }
  v11 = *(_DWORD *)(v6 + 4);
  if ( v11 == 2 )
  {
    v12 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v12 = 0;
    if ( v11 == 3 )
      v12 = **(_QWORD **)(v6 + 16);
  }
  v17 = a2;
  v16 = 5;
  sub_4CCA0((__int64 *)(v12 + 8), (unsigned __int64)&v16);
  if ( v16 == 6 )
  {
    v13 = v17;
    if ( v17 )
    {
      v14 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
      {
        *((_QWORD *)v17 + 1) = 0;
        qfree(v14);
      }
      operator delete(v13, 0x18u);
    }
  }
  return v6;
}

