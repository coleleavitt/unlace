__int64 __fastcall sub_17460(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // ebp
  int v4; // ebp
  __int16 v5; // r13
  unsigned __int16 v6; // ax
  int v7; // ebp
  unsigned __int8 v8; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( qlread(*(_QWORD *)(a1 + 16), &v8, 1) != 1 )
    *(_BYTE *)a1 = 1;
  result = v8;
  if ( (v8 & 0x80u) != 0 )
  {
    if ( (~v8 & 0xC0) != 0 )
    {
      v7 = (v8 << 8) & 0x7F00;
      if ( qlread(*(_QWORD *)(a1 + 16), &v8, 1) != 1 )
        *(_BYTE *)a1 = 1;
      return v7 + (unsigned int)v8;
    }
    else
    {
      if ( (~v8 & 0xE0) != 0 )
      {
        v2 = v8 << 8;
        LOWORD(v2) = v2 & 0x3F00;
        v3 = v2;
        if ( qlread(*(_QWORD *)(a1 + 16), &v8, 1) != 1 )
          *(_BYTE *)a1 = 1;
        v4 = v8 + v3;
        if ( qlread(*(_QWORD *)(a1 + 16), &v8, 1) != 1 )
          *(_BYTE *)a1 = 1;
        v5 = v8 << 8;
        if ( qlread(*(_QWORD *)(a1 + 16), &v8, 1) != 1 )
          *(_BYTE *)a1 = 1;
        v6 = v5 | v8;
      }
      else
      {
        v4 = sub_17340(a1);
        v6 = sub_17340(a1);
      }
      return (v4 << 16) + (unsigned int)v6;
    }
  }
  return result;
}

