__int64 __fastcall sub_4F840(
        __int64 a1,
        __int64 a2,
        const char *a3,
        _DWORD *a4,
        _QWORD *a5,
        char a6,
        double a7,
        double a8)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v13; // r13
  __int64 v14; // r14
  const char *i; // rsi
  __int64 result; // rax
  char *v17; // r12
  char *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v24; // [rsp+28h] [rbp-860h] BYREF
  char *s; // [rsp+38h] [rbp-850h] BYREF
  char v26[1024]; // [rsp+40h] [rbp-848h] BYREF
  char v27[1032]; // [rsp+440h] [rbp-448h] BYREF
  unsigned __int64 v28; // [rsp+848h] [rbp-40h]

  v9 = a1 + 96;
  v10 = *(_QWORD *)(a1 + 112);
  v24 = a2;
  v28 = __readfsqword(0x28u);
  if ( v9 == v10 )
    return 28;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v10 + 56);
    if ( a2 == *(_QWORD *)(v13 + 820) )
      break;
    v10 = std::_Rb_tree_increment();
    if ( v9 == v10 )
      return 28;
  }
  if ( v10 == v9 )
    return 28;
  v14 = *(_QWORD *)(v10 + 56);
  qsnprintf();
  if ( a6 )
    return sub_36CE0(v13, a3, a4, &s);
  for ( i = a3; ; i = &s[v19] )
  {
    result = sub_36CE0(v14, i, a4, &s);
    if ( (_DWORD)result != 30 )
      break;
    v17 = s;
    v18 = strchr(s, 46);
    if ( !v18 || !strcasecmp(v26, v17) )
      return 28;
    v19 = v18 - v17 + 1;
    qstrncpy();
    v27[v19] = 0;
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
      sub_E960((__int64)"  fwd %s->%s\n", v26, s);
    result = sub_4F2D0(a1, v27, &v24, 0, nullptr, 0, a7, a8);
    if ( (_DWORD)result )
      break;
    v20 = v24;
    if ( v9 == *(_QWORD *)(a1 + 112) )
      return 28;
    v21 = *(_QWORD *)(a1 + 112);
    while ( v20 != *(_QWORD *)(*(_QWORD *)(v21 + 56) + 820LL) )
    {
      v21 = std::_Rb_tree_increment();
      if ( v9 == v21 )
        return 28;
    }
    sub_367B0(v14);
    v14 = *(_QWORD *)(v21 + 56);
  }
  if ( a5 )
    *a5 = v24;
  return result;
}

