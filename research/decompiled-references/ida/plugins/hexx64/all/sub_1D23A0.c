__int64 __fastcall sub_1D23A0(_QWORD *a1, unsigned __int8 *a2, __int64 a3, double a4)
{
  unsigned int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  int dtype_size; // eax
  int v9; // ebx
  __int64 v11; // r13
  int v12; // ecx
  _DWORD v13[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v4 = sub_414E70((__int64)a1, a3);
  if ( !(_BYTE)v4 )
    return v4;
  v5 = a1[11];
  v6 = v5 + 80LL * a1[12];
  if ( v6 != v5 )
  {
    while ( (*(_BYTE *)(v5 + 72) & 2) == 0 )
    {
      v5 += 80;
      if ( v5 == v6 )
        goto LABEL_9;
    }
    v7 = (_QWORD *)a1[2];
    dtype_size = get_dtype_size();
    v9 = sub_138140(v7, dtype_size, 1, a4);
    if ( v9 == -1 )
    {
      if ( !under_debugger )
        sub_383060(0xCE3Fu, a4);
      BUG();
    }
    v13[2] = v9;
    v13[0] = 1;
    v13[1] = get_dtype_size();
    sub_125180(a2, (unsigned __int8 *)v13);
    sub_11CDA0((__int64)v13);
    return v4;
  }
LABEL_9:
  v11 = *(_QWORD *)(a1[1] + 112LL);
  v12 = get_dtype_size();
  return sub_1D2210(v11, a2, a1 + 16, v12);
}

