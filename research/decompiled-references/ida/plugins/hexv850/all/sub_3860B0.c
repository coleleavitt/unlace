unsigned __int64 __fastcall sub_3860B0(__int64 a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 *v5; // rax

  sub_385410(a1, 0);
  v2 = *(unsigned __int64 **)(a1 + 32);
  v3 = *v2;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v5 = sub_251F30((__int64)v2, *(_QWORD **)(a1 + 88));
    if ( v5 )
      v3 = *v5;
  }
  else if ( *(_DWORD *)(a1 + 104) == 4 )
  {
    v3 = *(_QWORD *)(a1 + 112);
  }
  else if ( *(_DWORD *)(a1 + 56) == 4 )
  {
    v3 = *(_QWORD *)(a1 + 64);
  }
  return sub_32B3E0(*(_QWORD **)(a1 + 24), v3);
}

