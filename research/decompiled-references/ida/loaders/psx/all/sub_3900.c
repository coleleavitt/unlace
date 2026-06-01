__int64 __fastcall sub_3900(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE v3[264]; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v1 = (unsigned __int8)qlgetc();
  lread(a1, v3, v1);
  v3[v1] = 0;
  return qstrdup(v3);
}

