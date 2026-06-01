__int64 __fastcall sub_54180(_QWORD *a1, unsigned int a2, __int64 (***a3)())
{
  __int64 v4; // r13
  unsigned int v5; // eax
  void *v6; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rdi
  void *v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = (void *)__readfsqword(0x28u);
  if ( (*(_DWORD *)debug & 0x40000) != 0 )
    sub_29350();
  v4 = *(_QWORD *)(a1[5] + 144LL);
  sub_75D50(v4);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(v4 + 560) )
  {
    return (unsigned int)-2147467259;
  }
  else
  {
    sub_75750(v10, v4, a2);
    v5 = sub_53D30(a1, (unsigned __int64 **)v10, a3);
    v6 = v10[0];
    v7 = v5;
    if ( v10[0] )
    {
      v8 = *((_QWORD *)v10[0] + 1);
      if ( v8 )
      {
        *((_QWORD *)v10[0] + 2) = 0;
        qfree(v8);
      }
      operator delete(v6, 0x20u);
    }
  }
  return v7;
}

