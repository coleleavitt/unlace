unsigned __int64 __fastcall sub_376950(__int64 a1, double a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  char tinfo_property; // al
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v2 + 320) )
  {
    sub_36D720(&v11, v2, 0, a2);
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v4 + 480) != -1 )
    {
      tinfo_property = get_tinfo_property();
      v4 = *(_QWORD *)(a1 + 8);
      if ( (tinfo_property & 8) == 0 )
      {
        v6 = *(_QWORD *)(v4 + 432) + 104LL * *(int *)(v4 + 480);
        if ( (*(_BYTE *)(v6 + 24) & 2) == 0 )
        {
          if ( (unsigned __int8)sub_372F50(a1, *(_DWORD *)(v6 + 88)) )
          {
            v10 = sub_29CA60(*(_QWORD *)(a1 + 216), (unsigned int)&v11, *(_DWORD *)(v6 + 88));
            v4 = *(_QWORD *)(a1 + 8);
            if ( !v10 )
              goto LABEL_5;
            sub_1EF8F0(v6, *(_QWORD *)(v4 + 1504), &v11, 0, a2);
            *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 + 24) & 0xFFFBFFFD | 2;
          }
          v4 = *(_QWORD *)(a1 + 8);
        }
      }
    }
LABEL_5:
    v12 = 0;
    if ( (unsigned __int8)sub_3767A0(v4) )
      sub_F34C0(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL), &v12, 0, a2);
    clear_tinfo_t();
    clear_tinfo_t();
    return v13 - __readfsqword(0x28u);
  }
  v8 = get_tinfo_property();
  v9 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v9 + 68) == v8 )
    return v13 - __readfsqword(0x28u);
  return sub_3311F0((_QWORD *)v9, *(_QWORD *)(v9 + 40), 0xCu);
}

