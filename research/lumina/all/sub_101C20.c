__int64 __fastcall sub_101C20(__int64 a1, __int64 a2, char ***a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rbp
  unsigned __int64 v10; // rdx
  char *v11; // r13
  __int64 v12; // rbx
  signed __int64 v13; // rax
  char v14; // al
  char v15; // si
  char v16; // di
  unsigned int v18; // esi
  unsigned int v19; // edi

  if ( (unsigned int)sub_FEBD0(a1, a2) )
    return sub_E1560(a1, a2, v5, v6, v7, v8);
  v9 = (char *)sub_D1E10(4 * (int)a2 + 1, a2);
  if ( !v9 )
    return sub_E1560(a1, a2, v5, v6, v7, v8);
  v10 = 0;
  if ( (int)a2 <= 0 )
    return sub_F4B60(a1, v9, v10, (void (*)(void))sub_C91C0, 1, v8);
  v11 = v9;
  v12 = (__int64)&a3[(unsigned int)(a2 - 1) + 1];
  do
  {
    while ( 1 )
    {
      v13 = sub_CD0F0(*a3);
      if ( (unsigned __int64)v13 > 0x10FFFF )
      {
        v14 = -67;
        v15 = -65;
        v16 = -17;
        goto LABEL_10;
      }
      if ( v13 > 127 )
        break;
      *v11++ = v13;
LABEL_7:
      if ( ++a3 == (char ***)v12 )
        goto LABEL_11;
    }
    v18 = (unsigned int)v13 >> 6;
    if ( (unsigned int)v13 <= 0x7FF )
    {
      v11 += 2;
      *(v11 - 2) = v18 - 64;
      *(v11 - 1) = (v13 & 0x3F) + 0x80;
      goto LABEL_7;
    }
    v19 = (unsigned int)v13 >> 12;
    v15 = (v18 & 0x3F) + 0x80;
    if ( (unsigned int)v13 > 0xFFFF )
    {
      v11[1] = (v19 & 0x3F) + 0x80;
      v11[2] = v15;
      *v11 = ((unsigned int)v13 >> 18) - 16;
      v11[3] = (v13 & 0x3F) + 0x80;
      v11 += 4;
      goto LABEL_7;
    }
    v16 = v19 - 32;
    v14 = (v13 & 0x3F) + 0x80;
LABEL_10:
    ++a3;
    *v11 = v16;
    v11[1] = v15;
    v11[2] = v14;
    v11 += 3;
  }
  while ( a3 != (char ***)v12 );
LABEL_11:
  v10 = v11 - v9;
  return sub_F4B60(a1, v9, v10, (void (*)(void))sub_C91C0, 1, v8);
}
