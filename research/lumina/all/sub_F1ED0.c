__int64 __fastcall sub_F1ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // r14d
  int v9; // ebp
  __int64 result; // rax
  int v11; // esi
  _QWORD *v12; // rcx

  v6 = *(unsigned __int8 *)(a2 + 11);
  if ( (_BYTE)v6 )
  {
    sub_DE530(a1, *(unsigned __int8 *)(a2 + 11), a3, a4, a5, a6);
    v7 = *(unsigned __int8 *)(a2 + 10);
    v8 = v7;
    v9 = v7 + v6;
    do
    {
      while ( 1 )
      {
        result = *(_QWORD *)a1;
        v11 = v7 - v8;
        if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
          break;
        if ( v9 == ++v7 )
          return result;
      }
      v12 = *(&off_23B280 + v7++);
      result = sub_F1A30(a1, v11, 0, v12, nullptr);
    }
    while ( v9 != v7 );
  }
  else
  {
    sub_DE530(a1, 1, a3, a4, a5, a6);
    result = *(_QWORD *)a1;
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
      return sub_F1A30(a1, 0, 0, *(_QWORD **)a2, nullptr);
  }
  return result;
}
