__int64 __fastcall sub_79430(unsigned int *a1, _DWORD *a2, __int64 a3)
{
  char v3; // r13
  __int64 v5; // rdx
  __int64 result; // rax
  _DWORD *v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int tinfo_size; // r14d
  int v14; // eax
  char tinfo_property; // al
  char v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+8h] [rbp-30h]
  __int64 v24; // [rsp+10h] [rbp-28h]

  v3 = *((_BYTE *)a1 + 16);
  v23 = __readfsqword(0x28u);
  if ( !v3 || (getinf(57) & 0xF) != 1 )
  {
    if ( ((get_tinfo_property() & 0xF) == 9 || get_tinfo_property()) && (get_tinfo_property() & 0x3F) != 0xD )
    {
      v5 = (int)a1[1];
      result = 0;
      if ( (unsigned __int64)((int)v5 + 1) <= 8 )
      {
        a1[1] = v5 + 1;
        v7 = &unk_8FDE0;
LABEL_7:
        v8 = v7[v5];
        cleanup_argloc();
        *a2 = 3;
        a2[2] = v8;
        return 1;
      }
      return result;
    }
    if ( (unsigned __int64)(int)(a1[1] + 1) <= 8 )
    {
      HIDWORD(v22) = 0;
      v14 = sub_77F00(a3, (_DWORD *)&v22 + 1);
      if ( v14 )
      {
        if ( (unsigned __int64)(int)(v14 + a1[1]) <= 8 )
          return (unsigned __int8)sub_79150((int *)a1, (__int64)a2, HIDWORD(v22) * v14, SHIDWORD(v22), 1) == 0 ? -1 : 1;
        a1[1] = 9;
        return 0;
      }
    }
    v3 = 0;
  }
  if ( (get_tinfo_property() & 0x2F) == 0xD && (unsigned __int64)get_tinfo_size() > 0x10 )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int64)(int)(*a1 + 1) > 8 )
    return 0;
  if ( v3 && (get_tinfo_property() & 0xF) == 9 )
    goto LABEL_17;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) != 0 )
  {
    if ( (tinfo_property & 0xFu) <= 8 )
    {
LABEL_17:
      tinfo_size = get_tinfo_size();
      if ( tinfo_size == -1 )
        return 0xFFFFFFFFLL;
LABEL_27:
      if ( tinfo_size > 8 )
      {
        if ( HIDWORD(v22) > 8 && (unsigned __int8)getinf_flag(67, 4, v9, v10, v11, v12, v22, v23, v24) )
          *a1 = (*a1 + 1) & 0xFFFFFFFE;
        if ( tinfo_size == 16 && (unsigned __int64)(int)(*a1 + 2) <= 8 )
        {
          v21 = 16;
          goto LABEL_45;
        }
LABEL_31:
        if ( (get_tinfo_property() & 0x2F) != 0xD || (unsigned __int64)(int)(*a1 + ((tinfo_size + 7) >> 3)) > 8 )
        {
          *a1 = 9;
          return 0;
        }
        v21 = tinfo_size;
LABEL_45:
        if ( (unsigned __int8)sub_79150((int *)a1, (__int64)a2, v21, 8, 0) )
          return 1;
        return 0xFFFFFFFFLL;
      }
      goto LABEL_38;
    }
    v16 = tinfo_property & 0x3F;
    tinfo_size = get_tinfo_size();
    if ( tinfo_size == -1 )
      return 0xFFFFFFFFLL;
    if ( v16 == 45 )
      goto LABEL_27;
  }
  else
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size == -1 )
      return 0xFFFFFFFFLL;
  }
  if ( (get_tinfo_property() & 0xF) != 0xA || tinfo_size > 8 )
  {
    if ( HIDWORD(v22) > 8 && (unsigned __int8)getinf_flag(67, 4, v17, v18, v19, v20, v22, v23, v24) )
      *a1 = (*a1 + 1) & 0xFFFFFFFE;
    goto LABEL_31;
  }
LABEL_38:
  v5 = (int)*a1;
  result = 0;
  if ( (unsigned __int64)((int)v5 + 1) <= 8 )
  {
    *a1 = v5 + 1;
    v7 = dword_8FE20;
    goto LABEL_7;
  }
  return result;
}
