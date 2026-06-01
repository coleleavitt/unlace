__int64 __fastcall sub_E960(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax
  const char *v7; // rax
  __int64 v8; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = sub_BB20();
  v3 = sub_A320(v2, a2);
  v5 = v4;
  v6 = sub_BB20();
  v7 = (const char *)sub_A3E0(v6, v3, v5);
  sub_67C0((__int64 *)a1, (__int64)"%s(%d)", v7, a2);
  v8 = sub_BB20();
  sub_A410(v8, v3, v5);
  return a1;
}

