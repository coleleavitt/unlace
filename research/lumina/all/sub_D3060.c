__int64 __fastcall sub_D3060(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rbx
  bool v7; // zf
  __int64 result; // rax
  int v9; // r12d
  __int64 v10; // rdi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // [rsp+8h] [rbp-30h]
  unsigned int v14; // [rsp+Ch] [rbp-2Ch]

  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
  {
    v14 = a3;
    sub_CC740(a1);
    a3 = v14;
    a2 = (unsigned int)a2;
  }
  v7 = (*(_BYTE *)(v6 + 40) & 2) == 0;
  *(_BYTE *)(v6 + 38) = a3;
  if ( v7 )
  {
    v9 = *(_DWORD *)(v6 + 52) - *(_DWORD *)(v6 + 56);
    if ( v9 < (int)a3 )
      v9 = a3;
    if ( (unsigned int)(a2 - 512) <= 0xFE00 && ((unsigned int)a2 & ((_DWORD)a2 - 1)) == 0 )
    {
      if ( v9 > 32 && (_DWORD)a2 == 512 )
        a2 = 1024;
      v10 = *(_QWORD *)(v6 + 136);
      *(_DWORD *)(v6 + 52) = a2;
      if ( v10 )
      {
        v11 = (_QWORD *)(v10 - 4);
        *(_QWORD *)(v6 + 136) = v11;
        sub_CBC10(v11, a2, a3);
        *(_QWORD *)(v6 + 136) = 0;
      }
    }
    result = sub_D2EC0(*(_QWORD *)v6, v6 + 52, v9);
    v12 = *(_DWORD *)(v6 + 52) - (unsigned int)(unsigned __int16)v9;
    *(_DWORD *)(v6 + 56) = v12;
    if ( a4 )
      *(_WORD *)(v6 + 40) |= 2u;
    if ( *(_BYTE *)(a1 + 17) )
    {
      v7 = (*(_DWORD *)(a1 + 20))-- == 1;
      if ( v7 )
      {
        v13 = result;
        sub_CC7D0(a1, v6 + 52, v12);
        return v13;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      v7 = (*(_DWORD *)(a1 + 20))-- == 1;
      if ( v7 )
        sub_CC7D0(a1, a2, a3);
    }
    return 8;
  }
  return result;
}
