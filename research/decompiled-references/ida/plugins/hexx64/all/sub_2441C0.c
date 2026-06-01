unsigned __int64 __fastcall sub_2441C0(__int64 a1, __int64 a2, char a3, double a4)
{
  int v5; // eax
  __int64 *v6; // rdi
  __int64 v8; // r12
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( !a3 )
    goto LABEL_5;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 == 57 )
  {
    v6 = *(__int64 **)(a1 + 32);
    if ( 72 * v6[1] )
    {
      v8 = *v6;
      do
      {
        v9 = v8;
        v8 += 72;
        sub_2441C0(v9, a2, 1);
        v6 = *(__int64 **)(a1 + 32);
      }
      while ( v8 != *v6 + 72 * v6[1] );
    }
  }
  else
  {
    if ( (unsigned int)(v5 - 1) > 0x3B && v5 != 67 )
    {
LABEL_5:
      v6 = *(__int64 **)(a1 + 32);
      goto LABEL_6;
    }
    sub_2441C0(*(_QWORD *)(a1 + 24), a2, 1);
    v10 = *(_DWORD *)(a1 + 8);
    v6 = *(__int64 **)(a1 + 32);
    if ( (unsigned int)(v10 - 1) <= 0x2C || v10 == 58 )
    {
      sub_2441C0((__int64)v6, a2, 1);
      if ( *(_DWORD *)(a1 + 8) == 16 )
        sub_2441C0(*(_QWORD *)(a1 + 40), a2, 1);
      goto LABEL_5;
    }
  }
LABEL_6:
  sub_2436E0(
    &v11,
    *(_QWORD *)(a2 + 96),
    a1,
    *(_QWORD *)(a1 + 24) + 48LL,
    v6 + 6,
    (_BYTE *)(*(_QWORD *)(a1 + 40) + 48LL),
    a4,
    0);
  copy_tinfo_t();
  clear_tinfo_t();
  return v12 - __readfsqword(0x28u);
}

