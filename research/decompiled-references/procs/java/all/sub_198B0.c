bool __fastcall sub_198B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al
  __int64 v5; // rbx
  __int64 v6; // rdi
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  result = *(_WORD *)(a1 + 33111) >= (unsigned __int16)a4
        && (v5 = 2 * a4, v6 = *(_QWORD *)(a1 + 33336), v7[0] = 2 * a4 + 1, netnode_getblob(v6, a3, v7, a2, 106))
        && LODWORD(v7[0]) == v5;
  return result;
}
