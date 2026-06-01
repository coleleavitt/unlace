unsigned __int64 __fastcall sub_240540(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  __int64 *v5; // rdi
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // [rsp+8h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( !a3 )
    goto LABEL_5;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 == 57 )
  {
    v5 = *(__int64 **)(a1 + 32);
    if ( 72 * v5[1] )
    {
      v7 = *v5;
      do
      {
        v8 = v7;
        v7 += 72;
        sub_240540(v8, a2, 1);
        v5 = *(__int64 **)(a1 + 32);
      }
      while ( v7 != *v5 + 72 * v5[1] );
    }
  }
  else
  {
    if ( (unsigned int)(v4 - 1) > 0x3B && v4 != 67 )
    {
LABEL_5:
      v5 = *(__int64 **)(a1 + 32);
      goto LABEL_6;
    }
    sub_240540(*(_QWORD *)(a1 + 24), a2, 1);
    v9 = *(_DWORD *)(a1 + 8);
    v5 = *(__int64 **)(a1 + 32);
    if ( (unsigned int)(v9 - 1) <= 0x2C || v9 == 58 )
    {
      sub_240540(v5, a2, 1);
      if ( *(_DWORD *)(a1 + 8) == 16 )
        sub_240540(*(_QWORD *)(a1 + 40), a2, 1);
      goto LABEL_5;
    }
  }
LABEL_6:
  sub_23FA60(
    &v10,
    *(_QWORD *)(a2 + 96),
    a1,
    *(_QWORD *)(a1 + 24) + 48LL,
    v5 + 6,
    (_BYTE *)(*(_QWORD *)(a1 + 40) + 48LL),
    0);
  copy_tinfo_t();
  clear_tinfo_t();
  return v11 - __readfsqword(0x28u);
}

