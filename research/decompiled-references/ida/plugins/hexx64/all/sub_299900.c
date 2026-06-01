__int64 __fastcall sub_299900(__int64 a1, __int64 *a2, int *a3)
{
  __int64 v4; // rdi
  char tinfo_property; // r13
  int v7; // edx
  unsigned int v8; // r13d
  char v10; // al
  char v11; // al
  unsigned int tinfo_size; // eax
  __int64 v13; // rax
  __int64 v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *a2;
  v14[1] = __readfsqword(0x28u);
  if ( !(_BYTE)v4 || (v4 & 0xE) == 0 && (v4 & 0x30) != 0 )
    goto LABEL_4;
  v14[0] = get_tinfo_property();
  tinfo_property = get_tinfo_property();
  clear_tinfo_t();
  if ( (tinfo_property & 0x3F) == 0x30 )
    goto LABEL_4;
  v10 = get_tinfo_property();
  v7 = *a3;
  if ( (v10 & 0x3E) != 0 && (v10 & 0xFu) <= 8 && (v7 & 3) != 0 )
  {
    v8 = ((*a3 & 2) == 0) + 1;
    if ( v8 == (unsigned int)get_tinfo_property() )
    {
LABEL_4:
      v7 = *a3;
      v8 = 0;
      goto LABEL_5;
    }
    v11 = get_tinfo_property();
    if ( (v11 & 0xE) != 0 || (v11 & 0x30) == 0 )
    {
      v13 = set_tinfo_property();
      v7 = *a3;
      LOBYTE(v8) = v13 != 0;
    }
    else
    {
      tinfo_size = get_tinfo_size();
      sub_32C430(v14, a1, tinfo_size, v8);
      copy_tinfo_t();
      v8 = 1;
      clear_tinfo_t();
      v7 = *a3 | 4;
      *a3 = v7;
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_5:
  if ( (v7 & 8) != 0 )
  {
    v7 &= ~0x20u;
    *a3 = v7;
  }
  if ( (v7 & 0x40) != 0 )
    v8 |= sub_32C700(a1, (_DWORD)a2, 0);
  return v8;
}

