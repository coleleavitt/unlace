__int64 __fastcall sub_1AD60(__int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r14
  char *v8; // r15
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( a3 <= 0x7FFF )
    return 0;
  v5 = a3 - 0x8000;
  v3 = is_mapped(a3 - 0x8000);
  if ( !(_BYTE)v3 )
    return 0;
  v6 = getseg(v5);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 0;
  s1 = nullptr;
  v10 = 0;
  if ( get_segm_name(&s1, v6, 0) <= 0 || !(_QWORD)v10 )
  {
    v3 = 0;
    goto LABEL_11;
  }
  v8 = s1;
  if ( !strcmp(s1, ".got") && *v7 == v5 || !strcmp(v8, ".got2") )
  {
    op_offset(a1, 0, a2, -1, 0, 0x8000);
LABEL_11:
    v8 = s1;
    goto LABEL_12;
  }
  v3 = 0;
LABEL_12:
  if ( v8 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v8);
  }
  return v3;
}
