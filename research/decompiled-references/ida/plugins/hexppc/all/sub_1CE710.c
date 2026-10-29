__int64 __fastcall sub_1CE710(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int16 v4; // dx
  int v5; // r13d
  _QWORD v7[5]; // [rsp+0h] [rbp-68h] BYREF
  int v8; // [rsp+28h] [rbp-40h]
  __int16 v9; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4 = *(_WORD *)(a1 + 40);
  if ( (v4 & 1) != 0 || (v5 = 0, (v4 & 0x100) != 0) )
  {
    v7[1] = 0;
    v7[2] = a2;
    v7[3] = a3;
    v7[4] = 0;
    v7[0] = off_4CBA90;
    v8 = 0;
    v9 = v4;
    sub_11BD20(a3, v7);
    v5 = v8;
  }
  return v5 + (unsigned int)(unsigned __int8)sub_1CE500((_QWORD *)a1, a2, (__int64)a3);
}

