__int64 __fastcall sub_4DA60(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  int v4; // eax
  int v5; // ebp
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  void *v9; // rbp
  __int64 v10; // rdi
  int v12; // [rsp+0h] [rbp-58h] BYREF
  void *v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 24);
  v5 = a3 + v4;
  v6 = sub_4D3C0((unsigned __int64 *)a1, 5 - (unsigned int)a4, a2 + v4, 1);
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
  LODWORD(v13) = v5;
  v12 = 1;
  sub_4CCA0((__int64 *)(v8 + 8), (unsigned __int64)&v12);
  if ( v12 == 6 )
  {
    v9 = v13;
    if ( v13 )
    {
      v10 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
      {
        *((_QWORD *)v13 + 1) = 0;
        qfree(v10);
      }
      operator delete(v9, 0x18u);
    }
  }
  return v6;
}
