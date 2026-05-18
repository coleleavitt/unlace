__int64 __fastcall sub_D65F0(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // eax
  void *v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = (void *)__readfsqword(0x28u);
  v2 = *(unsigned __int8 *)(a1 + 91) - 1;
  if ( *(_BYTE *)(a1 + 91) )
  {
    v3 = a2;
    v4 = 104LL * v2;
    v5 = a1 + v4 + 96;
    v6 = a1 + v4 - 8 - 104LL * (unsigned int)v2;
    do
    {
      v7 = *(_QWORD *)v5;
      v8 = 0;
      if ( *(_QWORD *)v5 )
      {
        v10[0] = &dword_0 + 1;
        sub_D63C0(v7, v10);
        v8 = (unsigned int)v10[0];
        *(_DWORD *)(v5 + 8) = 0;
        *(_QWORD *)v5 = 0;
      }
      if ( !v3 )
        v3 = v8;
      v5 -= 104;
    }
    while ( v5 != v6 );
  }
  else
  {
    return a2;
  }
  return v3;
}
