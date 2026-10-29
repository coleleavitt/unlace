__int64 __fastcall sub_8C70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  int v8; // ecx
  __int16 *v9; // rcx
  __int64 result; // rax
  int v11; // esi
  __int64 v12; // rcx
  unsigned int v13; // [rsp+Ch] [rbp-Ch]

  v7 = (a4 >> 7) & 0x1F;
  if ( (a4 & 0x800) != 0 )
  {
    if ( (unsigned int)v7 > 0x17 )
      *(_BYTE *)(a2 + 32) -= 4;
  }
  else
  {
    *(_BYTE *)(a2 + 32) -= 2;
    if ( (_DWORD)v7 == 1 )
    {
      v8 = (a4 >> 13) & 0x1F;
      if ( ((a4 >> 13) & 0x1F) == 0x10 )
      {
        v9 = &word_F6E6;
        return sub_89B0(a1, a2, a4, (__int64)v9, (a4 & 0x1000) != 0);
      }
      if ( (_BYTE)v8 == 17 )
      {
        v9 = (__int16 *)byte_F6E0;
        return sub_89B0(a1, a2, a4, (__int64)v9, (a4 & 0x1000) != 0);
      }
    }
  }
  result = sub_89B0(a1, a2, a4, a3 + 6 * v7, (a4 & 0x1000) != 0);
  if ( (_DWORD)result )
  {
    v11 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)(v11 - 181) <= 0x1Fu )
    {
      v12 = 3221258241LL;
      if ( _bittest64(&v12, (unsigned int)(v11 - 181)) )
      {
        v13 = result;
        sub_7210(a2);
        return v13;
      }
    }
  }
  return result;
}

