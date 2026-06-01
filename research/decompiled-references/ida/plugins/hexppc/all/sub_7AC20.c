__int64 __fastcall sub_7AC20(__int64 *a1, unsigned __int64 *a2)
{
  int v3; // eax
  unsigned int v5; // r12d
  __int64 v6; // rax
  _QWORD *v7; // r8
  int v8; // esi
  unsigned int v9; // r9d
  char *v10; // rax
  unsigned __int64 v11; // rdi
  char v12; // dl
  unsigned __int8 v13; // dl
  int v14; // r11d
  unsigned __int64 v15; // rdx
  char v16; // cl
  char *v17; // rax
  char *v18; // rcx
  unsigned __int8 v19; // r11
  unsigned __int64 v20; // rax

  qfree();
  *a1 = 0;
  v3 = sub_792E0(a2);
  a1[1] = v3;
  if ( !v3 )
    return 1;
  v5 = (v3 + 63) & 0xFFFFFFC0;
  v6 = qalloc();
  *a1 = v6;
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v8 = (unsigned __int64)(a1[1] + 7) >> 3;
    v9 = v5 - v8;
    if ( v8 )
    {
      while ( 1 )
      {
        v10 = (char *)*a2;
        v11 = a2[1];
        if ( *a2 >= v11 )
          break;
        v12 = *v10;
        *a2 = (unsigned __int64)(v10 + 1);
        if ( v12 < 0 )
        {
          v19 = (v12 & 0x3F) + 2;
          if ( v19 > v8 )
          {
            if ( !under_debugger )
              sub_37EEE0(52206);
            goto LABEL_34;
          }
          v8 -= v19;
          v20 = 0x101010101010101LL * (unsigned __int8)-((v12 & 0x40) != 0);
          if ( v19 >= 8u )
          {
            *v7 = v20;
            *(_QWORD *)((char *)v7 + v19 - 8) = v20;
            memset64(
              (void *)((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              v20,
              (v19 + (unsigned int)v7 - (((_DWORD)v7 + 8) & 0xFFFFFFF8)) >> 3);
          }
          else if ( (v19 & 4) != 0 )
          {
            *(_DWORD *)v7 = v20;
            *(_DWORD *)((char *)v7 + v19 - 4) = v20;
          }
          else if ( (v12 & 0x3F) != 0xFE )
          {
            *(_BYTE *)v7 = -((v12 & 0x40) != 0);
            if ( (v19 & 2) != 0 )
              *(_WORD *)((char *)v7 + v19 - 2) = v20;
          }
          v7 = (_QWORD *)((char *)v7 + v19);
        }
        else
        {
          v13 = v12 + 1;
          v14 = v13;
          if ( v13 > v8 )
          {
            if ( !under_debugger )
              sub_37EEE0(52207);
            goto LABEL_34;
          }
          if ( v11 < (unsigned __int64)&v10[v13 + 1] )
          {
            if ( !under_debugger )
              sub_37EEE0(50587);
            goto LABEL_34;
          }
          v15 = (unsigned __int64)v7 + v13;
          if ( (unsigned __int64)v7 < v15 )
          {
            *a2 = (unsigned __int64)(v10 + 2);
            v16 = v10[1];
            v17 = (char *)v7 + 1;
            *(_BYTE *)v7 = v16;
            if ( (unsigned __int64)v7 + 1 < v15 )
            {
              do
              {
                v18 = (char *)*a2;
                ++v17;
                ++*a2;
                *(v17 - 1) = *v18;
              }
              while ( (char *)v15 != v17 );
            }
          }
          v8 -= v14;
          v7 = (_QWORD *)v15;
        }
        if ( !v8 )
          goto LABEL_14;
      }
      if ( !under_debugger )
        sub_37EEE0(50582);
LABEL_34:
      BUG();
    }
LABEL_14:
    if ( v9 )
      memset(v7, 0, v9);
    return 1;
  }
  return 0;
}

