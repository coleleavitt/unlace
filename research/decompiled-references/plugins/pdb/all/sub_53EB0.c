__int64 __fastcall sub_53EB0(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 (***a4)())
{
  __int64 v5; // rax
  unsigned int v7; // eax
  void *v8; // rbp
  unsigned int v9; // ebx
  __int64 v10; // rdi
  void *v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = *a2;
  v12[1] = (void *)__readfsqword(0x28u);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(v5 + 272))(a2) != 2 )
  {
    if ( !under_debugger )
      interr(30554);
    BUG();
  }
  sub_79FD0(v12, a1[5], a2[2], a3);
  v7 = sub_53D30(a1, (unsigned __int64 **)v12, a4);
  v8 = v12[0];
  v9 = v7;
  if ( v12[0] )
  {
    v10 = *((_QWORD *)v12[0] + 1);
    if ( v10 )
    {
      *((_QWORD *)v12[0] + 2) = 0;
      qfree(v10);
    }
    operator delete(v8, 0x20u);
  }
  return v9;
}
