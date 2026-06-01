__int64 __fastcall sub_28C70(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  char tinfo_property; // al
  __int64 v5; // rdx
  char v6; // dl
  __int64 result; // rax
  __int64 v8; // rdi
  _BOOL4 v9; // eax
  int v10; // edx
  _BOOL4 v11; // [rsp+Ch] [rbp-4Ch]
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v3 = *a1;
  v17 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v3, 2) & 0xF) == 0xB && (get_tinfo_property(*a2, 2) & 0xF) == 0xB )
  {
    v8 = *a1;
    v12 = 0;
    v13 = 0;
    v14 = nullptr;
    v15 = 0;
    if ( (unsigned __int8)get_tinfo_details(v8, 11, &v12)
      && (unsigned __int8)get_tinfo_details(*a2, 11, &v14)
      && HIDWORD(v13) == HIDWORD(v15) )
    {
      v10 = lexcompare_tinfo(v12, v14, 0);
      v9 = 1;
      if ( v10 )
        v9 = sub_28C70(&v12, &v14) != 0;
    }
    else
    {
      v9 = 0;
    }
    v11 = v9;
    clear_tinfo_t(&v14);
    clear_tinfo_t(&v12);
    return v11;
  }
  else
  {
    tinfo_property = get_tinfo_property(*a1, 2);
    v5 = 1;
    if ( (tinfo_property & 0x2F) == 0xD )
      v5 = ((get_tinfo_property(*a1, 288) == 0) << 8) | 1u;
    v6 = compare_tinfo(*a1, *a2, v5);
    result = 0;
    if ( v6 )
    {
      if ( get_tinfo_property(*a2, 288)
        && (v16 = get_tinfo_property(*a1, 7),
            v14 = off_C7B78,
            v15 = 6,
            (unsigned int)visit_subtypes(&v14, 0, a2, 0, 0) == 1) )
      {
        return 0xFFFFFFFFLL;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}

