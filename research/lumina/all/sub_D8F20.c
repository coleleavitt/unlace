__int64 __fastcall sub_D8F20(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  unsigned int v16; // r14d
  char v18[4]; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  __int128 v21; // [rsp+30h] [rbp-68h]
  __int128 v22; // [rsp+40h] [rbp-58h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 12LL);
  v19 = 0;
  v21 = 0;
  v22 = 0;
  if ( sub_D1E10(v6, a2) )
  {
    LODWORD(v21) = v6;
    *((_QWORD *)&v22 + 1) = v5;
    v7 = v3 - v3 % v6;
    v8 = v3 % v6;
    DWORD1(v21) = v8;
    DWORD2(v21) = v8;
    *(_QWORD *)&v22 = v7;
  }
  else
  {
    LODWORD(v19) = 7;
    v7 = v22;
    v8 = DWORD2(v21);
  }
  while ( 1 )
  {
    v9 = v8;
    v10 = *(_QWORD *)(v4 + 24) + 80LL * *(int *)(*(_QWORD *)(v4 + 16) + 4LL);
    v11 = *(_DWORD *)(v10 + 20);
    if ( !*(_QWORD *)(v10 + 24) )
      return (unsigned int)sub_C9F50((unsigned int *)&v19, a1 + 64);
    v12 = v11 + v7;
    v13 = (unsigned __int64)v11 >> 7;
    v14 = v12 + v9;
    if ( v13 )
    {
      v15 = 1;
      do
      {
        v13 >>= 7;
        ++v15;
      }
      while ( v13 );
      if ( v14 + v15 > v3 + *(int *)(a1 + 24) )
        return (unsigned int)sub_C9F50((unsigned int *)&v19, a1 + 64);
    }
    else if ( v14 + 1 > v3 + *(int *)(a1 + 24) )
    {
      return (unsigned int)sub_C9F50((unsigned int *)&v19, a1 + 64);
    }
    sub_CB710((__int64)&v19, v11);
    sub_C6FC0((__int64)&v19, *(_QWORD *)(v10 + 40), v11);
    v16 = sub_D9290(*(_QWORD *)(a1 + 8), v18);
    if ( v16 )
      break;
    v7 = v22;
    v8 = DWORD2(v21);
  }
  sub_C9F50((unsigned int *)&v19, a1 + 64);
  return v16;
}
