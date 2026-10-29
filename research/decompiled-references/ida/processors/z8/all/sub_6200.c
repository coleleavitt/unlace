unsigned __int64 __fastcall sub_6200(__int64 a1)
{
  __int64 segm_by_sel; // rax
  __int64 *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( ((unsigned int)atos() || (unsigned int)atos())
    && (segm_by_sel = get_segm_by_sel(), (v2 = (__int64 *)segm_by_sel) != nullptr) )
  {
    if ( *(_BYTE *)(segm_by_sel + 184) != 12 )
    {
      *(_BYTE *)(segm_by_sel + 184) = 12;
      update_segm();
    }
    v3 = *v2;
  }
  else
  {
    v3 = -1;
  }
  *(_QWORD *)(a1 + 224) = v3;
  return v5 - __readfsqword(0x28u);
}

