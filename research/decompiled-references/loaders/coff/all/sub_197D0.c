__int64 __fastcall sub_197D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  __int64 v6; // rsi
  char *v7; // r13
  __int64 v9; // rax
  char *v10; // rax
  char *haystack; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v4 = *(_WORD *)(a3 + 12);
  v13 = __readfsqword(0x28u);
  if ( v4 == 11 )
  {
    v9 = getseg(a1[5]);
    a1[5] -= get_segm_base(v9);
    return sub_16040(a1, a2, a3);
  }
  if ( v4 == 13 )
  {
    v6 = a1[5];
    haystack = nullptr;
    v12 = 0;
    if ( get_cmt(&haystack, v6, 1) > 0 )
    {
      if ( (_QWORD)v12 )
      {
        v7 = haystack;
        v10 = strstr(haystack, "TOKEN");
        if ( v10 )
        {
          if ( v10 - v7 != -1 )
          {
            if ( !v7 )
              return sub_16040(a1, a2, a3);
            goto LABEL_6;
          }
        }
      }
    }
    append_cmt(a1[5], "TOKEN", 1);
    v7 = haystack;
    if ( haystack )
    {
LABEL_6:
      *(_QWORD *)&v12 = 0;
      qfree(v7);
    }
  }
  return sub_16040(a1, a2, a3);
}
