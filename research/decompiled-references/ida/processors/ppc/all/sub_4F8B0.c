unsigned __int64 __fastcall sub_4F8B0(_QWORD *a1, __int64 a2, char a3, double a4, double a5)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v6 = a1[55];
  if ( v6 != a2 )
  {
    sub_4C7C0((__int64)a1, v6, (const char *)a2, a4, a5);
    if ( a2 == *(_QWORD *)(a1[4] + 16LL) )
      a2 = -1;
    a1[55] = a2;
    if ( a3 )
    {
      v9 = ea2node(a2);
      v10 = a1[15];
      v11 = v9 + 1;
      netnode_supset(v10, -6, &v11, 8, 65);
    }
  }
  return v12 - __readfsqword(0x28u);
}

