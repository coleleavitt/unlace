signed __int64 __fastcall sub_8790(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  bool v3; // zf
  _UNKNOWN **v4; // rax
  signed __int64 result; // rax

  v1 = netnode_altval();
  v2 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 232) = v1;
  v3 = (v1 & 2) == 0;
  v4 = &off_F9A0;
  if ( v3 )
    v4 = &off_FAE0;
  *(_QWORD *)(v2 + 56) = v4;
  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_7880((__int64 *)(a1 + 128), 0);
  return result;
}

