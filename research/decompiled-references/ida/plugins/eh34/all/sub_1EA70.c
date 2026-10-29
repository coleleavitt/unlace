__int64 __fastcall sub_1EA70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  bool v4; // zf
  __int64 result; // rax

  v1 = sub_1DD10();
  v2 = netnode_altval(v1, a1, 353);
  v3 = v2 + a1;
  v4 = v2 == 0;
  result = -1;
  if ( !v4 )
    return v3;
  return result;
}

