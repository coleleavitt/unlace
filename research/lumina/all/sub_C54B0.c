__int64 __fastcall sub_C54B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    xmmword_241500(v4);
    v7 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 632) = a2;
    *(_QWORD *)(a1 + 640) = a3;
    *(_DWORD *)(a1 + 648) = 0;
    *(_DWORD *)(a1 + 732) = 0;
    if ( v7 )
      xmmword_241510(v7, a2, v6);
  }
  else
  {
    *(_QWORD *)(a1 + 632) = a2;
    *(_QWORD *)(a1 + 640) = a3;
    *(_DWORD *)(a1 + 648) = 0;
    *(_DWORD *)(a1 + 732) = 0;
  }
  return 0;
}
