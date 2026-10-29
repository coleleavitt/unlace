unsigned __int64 __fastcall sub_AD10(__int64 a1, char a2)
{
  int v2; // eax
  char v3; // r12
  int v4; // eax
  __int64 name_ea; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // dl
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *segm_by_name; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v2 = getinf();
  v3 = *(_BYTE *)(a1 + 556);
  *(_DWORD *)(a1 + 552) = v2;
  *(_BYTE *)(a1 + 557) = v2 == 25;
  v4 = getinf();
  LOBYTE(v4) = v4 == 256 || v4 == 176;
  *(_BYTE *)(a1 + 556) = v4;
  if ( (_BYTE)v4 )
  {
    if ( (unsigned __int8)getinf_flag() )
    {
      v7 = 16;
      v8 = 805307392;
      v9 = 8;
    }
    else
    {
      v7 = 8;
      v8 = 536871936;
      v9 = 4;
    }
    *(_QWORD *)(a1 + 544) = v8;
    *(_BYTE *)(a1 + 565) = v9;
    *(_QWORD *)(a1 + 360) = v7;
    if ( v3 )
    {
LABEL_8:
      if ( *(_DWORD *)(a1 + 528) == -1 )
        *(_DWORD *)(a1 + 528) = register_custom_refinfo();
      if ( *(_DWORD *)(a1 + 532) == -1 )
        *(_DWORD *)(a1 + 532) = register_custom_refinfo();
      if ( a2 )
        goto LABEL_3;
      setinf_flag();
LABEL_14:
      name_ea = get_name_ea();
      goto LABEL_4;
    }
    v10 = *(_DWORD *)(a1 + 552);
    if ( v10 == 18 )
    {
      segm_by_name = (_QWORD *)get_segm_by_name();
      if ( *(_DWORD *)(a1 + 552) != 25 )
        goto LABEL_22;
    }
    else if ( v10 != 25 )
    {
      if ( v10 == 11 )
      {
        v11 = (_QWORD *)get_segm_by_name();
        if ( v11 || (v11 = (_QWORD *)get_segm_by_name()) != nullptr )
          *(_QWORD *)(a1 + 392) = sub_AB20(*v11, v11[1]);
      }
      goto LABEL_8;
    }
    segm_by_name = (_QWORD *)get_segm_by_name();
LABEL_22:
    if ( segm_by_name )
      *(_QWORD *)(a1 + 392) = *segm_by_name;
    goto LABEL_8;
  }
  if ( !a2 )
    goto LABEL_14;
LABEL_3:
  name_ea = -1;
LABEL_4:
  *(_QWORD *)(a1 + 368) = name_ea;
  *(_QWORD *)(a1 + 376) = -1;
  *(_QWORD *)(a1 + 384) = 0;
  netnode_check();
  *(_DWORD *)(a1 + 536) = netnode_altval();
  return v13 - __readfsqword(0x28u);
}
