void __fastcall sub_CA000(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 v5; // rax

  if ( *(int *)(a1 + 128) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = v2++;
      sub_C9E70(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 56 * v3 + 16), a2);
    }
    while ( *(_DWORD *)(a1 + 128) > v2 );
  }
  v4 = *(__int64 **)(a1 + 88);
  v5 = *v4;
  if ( !*(_BYTE *)(a1 + 8) )
  {
    if ( !v5 )
      goto LABEL_6;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(v5 + 8))(*(_QWORD *)(a1 + 88));
    *v4 = 0;
    goto LABEL_6;
  }
  if ( (_UNKNOWN *)v5 == &unk_23BDC0 )
    goto LABEL_8;
LABEL_6:
  sub_C91C0(*(_QWORD *)(a1 + 120), a2);
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 60) = 0;
}
