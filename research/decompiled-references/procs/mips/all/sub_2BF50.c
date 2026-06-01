__int64 __fastcall sub_2BF50(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 ea_name; // rax
  char *v8; // r13
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a2 > 0x7FEF && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (a2 - 32752), v2 = is_mapped(v4), (_BYTE)v2) )
  {
    v5 = getseg(v4);
    s1 = nullptr;
    v6 = (_QWORD *)v5;
    v10 = 0;
    if ( !v5 || get_segm_name(&s1, v5, 1) <= 0 || !(_QWORD)v10 || (v8 = s1, strcmp(s1, ".got")) || *v6 != v4 )
    {
      ea_name = get_ea_name(&s1, v4, 512, 0);
      v8 = s1;
      v2 = 0;
      if ( ea_name > 0 )
      {
        if ( (_QWORD)v10 )
          LOBYTE(v2) = strcmp(s1, "_GLOBAL_OFFSET_TABLE_") == 0;
      }
    }
    if ( v8 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v8);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
