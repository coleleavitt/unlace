unsigned __int64 __fastcall sub_29B670(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  char tinfo_property; // al
  char v5; // al
  int v6; // eax
  bool v7; // cc
  __int64 v8; // r13
  int v10; // r13d
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // r15
  int v14; // eax
  unsigned int v15[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = a1 + 32;
    if ( a2 != a1 + 32 )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(a1 + 28);
        if ( *(_DWORD *)(v2 + 28) < v3 )
        {
LABEL_20:
          v15[0] = 0;
          sub_29A3B0((__int64)v15, (unsigned int *)v2);
          v16 = 0;
          copy_tinfo_t();
          v8 = v2 + 32;
          v17 = *(_QWORD *)(v2 + 24);
          v12 = (v2 - a1) >> 5;
          if ( v2 - a1 > 0 )
          {
            do
            {
              v13 = v2;
              v2 -= 32;
              sub_29A3B0(v13, (unsigned int *)v2);
              copy_tinfo_t();
              *(_DWORD *)(v13 + 24) = *(_DWORD *)(v13 - 8);
              *(_DWORD *)(v13 + 28) = *(_DWORD *)(v13 - 4);
              --v12;
            }
            while ( v12 );
          }
          sub_29A3B0(a1, v15);
          copy_tinfo_t();
          *(_QWORD *)(a1 + 24) = v17;
          clear_tinfo_t();
          sub_299870((__int64)v15);
          goto LABEL_15;
        }
        if ( *(_DWORD *)(v2 + 28) <= v3 )
          break;
LABEL_14:
        v8 = v2 + 32;
        sub_29B470(v2);
LABEL_15:
        v2 = v8;
        if ( a2 == v8 )
          return v18 - __readfsqword(0x28u);
      }
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0x3E) == 0
        || (tinfo_property & 0xFu) > 8 && (tinfo_property & 0x3F) != 0x2D
        || (get_tinfo_property() & 0x3F) != 0x2D )
      {
        v5 = get_tinfo_property();
        if ( (v5 & 0x3E) == 0 || (v5 & 0xFu) > 8 && (v5 & 0x3F) != 0x2D )
        {
LABEL_11:
          v6 = *(_DWORD *)(a1 + 24);
          v7 = *(_DWORD *)(v2 + 24) <= v6;
          if ( *(_DWORD *)(v2 + 24) < v6 )
            goto LABEL_20;
          goto LABEL_12;
        }
        if ( (get_tinfo_property() & 0x3F) != 0x2D )
        {
          v14 = *(_DWORD *)(a1 + 24);
          v7 = *(_DWORD *)(v2 + 24) <= v14;
          if ( *(_DWORD *)(v2 + 24) < v14 )
            goto LABEL_20;
LABEL_12:
          if ( v7 && (int)sub_299330(v2, a1) < 0 )
            goto LABEL_20;
          goto LABEL_14;
        }
      }
      v10 = score_tinfo();
      v11 = score_tinfo();
      if ( v10 > v11 )
        goto LABEL_14;
      if ( v10 < v11 )
        goto LABEL_20;
      goto LABEL_11;
    }
  }
  return v18 - __readfsqword(0x28u);
}

