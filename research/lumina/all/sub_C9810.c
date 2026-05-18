__int64 __fastcall sub_C9810(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // rbx
  int v9; // r12d
  __int64 v10; // rdi

  v7 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  if ( v7 )
    xmmword_241500(*(_QWORD *)(*(_QWORD *)a1 + 24LL));
  if ( *(__int16 *)(a1 + 32) > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = v8 + *(_QWORD *)(a1 + 128);
      if ( (*(_WORD *)(v10 + 20) & 0x9000) != 0 || (a4 = *(unsigned int *)(v10 + 32), (_DWORD)a4) )
      {
        sub_C9690(v10, a2, a3, a4, a5, a6);
        v10 = v8 + *(_QWORD *)(a1 + 128);
      }
      a3 = 1;
      ++v9;
      v8 += 56;
      *(_WORD *)(v10 + 20) = 1;
    }
    while ( *(__int16 *)(a1 + 32) > v9 );
  }
  if ( *(_DWORD *)(a1 + 284) )
    *(_BYTE *)(a1 + 198) = *(_BYTE *)(a1 + 198) & 0xFC | 1;
  if ( v7 )
    xmmword_241510(v7, a2, a3);
  return 0;
}
