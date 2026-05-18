__int64 __fastcall sub_C5700(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  char v6; // dl
  __int64 v7; // r12
  __int64 v8; // rdx

  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    xmmword_241500(v5);
    v5 = *(_QWORD *)(a1 + 24);
  }
  v6 = *(_BYTE *)(a1 + 110);
  v7 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 256) = a2;
  *(_QWORD *)(a1 + 264) = a3;
  v8 = v6 & 0xF;
  if ( a2 )
    v8 = (unsigned __int8)v8 | 0xFFFFFF80;
  *(_BYTE *)(a1 + 110) = v8;
  if ( v5 )
    xmmword_241510(v5, a2, v8);
  return v7;
}
