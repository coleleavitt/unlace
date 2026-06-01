unsigned __int64 __fastcall sub_280870(__int64 a1, __int64 a2)
{
  __int64 v3; // r12

  if ( *(_DWORD *)(a2 + 8) == 51 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v3 + 8) == 51 )
      sub_280870(a1, *(_QWORD *)(v3 + 24));
    sub_244580(v3, *(_QWORD *)(a1 + 112), 0);
  }
  return sub_244580(a2, *(_QWORD *)(a1 + 112), 0);
}

