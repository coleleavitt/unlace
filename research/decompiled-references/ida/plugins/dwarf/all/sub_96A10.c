__int64 __fastcall sub_96A10(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  const char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  char *v10; // r8
  char *v11; // r8
  unsigned __int16 v12; // [rsp+6h] [rbp-32h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h] BYREF
  __int64 v14[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 256);
  v14[1] = __readfsqword(0x28u);
  v14[0] = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int16 *, __int64 *))(v3 + 200))(*a2, &v12, v14) )
  {
    v4 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 256) + 464LL))(v14[0]);
    sub_1D740((__int64)"ERROR: %s\n", v4);
  }
  v13 = 0;
  if ( v12 != 15 )
  {
    if ( v12 > 0xFu )
    {
      if ( v12 == 23 )
      {
        v5 = *(_QWORD *)(a1 + 256);
        v6 = *a2;
        v14[0] = 0;
        if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v5 + 232))(v6, &v13, v14) )
        {
          v11 = sub_81C40(a1);
          sub_95A30(
            v14[0],
            (__int64)"die.cpp",
            1322,
            (__int64)"Error retrieving attribute value of type global_formref for DIE %s",
            v11);
        }
        return v13;
      }
LABEL_11:
      sub_1D740((__int64)"unknown rangelistptr form=%d\n", v12);
      return v13;
    }
    if ( (unsigned __int16)(v12 - 6) > 1u )
      goto LABEL_11;
  }
  v8 = *(_QWORD *)(a1 + 256);
  v9 = *a2;
  v14[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v8 + 264))(v9, &v13, v14) )
  {
    v10 = sub_81C40(a1);
    sub_95A30(
      v14[0],
      (__int64)"die.cpp",
      1330,
      (__int64)"Error retrieving attribute value of type udata for DIE %s",
      v10);
  }
  return v13;
}

