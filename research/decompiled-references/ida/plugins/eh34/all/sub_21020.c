__int64 __fastcall sub_21020(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4[3] = __readfsqword(0x28u);
  v4[0] = a2;
  v4[1] = a2 + 4;
  rangeset_t_add(v2, v4);
  return get_dword(a2);
}

