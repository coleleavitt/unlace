__int64 __fastcall sub_329A90(__int64 *a1, __int64 a2, char a3, double a4)
{
  char v4; // cl
  __int64 v6; // r13
  signed __int64 v7; // rdx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int tinfo_property; // eax
  __int64 v13[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v4 = *(_BYTE *)a2;
  v16 = __readfsqword(0x28u);
  if ( v4 == 10 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( (*(_BYTE *)v6 & 0xFB) == 1 )
    {
      if ( (get_tinfo_property() & 0xF) == 0xA )
        tinfo_property = get_tinfo_property();
      else
        tinfo_property = get_tinfo_size();
      v4 = *(_BYTE *)v6;
      v7 = tinfo_property;
      goto LABEL_4;
    }
    return 0;
  }
  v6 = a2;
  if ( (v4 & 0xFB) != 1 )
    return 0;
  v7 = *(int *)(a2 + 4);
LABEL_4:
  if ( v4 != 1 )
    return sub_3293B0(a1, v6, v7, a3, 0, a4);
  v9 = *(_DWORD *)(v6 + 8);
  v13[0] = 0;
  v13[1] = 0;
  sub_63E80(v13, v9, v7, a4);
  v14 = 0;
  v15 = 0;
  sub_64280(a1, v13, 0.0);
  sub_316CB0(a1 + 2, (const void **)&v14, v10, v11);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  qfree(v13[0]);
  return 1;
}

