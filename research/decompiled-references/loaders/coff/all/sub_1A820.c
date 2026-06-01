__int64 __fastcall sub_1A820(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int16 v7; // ax
  __int64 v9; // rax

  v4 = *(unsigned __int16 *)(a3 + 12);
  if ( (unsigned __int16)v4 <= 0xCu )
  {
    v5 = 6210;
    if ( _bittest64(&v5, v4) )
    {
      v9 = getseg(a1[5]);
      a1[7] -= get_segm_base(v9);
    }
  }
  v6 = sub_13DE0(a1, a2, a3);
  if ( !(_BYTE)v6 )
    return v6;
  v7 = *(_WORD *)(a3 + 12);
  if ( v7 != 2 && v7 != 19 )
    return v6;
  sub_5F40(0xBB8u, 1);
  return v6;
}
