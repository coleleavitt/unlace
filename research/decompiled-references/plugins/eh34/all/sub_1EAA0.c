__int64 __fastcall sub_1EAA0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 result; // rax

  v1 = sub_1DD10();
  v2 = netnode_altval(v1, a1, 354);
  v3 = v2 - 1;
  v4 = a1 - v2;
  result = -1;
  if ( v3 < 0xFFFFFFFFFFFFFFFELL )
    return v4;
  return result;
}
