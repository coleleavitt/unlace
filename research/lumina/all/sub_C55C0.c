__int64 __fastcall sub_C55C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r13

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    xmmword_241500(v4);
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 240) = a2;
    *(_QWORD *)(a1 + 248) = a3;
    *(_BYTE *)(a1 + 110) = (a2 != 0) << 6;
    if ( v7 )
      xmmword_241510(v7, a2, v6);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 248);
    if ( a2 )
    {
      *(_BYTE *)(a1 + 110) = 64;
      *(_QWORD *)(a1 + 240) = a2;
    }
    else
    {
      *(_BYTE *)(a1 + 110) = 0;
      *(_QWORD *)(a1 + 240) = 0;
    }
    *(_QWORD *)(a1 + 248) = a3;
  }
  return v8;
}
