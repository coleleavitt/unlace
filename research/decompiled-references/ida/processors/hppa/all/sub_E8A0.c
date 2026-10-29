char **__fastcall sub_E8A0(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx
  bool v3; // zf
  char **result; // rax

  v1 = netnode_altval();
  v2 = *(_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 152) = v1;
  v3 = (v1 & 4) == 0;
  result = off_16220;
  if ( v3 )
    result = off_166C0;
  *(_QWORD *)(v2 + 56) = result;
  return result;
}

