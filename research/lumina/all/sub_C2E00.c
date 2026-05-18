__int64 __fastcall sub_C2E00(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v1 + 32) )
  {
    xmmword_241500();
    v2 = *(_QWORD *)(v1 + 32);
    --*(_DWORD *)(v1 + 40);
    if ( v2 )
      xmmword_241510();
  }
  else
  {
    --*(_DWORD *)(v1 + 40);
  }
  return 0;
}
