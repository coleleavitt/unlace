__int64 __fastcall sub_7E660(__int64 *a1, unsigned __int64 *a2, double a3)
{
  int v4; // eax
  unsigned int v6; // r12d
  __int64 v7; // rax
  _QWORD *v8; // r8
  int v9; // esi
  unsigned int v10; // r9d
  char *v11; // rax
  unsigned __int64 v12; // rdi
  char v13; // dl
  unsigned __int8 v14; // dl
  int v15; // r11d
  unsigned __int64 v16; // rdx
  char v17; // cl
  char *v18; // rax
  char *v19; // rcx
  unsigned __int8 v20; // r11
  unsigned __int64 v21; // rax

  qfree(*a1);
  *a1 = 0;
  v4 = sub_7CD20(a2, a3);
  a1[1] = v4;
  if ( !v4 )
    return 1;
  v6 = (v4 + 63) & 0xFFFFFFC0;
  v7 = qalloc();
  *a1 = v7;
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    v9 = (unsigned __int64)(a1[1] + 7) >> 3;
    v10 = v6 - v9;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = (char *)*a2;
        v12 = a2[1];
        if ( *a2 >= v12 )
          break;
        v13 = *v11;
        *a2 = (unsigned __int64)(v11 + 1);
        if ( v13 < 0 )
        {
          v20 = (v13 & 0x3F) + 2;
          if ( v20 > v9 )
          {
            if ( !under_debugger )
              sub_383060(0xCBEEu, a3);
            goto LABEL_34;
          }
          v9 -= v20;
          v21 = 0x101010101010101LL * (unsigned __int8)-((v13 & 0x40) != 0);
          if ( v20 >= 8u )
          {
            *v8 = v21;
            *(_QWORD *)((char *)v8 + v20 - 8) = v21;
            memset64(
              (void *)((unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              v21,
              (v20 + (unsigned int)v8 - (((_DWORD)v8 + 8) & 0xFFFFFFF8)) >> 3);
          }
          else if ( (v20 & 4) != 0 )
          {
            *(_DWORD *)v8 = v21;
            *(_DWORD *)((char *)v8 + v20 - 4) = v21;
          }
          else if ( (v13 & 0x3F) != 0xFE )
          {
            *(_BYTE *)v8 = -((v13 & 0x40) != 0);
            if ( (v20 & 2) != 0 )
              *(_WORD *)((char *)v8 + v20 - 2) = v21;
          }
          v8 = (_QWORD *)((char *)v8 + v20);
        }
        else
        {
          v14 = v13 + 1;
          v15 = v14;
          if ( v14 > v9 )
          {
            if ( !under_debugger )
              sub_383060(0xCBEFu, a3);
            goto LABEL_34;
          }
          if ( v12 < (unsigned __int64)&v11[v14 + 1] )
          {
            if ( !under_debugger )
              sub_383060(0xC59Bu, a3);
            goto LABEL_34;
          }
          v16 = (unsigned __int64)v8 + v14;
          if ( (unsigned __int64)v8 < v16 )
          {
            *a2 = (unsigned __int64)(v11 + 2);
            v17 = v11[1];
            v18 = (char *)v8 + 1;
            *(_BYTE *)v8 = v17;
            if ( (unsigned __int64)v8 + 1 < v16 )
            {
              do
              {
                v19 = (char *)*a2;
                ++v18;
                ++*a2;
                *(v18 - 1) = *v19;
              }
              while ( (char *)v16 != v18 );
            }
          }
          v9 -= v15;
          v8 = (_QWORD *)v16;
        }
        if ( !v9 )
          goto LABEL_14;
      }
      if ( !under_debugger )
        sub_383060(0xC596u, a3);
LABEL_34:
      BUG();
    }
LABEL_14:
    if ( v10 )
      memset(v8, 0, v10);
    return 1;
  }
  return 0;
}

