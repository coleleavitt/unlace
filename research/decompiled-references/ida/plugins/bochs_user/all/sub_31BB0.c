bool __fastcall sub_31BB0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  return *(_BYTE *)(a1 + 1208)
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(a1 + 2768) + 72LL))(
           *(_QWORD *)(a1 + 2768),
           35,
           a2,
           v7)
      && (unsigned int)sub_26D50(a1 + 1208, v7[0], a3, a4) == 0;
}

