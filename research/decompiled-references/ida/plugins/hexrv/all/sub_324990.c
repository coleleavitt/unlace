__int64 __fastcall sub_324990(__int64 *a1, __int64 a2, char a3)
{
  char v3; // cl
  __int64 v5; // r13
  signed __int64 v6; // rdx
  int v8; // esi
  int tinfo_property; // eax
  __int64 v10[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v11; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v3 = *(_BYTE *)a2;
  v13 = __readfsqword(0x28u);
  if ( v3 == 10 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( (*(_BYTE *)v5 & 0xFB) == 1 )
    {
      if ( (get_tinfo_property() & 0xF) == 0xA )
        tinfo_property = get_tinfo_property();
      else
        tinfo_property = get_tinfo_size();
      v3 = *(_BYTE *)v5;
      v6 = tinfo_property;
      goto LABEL_4;
    }
    return 0;
  }
  v5 = a2;
  if ( (v3 & 0xFB) != 1 )
    return 0;
  v6 = *(int *)(a2 + 4);
LABEL_4:
  if ( v3 != 1 )
    return sub_3242B0(a1, v5, v6, a3, 0);
  v8 = *(_DWORD *)(v5 + 8);
  v10[0] = 0;
  v10[1] = 0;
  sub_5FB00(v10, v8, v6);
  v11 = nullptr;
  v12 = 0;
  sub_5FF00(a1, v10);
  sub_311BB0(a1 + 2, &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  qfree();
  return 1;
}

