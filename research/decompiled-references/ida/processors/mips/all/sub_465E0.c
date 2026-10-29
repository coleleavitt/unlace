_BOOL8 __fastcall sub_465E0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ecx
  _BOOL4 v5; // r13d
  unsigned __int8 v6; // cl
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  int v9; // r14d
  int word; // eax
  int v11; // ecx
  __int64 v13; // rdx

  v3 = *(_QWORD *)(a3 + 32) + *(_QWORD *)(a3 + 24);
  v4 = 64 - (unsigned __int8)a1[21];
  if ( (unsigned __int64)v4 > 0x3F )
  {
    if ( v3 < -1 )
      goto LABEL_3;
    v13 = 0;
  }
  else
  {
    if ( (__int64)0x8000000000000000LL >> v4 > v3 )
    {
LABEL_3:
      v5 = 0;
      goto LABEL_4;
    }
    v13 = 0x7FFFFFFFFFFFFFFFLL >> v4;
  }
  v5 = (v3 & 1) == 0;
  if ( v13 < v3 )
    v5 = 0;
LABEL_4:
  v6 = a1[22];
  v7 = 0;
  v8 = (unsigned __int64)v3 >> v6;
  if ( v6 < 0x40u )
    v7 = v8;
  if ( a1[20] == 2 )
  {
    word = (unsigned __int16)get_word(a2);
  }
  else
  {
    v9 = get_word(a2);
    word = (unsigned __int16)get_word(a2 + 2) | (v9 << 16);
  }
  v11 = (unsigned __int8)a1[21] - (unsigned __int8)a1[22];
  if ( (unsigned __int64)v11 <= 0x1F )
    v7 = word & -(1 << v11) | v7 & ((1 << v11) - 1);
  if ( a1[20] == 2 )
  {
    put_word(a2, v7);
  }
  else
  {
    put_word(a2, HIWORD(v7));
    put_word(a2 + 2, v7);
  }
  split_sreg_range(a2, 67, 1, 2, 0);
  return v5;
}

