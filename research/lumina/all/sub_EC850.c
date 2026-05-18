__int64 __fastcall sub_EC850(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 i; // rdx

  v2 = 0;
  v3 = sub_CC270((__int64 *)(a1 + 288), a2);
  if ( v3 )
  {
    v4 = v3;
    if ( *(_WORD *)(v3 + 54) == 1 )
    {
      sub_C3160(v3);
    }
    else
    {
      v2 = sub_EC730(v3);
      if ( !v2 )
        (*(void (__fastcall **)(__int64))(a1 + 264))(v4);
      sub_C36A0(v4);
    }
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 64) )
    *(_DWORD *)(i + 24) = 1;
  return v2;
}
