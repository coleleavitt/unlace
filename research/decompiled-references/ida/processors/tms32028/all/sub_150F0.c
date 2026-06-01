__int64 __fastcall sub_150F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v6; // rbp

  v3 = sub_11800(a2, *(_QWORD *)(a3 + 8));
  v4 = netnode_altval();
  if ( v4 == -1 )
    return v3;
  v6 = v4;
  if ( ((!sub_12250() ? 4194240LL : 4194176LL) & (v4 ^ v3)) != 0 )
    return v3;
  else
    return v6;
}

