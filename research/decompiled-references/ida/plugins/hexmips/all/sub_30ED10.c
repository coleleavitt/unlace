unsigned __int64 __fastcall sub_30ED10(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_30DE00(a1);
  v2 = 8 * *(_DWORD *)(a1 + 4);
  if ( a2 >= v2 )
  {
    if ( !under_debugger )
      sub_37E160(51743);
    BUG();
  }
  if ( v2 - 1 == a2 )
  {
    *(_DWORD *)a1 = 1;
  }
  else
  {
    sub_30DE00(a1);
    v6 = *(unsigned int *)(a1 + 4);
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    v7 = -(1LL << a2);
    if ( (_DWORD)v6 != 8 )
    {
      v6 = (unsigned int)(8 * v6);
      v7 &= ~(-1LL << v6);
    }
    v14 = 1LL << a2;
    v13 = 0;
    sub_311E30(a1 + 8, &v13, v3, v6, v4, v5);
    v13 = v7;
    v14 = 1LL << a2;
    sub_311E30(a1 + 8, &v13, v8, v9, v10, v11);
  }
  return v15 - __readfsqword(0x28u);
}

