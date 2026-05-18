void __fastcall sub_D04F0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rbx

  v2 = *(_QWORD *)(a1 + 576);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    for ( *(_QWORD *)(a1 + 576) = 0; v3; v3 = *(_QWORD *)(v3 + 16) )
      *(_BYTE *)(v3 + 198) = *(_BYTE *)(v3 + 198) & 0xFC | 1;
    do
    {
      v4 = *(_QWORD *)(v2 + 40);
      sub_D00D0(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}
