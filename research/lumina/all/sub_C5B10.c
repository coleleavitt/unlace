__int64 __fastcall sub_C5B10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    xmmword_241500(v3);
    v5 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 88) = (_DWORD)a2 == 0 ? 255 : -1;
    if ( v5 )
      xmmword_241510(v5, a2, v4);
  }
  else
  {
    *(_DWORD *)(a1 + 88) = (_DWORD)a2 == 0 ? 255 : -1;
  }
  return 0;
}
