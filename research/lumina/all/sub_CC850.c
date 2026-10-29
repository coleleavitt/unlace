__int64 __fastcall sub_CC850(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    xmmword_241500(v4);
  if ( *(_BYTE *)(a1 + 111) )
  {
    if ( *(int *)(a1 + 40) <= 0 )
      goto LABEL_11;
    goto LABEL_5;
  }
  sub_CC760(a1);
  a3 = *(unsigned int *)(a1 + 40);
  if ( (int)a3 > 0 )
  {
LABEL_5:
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL * v5 + 8);
      if ( v6 )
        qword_241588(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v6 + 8) + 288LL) + 64LL));
      ++v5;
    }
    while ( *(_DWORD *)(a1 + 40) > v5 );
  }
  if ( !*(_BYTE *)(a1 + 111) )
    sub_CC7E0(a1, a2, a3);
LABEL_11:
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
    xmmword_241510(v7, a2, a3);
  return 0;
}
