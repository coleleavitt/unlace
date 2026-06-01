__int64 __fastcall sub_4F5D0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rdx
  unsigned __int8 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v6 = a2;
  v7 = *(unsigned int *)(a1 + 288);
  v8 = *(_QWORD *)(a1 + 424);
  v18 = __readfsqword(0x28u);
  if ( !(_DWORD)v7 || (unsigned int)v7 > 9 )
  {
    v11 = 0;
    if ( a2 == v8 )
      return v18 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  v10 = 790;
  v11 = _bittest64(&v10, v7);
  if ( !v11 )
  {
    if ( a2 == v8 )
      return v18 - __readfsqword(0x28u);
    if ( v8 == -1 )
    {
      if ( (_DWORD)v7 != 3 )
        goto LABEL_8;
    }
    else if ( (_DWORD)v7 != 3 )
    {
      goto LABEL_8;
    }
    if ( (*(_BYTE *)(a1 + 461) & 4) != 0 )
    {
LABEL_7:
      invalidate_regfinder_cache(-1, -1, 0);
      v12 = getinf(20);
      v13 = getinf(19);
      auto_mark_range(v13, v12, 40);
    }
LABEL_8:
    if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) )
    {
      *(_QWORD *)(a1 + 424) = -1;
      if ( !a3 )
        return v18 - __readfsqword(0x28u);
      v6 = -1;
    }
    else
    {
      *(_QWORD *)(a1 + 424) = a2;
      if ( !a3 )
      {
        if ( a2 == -1 )
          return v18 - __readfsqword(0x28u);
        goto LABEL_11;
      }
    }
    v15 = ea2node(v6);
    v16 = *(_QWORD *)(a1 + 120);
    v17 = v15 + 1;
    netnode_supset(v16, -1, &v17, 8, 65);
    v6 = *(_QWORD *)(a1 + 424);
    if ( v6 == -1 )
      return v18 - __readfsqword(0x28u);
LABEL_11:
    if ( v11 )
      goto LABEL_12;
    return v18 - __readfsqword(0x28u);
  }
  if ( a2 != v8 )
  {
    if ( v8 != -1 )
      set_name(v8, "", 0);
    goto LABEL_7;
  }
  if ( a2 == -1 )
    return v18 - __readfsqword(0x28u);
LABEL_12:
  if ( a4 )
    return set_name(v6 - a4, ".TOC.start", 257);
  else
    return set_name(v6, ".TOC.", 257);
}

