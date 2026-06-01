_QWORD *sub_2CA0()
{
  __int64 v0; // rax
  _QWORD *v1; // r13
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // ax
  char v4; // bl
  int v6; // ebp
  unsigned __int16 v7; // bx
  __int16 v8; // dx
  unsigned __int8 v9; // [rsp+5h] [rbp-33h] BYREF
  char v10; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int8 v11; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v0 = qalloc(16);
  if ( !v0 )
    sub_2890((__int64)"NLM-loader (for unpacking)");
  v1 = (_QWORD *)v0;
  v2 = HIWORD(dword_82C2);
  if ( HIWORD(dword_82C2) <= 0xFFu )
  {
    if ( qlread(qword_8220, &v9, 1) != 1 )
      goto LABEL_18;
    v2 = v9 | 0x8000;
  }
  HIWORD(dword_82C2) = v2 >> 1;
  if ( (v2 & 1) == 0 )
  {
    *v1 = sub_2CA0();
    v1[1] = sub_2CA0();
    return v1;
  }
  *v1 = 0;
  v3 = HIWORD(dword_82C2);
  if ( HIWORD(dword_82C2) > 0xFFu )
  {
    v6 = 8;
    v7 = 0;
    while ( 1 )
    {
      v8 = v3 << 15;
      v3 >>= 1;
      v7 = v8 | (v7 >> 1);
      if ( !--v6 )
        break;
      if ( v3 <= 0xFFu )
      {
        if ( qlread(qword_8220, &v11, 1) != 1 )
          goto LABEL_18;
        v3 = v11 | 0x8000;
      }
    }
    HIWORD(dword_82C2) = v3;
    v4 = HIBYTE(v7);
    goto LABEL_7;
  }
  if ( qlread(qword_8220, &v10, 1) != 1 )
LABEL_18:
    sub_2BB0(897);
  v4 = v10;
LABEL_7:
  *((_BYTE *)v1 + 8) = v4;
  return v1;
}

