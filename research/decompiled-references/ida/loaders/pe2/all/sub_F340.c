unsigned __int64 __fastcall sub_F340(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int16 v11; // dx
  unsigned __int64 v12; // [rsp+C8h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 156);
  v12 = __readfsqword(0x28u);
  if ( !*(_WORD *)(a1 + 78) && (unsigned int)v4 < *(_DWORD *)(a1 + 152) )
    v4 = *(unsigned int *)(a1 + 152);
  v6 = qlsize();
  if ( v6 > v4 )
    v6 = v4;
  v7 = v6;
  v8 = (_QWORD *)getseg();
  v9 = (__int64)v8;
  if ( v8 && v8[1] - *v8 >= v7 )
    goto LABEL_12;
  file2base();
  allocate_selector();
  get_next_seg();
  add_segm_ex();
  if ( *(_DWORD *)(a1 + 72) != 23126 )
    set_name();
  v9 = getseg();
  if ( v9 )
  {
LABEL_12:
    if ( a3 != ((*(_WORD *)(v9 + 44) & 4) == 0) )
    {
      v11 = *(_WORD *)(v9 + 44) & 0xFFFB;
      if ( !a3 )
        v11 = *(_WORD *)(v9 + 44) | 4;
      *(_WORD *)(v9 + 44) = v11;
      update_segm();
    }
  }
  *(_BYTE *)(a1 + 984) = 1;
  return v12 - __readfsqword(0x28u);
}

