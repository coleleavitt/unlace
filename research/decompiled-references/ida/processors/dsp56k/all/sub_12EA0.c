void __fastcall sub_12EA0(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf

  if ( *(_QWORD *)(a1 + 232) == -1 )
  {
    v1 = sub_12D50(a1, *(int *)(a1 + 592), 0);
    v2 = *(_DWORD *)(a1 + 600) == 1;
    *(_QWORD *)(a1 + 232) = v1;
    if ( !v2 )
      *(_QWORD *)(a1 + 240) = sub_12D50(a1, *(int *)(a1 + 596), 0);
  }
}

