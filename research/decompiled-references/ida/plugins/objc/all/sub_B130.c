__int64 __fastcall sub_B130(__int64 a1, int a2)
{
  __int64 v3; // r12
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d

  if ( *(_QWORD *)(a1 + 1808) )
    return 1;
  v3 = a1 + 112;
  if ( (unsigned __int8)sub_13360(a1 + 112) )
  {
    sub_EC40((unsigned int)"Identified Objective-C runtime version >= 2.0\n", a2, v4, v5, v6, v7);
  }
  else
  {
    v3 = a1 + 872;
    if ( !(unsigned __int8)sub_13360(a1 + 872) )
    {
      sub_EC40((unsigned int)"No objc info found\n", a2, v8, v9, v10, v11);
      return 0;
    }
    sub_EC40((unsigned int)"Identified legacy Objective-C runtime\n", a2, v8, v9, v10, v11);
  }
  netnode_supset();
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 128LL))(v3, -1) )
  {
    *(_QWORD *)(a1 + 1808) = v3;
    return 1;
  }
  return 0;
}
