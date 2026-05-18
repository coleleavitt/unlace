__int64 *__fastcall sub_F04A0(__int64 *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rax
  __int64 *v8; // rbx
  int v9; // edx
  __int64 v11; // rdi

  v7 = sub_DBF10(*a1, 72);
  v8 = v7;
  if ( v7 )
  {
    v7[8] = 0;
    *(_OWORD *)v7 = 0;
    *(_BYTE *)v7 = a2;
    *((_OWORD *)v7 + 1) = 0;
    *((_OWORD *)v7 + 2) = 0;
    *((_OWORD *)v7 + 3) = 0;
    *((_WORD *)v7 + 25) = -1;
    if ( a4 )
    {
      v7[3] = a4;
      *((_DWORD *)v7 + 1) |= *(_DWORD *)(a4 + 4) & 0x200104;
    }
    if ( a3 )
    {
      v7[2] = a3;
      *((_DWORD *)v7 + 1) |= *(_DWORD *)(a3 + 4) & 0x200104;
    }
    sub_CE610((__int64)v7);
    v9 = *(_DWORD *)(*a1 + 148);
    if ( *((_DWORD *)v8 + 10) <= v9 )
      return v8;
    sub_DBD10((__int64)a1, "Expression tree is too large (maximum depth %d)", v9);
    return v8;
  }
  else
  {
    v11 = *a1;
    if ( a3 )
    {
      sub_D7720(v11, a3);
      v11 = *a1;
    }
    if ( !a4 )
      return v8;
    sub_D7720(v11, a4);
    return nullptr;
  }
}
