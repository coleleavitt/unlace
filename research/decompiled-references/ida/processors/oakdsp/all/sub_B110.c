unsigned __int64 __fastcall sub_B110(__int64 a1)
{
  __int64 *segm_by_name; // rax
  __int64 v2; // rax
  bool v3; // cc
  const char *v4; // rax
  __int64 v6; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v7; // [rsp+408h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  segm_by_name = (__int64 *)get_segm_by_name();
  if ( segm_by_name )
    v2 = *segm_by_name;
  else
    v2 = -1;
  *(_QWORD *)(a1 + 232) = v2;
  v3 = netnode_supstr() <= 0;
  v4 = nullptr;
  if ( !v3 )
    v4 = (const char *)&v6;
  sub_AE70(a1, v4, 0);
  return v7 - __readfsqword(0x28u);
}

