unsigned __int64 __fastcall sub_8FC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rbx
  _DWORD *v4; // rax
  bool v5; // r14
  int v6; // ebx
  bool v7; // al
  __int64 v9; // [rsp+20h] [rbp-F8h]
  __int64 v10; // [rsp+40h] [rbp-D8h]
  _BYTE v11[136]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v12; // [rsp+D8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  v12 = __readfsqword(0x28u);
  v3 = (_QWORD *)getseg();
  if ( (getinf() & 0x200) != 0 )
  {
    if ( v3 )
    {
      v4 = (_DWORD *)a1[2];
      v5 = *v3 == v2;
      v6 = v4[17];
      if ( v6 <= v4[18] )
      {
        while ( v4[20] == v6 )
        {
LABEL_9:
          if ( v4[18] < ++v6 )
            return v12 - __readfsqword(0x28u);
        }
        if ( !(unsigned __int8)get_sreg_range() )
        {
LABEL_8:
          v4 = (_DWORD *)a1[2];
          goto LABEL_9;
        }
        v7 = v5;
        if ( !v2 )
        {
          if ( !(unsigned __int8)get_prev_sreg_range() )
            goto LABEL_12;
          v7 = v5 || v9 != v10;
        }
        if ( !v7 )
          goto LABEL_8;
LABEL_12:
        btoa64();
        sub_7D40(
          a2,
          0xFFFF,
          (__int64)qword_F3B0,
          *(_QWORD *)(a1[3] + 48LL),
          *(_QWORD *)(*(_QWORD *)(a1[2] + 56LL) + 8LL * v6),
          v11,
          0.0,
          a1[29] + (v9 << 14));
        goto LABEL_8;
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}

