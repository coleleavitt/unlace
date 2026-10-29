__int64 __fastcall sub_4B7A0(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(int *)(a1 + 960);
  if ( *(_QWORD *)(a1 + 8 * v1 + 384) != -1 && *(_QWORD *)(a1 + 912) != -1 && (_DWORD)v1 != -1 )
  {
    getseg();
    op_offset();
    *(_QWORD *)(a1 + 944) = 0;
  }
  return sub_4A7A0(a1);
}
