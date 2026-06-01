__int64 __fastcall sub_364C0(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-188h] BYREF
  _BYTE v5[368]; // [rsp+8h] [rbp-180h] BYREF
  unsigned __int64 v6; // [rsp+178h] [rbp-10h]

  v2 = a2[13];
  v6 = __readfsqword(0x28u);
  v4 = a1;
  qmemcpy(v5, a2, 0x168u);
  v5[360] = 1;
  sub_35340(&v4);
  return v2;
}
