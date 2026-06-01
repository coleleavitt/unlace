__int64 __fastcall sub_34A30(__int64 a1)
{
  __int64 result; // rax
  const char *v2; // r12
  char *v3; // rax
  __int64 v4; // r12
  int tinfo_size; // eax
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  result = *(unsigned __int8 *)(a1 + 142);
  if ( (unsigned __int8)result <= 2u )
  {
    v9[0] = 0x4E7B30A9EA4DB41LL;
    sub_349E0(a1, v9);
    if ( *(_QWORD *)(a1 + 24)
      && (v2 = *(const char **)(a1 + 16), (v3 = strstr(v2, "nullptr")) != nullptr)
      && v3 - v2 != -1 )
    {
      create_tinfo(a1 + 8, 1, 7, 0);
      v4 = a1 + 72;
      sub_30CA0(a1);
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 8), 0);
      sub_345A0(a1, tinfo_size);
      v9[0] = 0x4528FF010435BBCALL;
      v6 = (__int64 *)sub_856E0(v9, a1 + 72);
      sub_349E0(a1, v6);
    }
    else
    {
      create_tinfo(a1 + 8, 1, 7, 0);
      v4 = a1 + 72;
      sub_345A0(a1, 0);
    }
    v9[0] = 0x59624C3283952AFALL;
    v7 = sub_856E0(v9, a1 + 64);
    v8 = (__int64 *)sub_856E0(v7, v4);
    sub_349E0(a1, v8);
    return 3;
  }
  return result;
}

