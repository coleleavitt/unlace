unsigned __int64 __fastcall sub_17310(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rbp
  unsigned int v5[82]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v6; // [rsp+148h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 616);
  v2 = *(unsigned int *)(a1 + 272);
  v6 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v1 + 16) & (qword_349D8 + v2);
  if ( *(_WORD *)(a1 + 96) == 523 )
  {
    memset(v5, 0, 0x140u);
    lread();
    sub_14180(a1, v3, (__int64)v5, a1 + 72);
  }
  else
  {
    memset(v5, 0, 0xC0u);
    lread();
    sub_15840(a1, v3, v5, a1 + 72);
  }
  return v6 - __readfsqword(0x28u);
}
