__int64 __fastcall sub_1F260(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1224);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v2 + 16);
      v5 = *(_QWORD *)(v2 + 24);
      if ( a2 <= *(_DWORD *)(v2 + 32) )
        break;
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v4 );
LABEL_6:
  result = 0xFFFFFFFFLL;
  if ( a1 + 1216 != v3 && a2 >= *(_DWORD *)(v3 + 32) )
  {
    sub_1ED60(a1, a2, 0);
    ++*(_DWORD *)(v3 + 48);
    return 1;
  }
  return result;
}

