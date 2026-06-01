__int64 __fastcall sub_22D40(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // rdx
  unsigned int *v3; // r8
  __int64 v4; // rdx
  unsigned int *v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v12; // di
  unsigned int *v13; // rax
  unsigned int v14; // esi
  unsigned int v15; // ecx
  unsigned int *v16; // rax
  unsigned int v17; // esi
  unsigned __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]
  unsigned __int64 v20; // [rsp+18h] [rbp-10h]

  v2 = a2[1];
  v20 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = (__int64)&(*a2)[4 * (_QWORD)v2];
  if ( *a2 == (unsigned int *)v4 )
  {
    if ( !*(_BYTE *)(a1 + 13692) )
    {
LABEL_31:
      v10 = 10;
      LODWORD(v8) = 1;
      return (v10 << 32) | (unsigned int)v8;
    }
    goto LABEL_29;
  }
  v5 = *a2;
  do
  {
    if ( *v5 == 1 )
    {
      v6 = v5[1];
      if ( v6 )
      {
        v7 = v5[2];
        HIDWORD(v18) = v6;
        LODWORD(v18) = 1;
        LODWORD(v19) = v7;
        v8 = sub_22AD0(a1, (unsigned int *)&v18);
        v19 = v9;
        v18 = v8;
        v10 = HIDWORD(v8);
        return (v10 << 32) | (unsigned int)v8;
      }
    }
    v5 += 4;
  }
  while ( (unsigned int *)v4 != v5 );
  v12 = *(_BYTE *)(a1 + 13692);
  if ( !v12 )
  {
LABEL_9:
    v13 = v3;
    do
    {
      if ( *v13 == 2 )
      {
        v14 = v13[1];
        if ( v14 )
        {
          if ( !v12 )
            goto LABEL_19;
          v15 = 12;
          if ( v14 >= 0xC )
            v15 = v13[1];
          if ( v15 > 0x11 )
            v15 = 17;
          if ( v14 > 0xD )
          {
            v10 = v15 - 3;
            LODWORD(v8) = 1;
          }
          else
          {
LABEL_19:
            v10 = 10;
            LODWORD(v8) = 1;
          }
          return (v10 << 32) | (unsigned int)v8;
        }
      }
      v13 += 4;
    }
    while ( (unsigned int *)v4 != v13 );
    if ( !v12 || v3[1] <= 0xA )
      goto LABEL_31;
LABEL_29:
    v10 = 14;
    LODWORD(v8) = 1;
    return (v10 << 32) | (unsigned int)v8;
  }
  v16 = *a2;
  while ( 1 )
  {
    v10 = *v16;
    if ( (_DWORD)v10 == 10 )
    {
      v17 = v16[1];
      if ( v17 )
        break;
    }
    v16 += 4;
    if ( (unsigned int *)v4 == v16 )
      goto LABEL_9;
  }
  if ( v17 > 0x13 )
    v10 = 11;
  LODWORD(v8) = 1;
  return (v10 << 32) | (unsigned int)v8;
}

