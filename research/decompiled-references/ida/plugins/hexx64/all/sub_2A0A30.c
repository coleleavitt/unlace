unsigned __int64 __fastcall sub_2A0A30(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  int v4; // eax
  char tinfo_property; // al
  char v6; // al
  int v7; // eax
  bool v8; // cc
  __int64 v9; // r13
  int v11; // r13d
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // r15
  int v15; // eax
  unsigned int v16[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v3 = a1 + 32;
    if ( a2 != a1 + 32 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(a1 + 28);
        if ( *(_DWORD *)(v3 + 28) < v4 )
        {
LABEL_20:
          v16[0] = 0;
          sub_29F770((__int64)v16, (unsigned int *)v3, a3);
          v17 = 0;
          copy_tinfo_t();
          v9 = v3 + 32;
          v18 = *(_QWORD *)(v3 + 24);
          v13 = (v3 - a1) >> 5;
          if ( v3 - a1 > 0 )
          {
            do
            {
              v14 = v3;
              v3 -= 32;
              sub_29F770(v14, (unsigned int *)v3, a3);
              copy_tinfo_t();
              *(_DWORD *)(v14 + 24) = *(_DWORD *)(v14 - 8);
              *(_DWORD *)(v14 + 28) = *(_DWORD *)(v14 - 4);
              --v13;
            }
            while ( v13 );
          }
          sub_29F770(a1, v16, a3);
          copy_tinfo_t();
          *(_QWORD *)(a1 + 24) = v18;
          clear_tinfo_t();
          sub_29EC30((__int64)v16, a3);
          goto LABEL_15;
        }
        if ( *(_DWORD *)(v3 + 28) <= v4 )
          break;
LABEL_14:
        v9 = v3 + 32;
        sub_2A0830(v3, a3);
LABEL_15:
        v3 = v9;
        if ( a2 == v9 )
          return v19 - __readfsqword(0x28u);
      }
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0x3E) == 0
        || (tinfo_property & 0xFu) > 8 && (tinfo_property & 0x3F) != 0x2D
        || (get_tinfo_property() & 0x3F) != 0x2D )
      {
        v6 = get_tinfo_property();
        if ( (v6 & 0x3E) == 0 || (v6 & 0xFu) > 8 && (v6 & 0x3F) != 0x2D )
        {
LABEL_11:
          v7 = *(_DWORD *)(a1 + 24);
          v8 = *(_DWORD *)(v3 + 24) <= v7;
          if ( *(_DWORD *)(v3 + 24) < v7 )
            goto LABEL_20;
          goto LABEL_12;
        }
        if ( (get_tinfo_property() & 0x3F) != 0x2D )
        {
          v15 = *(_DWORD *)(a1 + 24);
          v8 = *(_DWORD *)(v3 + 24) <= v15;
          if ( *(_DWORD *)(v3 + 24) < v15 )
            goto LABEL_20;
LABEL_12:
          if ( v8 && (int)sub_29E6F0(v3, a1, a3) < 0 )
            goto LABEL_20;
          goto LABEL_14;
        }
      }
      v11 = score_tinfo();
      v12 = score_tinfo();
      if ( v11 > v12 )
        goto LABEL_14;
      if ( v11 < v12 )
        goto LABEL_20;
      goto LABEL_11;
    }
  }
  return v19 - __readfsqword(0x28u);
}

