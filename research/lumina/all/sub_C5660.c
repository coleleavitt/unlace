__int64 __fastcall sub_C5660(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // bp
  __int64 v7; // r12
  __int64 v8; // rdi

  v6 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 )
  {
    xmmword_241500(v8);
    v8 = *(_QWORD *)(a1 + 24);
    if ( !v7 || !(_DWORD)a2 )
    {
      v6 = 0;
      v7 = 0;
    }
  }
  else if ( !a3 || !(_DWORD)a2 )
  {
    *(_BYTE *)(a1 + 110) = 0;
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 248) = a4;
    return 0;
  }
  *(_BYTE *)(a1 + 110) = v6;
  *(_QWORD *)(a1 + 240) = v7;
  *(_QWORD *)(a1 + 248) = a4;
  if ( v8 )
    xmmword_241510(v8, a2, a3);
  return 0;
}
