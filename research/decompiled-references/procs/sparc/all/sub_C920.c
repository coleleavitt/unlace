__int64 __fastcall sub_C920(const void *a1)
{
  int v1; // ebp
  __int64 v2; // rbx
  __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v6; // rbx
  _QWORD v7[49]; // [rsp+0h] [rbp-188h] BYREF

  v1 = -1;
  v2 = -1;
  v7[45] = __readfsqword(0x28u);
  qmemcpy(v7, a1, 0x168u);
  v3 = v7[3];
  if ( LOWORD(v7[3]) == 163 )
  {
    v6 = v7[6];
    v1 = HIWORD(v7[10]);
    decode_insn(v7, v7[2] + WORD1(v7[3]));
    v2 = -v6;
    v3 = v7[3];
  }
  v4 = 0;
  if ( v3 == 101 && HIWORD(v7[5]) == 14 && HIWORD(v7[15]) == 14 )
  {
    if ( BYTE1(v7[10]) == 1 )
    {
      if ( HIWORD(v7[10]) == v1 )
        return v2;
    }
    else if ( v1 == -1 && BYTE1(v7[10]) == 5 )
    {
      return -v7[11];
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
