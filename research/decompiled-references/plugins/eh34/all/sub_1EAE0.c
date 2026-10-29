__int64 __fastcall sub_1EAE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_1DD10();
  result = netnode_charval(v1, a1, 355);
  if ( !(_BYTE)result )
    return 0xFFFFFFFFLL;
  return result;
}
