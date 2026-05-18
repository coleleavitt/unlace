unsigned __int64 __fastcall sub_7C800(void *a1, void *a2)
{
  _BYTE v3[2192]; // [rsp+0h] [rbp-8A8h] BYREF
  unsigned __int64 v4; // [rsp+898h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  qmemcpy(v3, a1, sizeof(v3));
  qmemcpy(a1, a2, 0x890u);
  qmemcpy(a2, v3, 0x890u);
  return v4 - __readfsqword(0x28u);
}
