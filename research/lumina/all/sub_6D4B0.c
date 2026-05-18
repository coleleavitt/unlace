bool __fastcall sub_6D4B0(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a2;
  v6[1] = __readfsqword(0x28u);
  v6[0] = v3;
  *a1 = sub_196FF0(v6, a3);
  v4 = v6[0];
  *a2 = v6[0];
  return v3 < v4;
}
