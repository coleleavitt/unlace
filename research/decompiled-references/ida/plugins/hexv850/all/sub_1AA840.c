unsigned __int64 __fastcall sub_1AA840(__int64 a1, void (***a2)(_QWORD, _QWORD, const char *, ...))
{
  __int64 v2; // rax
  __int64 v3; // r15
  const char *v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v7; // [rsp+78h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 1496);
  v7 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v2 + 1344);
  *(_QWORD *)(v2 + 1344) = a1;
  linearray_t_ctr();
  linearray_t_set_place();
  while ( 1 )
  {
    v5 = linearray_t_down();
    if ( !v5 )
      break;
    v4 = s1;
    if ( *(_QWORD *)(v5 + 8) )
      v4 = *(const char **)v5;
    (**a2)(a2, 0, "%s\n", v4);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1344LL) = v3;
  linearray_t_dtr();
  return v7 - __readfsqword(0x28u);
}

