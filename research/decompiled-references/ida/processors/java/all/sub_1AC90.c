__int64 __fastcall sub_1AC90(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  int v3; // r13d
  __int64 v4; // rbx
  int v5; // edx

  result = *(unsigned __int16 *)(a1 + 33173);
  v2 = *(_QWORD *)(a1 + 33193);
  if ( *(_WORD *)(a1 + 33173) )
  {
    v3 = 1;
    v4 = (int)result - 1;
    do
    {
      result = netnode_altval(v2, v4, 65);
      v5 = v3;
      v3 = result;
      if ( (int)result < 0 && !v5 )
      {
        del_items(v4 + *(_QWORD *)(a1 + 33165) + 1, 0, 1, 0);
        result = create_data(v4 + *(_QWORD *)(a1 + 33165), 0x10000000, 2, -1);
      }
      --v4;
    }
    while ( (_DWORD)v4 != -1 );
  }
  return result;
}

