__int64 __fastcall sub_A280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5)
{
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // r14

  v5 = strcmp(a5, "DATA");
  result = 0;
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    if ( *(_QWORD *)(v7 + 240) == -1 )
    {
      *(_QWORD *)(v7 + 240) = find_free_chunk();
      ea2node();
      netnode_supset();
    }
    stristr();
    sub_A180(*(_QWORD *)(a1 + 96), a2 + *(_QWORD *)(*(_QWORD *)(a1 + 96) + 240LL));
    return 1;
  }
  return result;
}

