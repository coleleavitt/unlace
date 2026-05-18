__int64 __fastcall sub_CB9C0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rax

  if ( a3 )
  {
    --*(_DWORD *)(a1 + 76);
    return 0;
  }
  v4 = *(void **)(a1 + 104);
  if ( !v4 )
    return 0;
  off_241390(v4, *(_QWORD *)(a1 + 88));
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  return 0;
}
