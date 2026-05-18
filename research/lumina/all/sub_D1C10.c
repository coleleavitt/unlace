__int64 __fastcall sub_D1C10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi

  v4 = *(_QWORD *)(a1 + 24);
  if ( (int)a2 > 0 )
  {
    if ( v4 )
    {
      xmmword_241500(v4);
      v4 = *(_QWORD *)(a1 + 24);
    }
    *(_QWORD *)(a1 + 640) = a1;
    *(_DWORD *)(a1 + 648) = 0;
    *(_DWORD *)(a1 + 732) = 0;
    *(_QWORD *)(a1 + 632) = sub_C5470;
    if ( v4 )
      xmmword_241510(v4, a2, a3);
    *(_DWORD *)(a1 + 732) = a2;
    return 0;
  }
  if ( !v4 )
  {
    *(_QWORD *)(a1 + 632) = 0;
    *(_QWORD *)(a1 + 640) = 0;
    *(_DWORD *)(a1 + 648) = 0;
    *(_DWORD *)(a1 + 732) = 0;
    return 0;
  }
  xmmword_241500(v4);
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_DWORD *)(a1 + 648) = 0;
  *(_DWORD *)(a1 + 732) = 0;
  if ( !v7 )
    return 0;
  xmmword_241510(v7, a2, v6);
  return 0;
}
