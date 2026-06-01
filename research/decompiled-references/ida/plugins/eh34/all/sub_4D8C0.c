__int64 __fastcall sub_4D8C0(__int64 a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdi
  void *v8; // rbp
  __int64 v9; // rdi
  int v11; // [rsp+0h] [rbp-58h] BYREF
  void *v12; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = a3 + v3;
  v5 = sub_4D3C0((unsigned __int64 *)a1, 8, a2 + v3, 0);
  v6 = *(_DWORD *)(v5 + 4);
  if ( v6 == 2 )
  {
    v7 = *(_QWORD *)(v5 + 16);
  }
  else
  {
    v7 = 0;
    if ( v6 == 3 )
      v7 = **(_QWORD **)(v5 + 16);
  }
  LODWORD(v12) = v4;
  v11 = 1;
  sub_4CCA0((__int64 *)(v7 + 8), (unsigned __int64)&v11);
  if ( v11 == 6 )
  {
    v8 = v12;
    if ( v12 )
    {
      v9 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 )
      {
        *((_QWORD *)v12 + 1) = 0;
        qfree(v9);
      }
      operator delete(v8, 0x18u);
    }
  }
  return v5;
}

