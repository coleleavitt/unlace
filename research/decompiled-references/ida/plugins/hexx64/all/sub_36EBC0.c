_DWORD *__fastcall sub_36EBC0(_QWORD *a1, double a2)
{
  int v2; // ebp
  _DWORD *v3; // r13
  int v4; // r12d
  __int64 v5; // rax
  _DWORD *v6; // r14

  if ( !a1[58] )
    return nullptr;
  v2 = 0;
  v3 = nullptr;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = (_DWORD *)(a1[54] + 104LL * *(int *)(a1[57] + 4 * v5));
      if ( (unsigned __int8)sub_369E00((__int64)v6, a2) )
      {
        if ( (int)sub_1C3500(v6, a2) >= v4 )
          break;
      }
      v5 = ++v2;
      if ( (unsigned __int64)v2 >= a1[58] )
        return v3;
    }
    ++v2;
    v3 = v6;
    v4 = sub_1C3500(v6, a2);
    v5 = v2;
  }
  while ( (unsigned __int64)v2 < a1[58] );
  return v3;
}

