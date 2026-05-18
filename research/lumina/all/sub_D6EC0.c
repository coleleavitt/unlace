__int64 __fastcall sub_D6EC0(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r14
  unsigned int v3; // r13d
  unsigned int v4; // ebp
  __int64 v5; // r12
  _DWORD *v6; // r15
  unsigned int *v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // eax
  unsigned int *v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int *v16; // rax
  __int64 v17; // r13
  unsigned int *v18; // r14
  __int64 v19; // rsi
  unsigned int *v20; // rbp
  __int64 v21; // rsi

  if ( !a1 )
    return 0;
  v2 = a1;
  v3 = a2 - 1;
  if ( *a1 > 0xF80u )
  {
    v4 = a1[2];
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = v3 / v4;
        v3 %= v4;
        v6 = &v2[2 * v5];
        v11 = *((unsigned int **)v6 + 2);
        if ( v11 )
        {
          if ( *v11 <= 0xF80 )
            goto LABEL_10;
        }
        else
        {
          v7 = (unsigned int *)sub_D2260(0x200u, a2);
          v11 = v7;
          if ( !v7 )
          {
            *(_QWORD *)&v2[2 * v5 + 4] = 0;
            return 7;
          }
          *v7 = v4;
          *((_QWORD *)v6 + 2) = v7;
          if ( *v7 <= 0xF80 )
            goto LABEL_10;
        }
        v4 = v11[2];
        v2 = v11;
        if ( !v4 )
          goto LABEL_15;
      }
    }
    v11 = a1;
LABEL_15:
    v12 = v3 + 1;
    v13 = v3 % 0x7C;
    v14 = v11[v13 + 4];
    v15 = v3 % 0x7C;
    if ( v14 )
    {
      while ( v12 != v14 )
      {
        if ( ++v15 == 124 )
          v15 = 0;
        v13 = v15;
        v14 = v11[v15 + 4];
        if ( !v14 )
        {
          v9 = v11[1];
          if ( v9 > 0x3D )
            goto LABEL_17;
          goto LABEL_12;
        }
      }
    }
    else
    {
      v9 = v11[1];
      if ( v9 > 0x7A )
      {
LABEL_17:
        v8 = 7;
        v16 = (unsigned int *)sub_D1E10(496, 0);
        v17 = (__int64)v16;
        if ( v16 )
        {
          v18 = v16 + 124;
          *(_QWORD *)v16 = *((_QWORD *)v11 + 2);
          *((_QWORD *)v16 + 61) = *((_QWORD *)v11 + 63);
          qmemcpy(
            (void *)((unsigned __int64)(v16 + 2) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)((char *)(v11 + 4) - ((char *)v16 - ((unsigned __int64)(v16 + 2) & 0xFFFFFFFFFFFFFFF8LL))),
            8LL * (((unsigned int)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8) + 496) >> 3));
          *((_QWORD *)v11 + 2) = 0;
          *((_QWORD *)v11 + 63) = 0;
          v19 = v12;
          v20 = v16;
          memset(
            (void *)((unsigned __int64)(v11 + 6) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * (((_DWORD)v11 + 16 - (((_DWORD)v11 + 24) & 0xFFFFFFF8) + 496) >> 3));
          v11[2] = ((unsigned __int64)*v11 + 61) / 0x3E;
          v8 = sub_D6EC0(v11, v19);
          do
          {
            v21 = *v20;
            if ( (_DWORD)v21 )
              v8 |= sub_D6EC0(v11, v21);
            ++v20;
          }
          while ( v18 != v20 );
          sub_C91C0(v17, v21);
        }
        return v8;
      }
LABEL_12:
      v11[1] = v9 + 1;
      v11[v13 + 4] = v12;
    }
    return 0;
  }
  v11 = a1;
LABEL_10:
  v8 = 0;
  *((_BYTE *)v11 + (v3 >> 3) + 16) |= 1 << (v3 & 7);
  return v8;
}
