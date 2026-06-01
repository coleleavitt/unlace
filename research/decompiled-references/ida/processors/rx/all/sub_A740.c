_UNKNOWN **__fastcall sub_A740(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // rdx
  bool v3; // zf
  _UNKNOWN **result; // rax

  v1 = netnode_altval();
  v2 = *(_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 130) = v1;
  v3 = (v1 & 2) == 0;
  result = &off_13360;
  if ( v3 )
    result = &off_13620;
  *(_QWORD *)(v2 + 56) = result;
  return result;
}

