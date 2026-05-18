void __fastcall sub_C6A60(__int64 a1, int a2, int *a3)
{
  __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // esi
  int *v8; // rsi
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rax

  if ( a1 )
  {
    v4 = a1;
    v5 = a2 - 1;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v4 + 8);
      if ( !v7 )
        break;
      v6 = v5;
      v5 %= v7;
      v4 = *(_QWORD *)(v4 + 8LL * (v6 / v7) + 16);
      if ( !v4 )
        return;
    }
    if ( *(_DWORD *)v4 > 0xF80u )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v4 + 16);
      *((_QWORD *)a3 + 61) = *(_QWORD *)(v4 + 504);
      qmemcpy(
        (void *)((unsigned __int64)(a3 + 2) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v4 + 16 - ((_QWORD)a3 - ((unsigned __int64)(a3 + 2) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)a3 - (((_DWORD)a3 + 8) & 0xFFFFFFF8) + 496) >> 3));
      *(_QWORD *)(v4 + 16) = 0;
      *(_QWORD *)(v4 + 504) = 0;
      v8 = a3;
      memset(
        (void *)((v4 + 24) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((_DWORD)v4 + 16 - (((_DWORD)v4 + 24) & 0xFFFFFFF8) + 496) >> 3));
      v9 = v5 + 1;
      *(_DWORD *)(v4 + 4) = 0;
      do
      {
        v10 = *v8;
        if ( *v8 && v10 != v9 )
        {
          ++*(_DWORD *)(v4 + 4);
          v11 = (v10 - 1) % 0x7Cu;
          while ( 1 )
          {
            v12 = v11 + 4LL;
            if ( !*(_DWORD *)(v4 + 4 * v12) )
              break;
            if ( ++v11 == 124 )
              v11 = 0;
          }
          *(_DWORD *)(v4 + 4 * v12) = *v8;
        }
        ++v8;
      }
      while ( v8 != a3 + 124 );
    }
    else
    {
      *(_BYTE *)(v4 + (v5 >> 3) + 16) &= ~(1 << (v5 & 7));
    }
  }
}
