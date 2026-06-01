__int64 __fastcall sub_4A840(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int16 v8; // r14
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 qword; // rdx
  __int64 v14; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-D0h]
  _BYTE v16[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 16);
  v17 = __readfsqword(0x28u);
  v15 = 0;
  v6 = v4;
  v14 = 0;
  if ( get_ea_name(&v14, v4, 3, 0) <= 0 )
  {
    v11 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 144);
    *(_DWORD *)(a2 + 144) &= 0xFFFFE76F;
    v9 = sub_4A420(a1, a2, 0);
    sub_484A0(a2, v9);
    *(_DWORD *)(a2 + 144) |= v8 & 0x1890;
    if ( a3 == 10 )
    {
      if ( (unsigned __int8)getinf(9) == 8 )
        qword = get_qword(v4);
      else
        qword = (unsigned int)get_dword(v4);
      btoa64(v16, 136, qword, 0);
      v6 = 0xFFFF;
      v10 = sub_48290(a2, 0xFFFF, (__int64)&unk_68B5E, v14, v16);
    }
    else
    {
      v6 = a3;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 352LL))(a2, a3);
    }
    v11 = v10;
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, v6, v7, 0.0);
  }
  return v11;
}

