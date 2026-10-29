__int64 __fastcall sub_78C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r11
  int v4; // ebx
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r8
  int i; // ecx
  int v11; // edi
  int v12; // ecx
  __int64 v13; // rsi

  result = *(unsigned int *)(a1 + 232);
  if ( (int)result > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = 0;
      v6 = v3 + *(_QWORD *)(a1 + 224);
      result = *(_BYTE *)(v6 + 5) & 1;
      *(_BYTE *)(v6 + 112) = result;
      v7 = *(_QWORD *)(a1 + 224);
      v8 = v7 + v3;
      do
      {
        v9 = 16LL * v5;
        if ( *(_QWORD *)(v8 + v9 + 8) )
        {
          for ( i = 0; i != 32; ++i )
          {
            result = *(_DWORD *)(v8 + v9 + 16) & (unsigned int)(1 << i);
            if ( (*(_DWORD *)(v8 + v9 + 16) & (1 << i)) != 0 )
              break;
            ++*(_DWORD *)(v8 + v9 + 20);
            v7 = *(_QWORD *)(a1 + 224);
            v8 = v7 + v3;
          }
        }
        ++v5;
      }
      while ( v5 != 3 );
      if ( (*(_BYTE *)(v8 + 5) & 1) != 0 )
      {
        v11 = 0;
        while ( 1 )
        {
          result = v7 + 16 * (v11 + 4LL);
          if ( *(_QWORD *)(result + v3) )
          {
            v12 = 0;
            while ( 1 )
            {
              v13 = v3 + 16LL * v11 + v7;
              result = *(_DWORD *)(v13 + 72) & (unsigned int)(1 << v12);
              if ( (*(_DWORD *)(v13 + 72) & (1 << v12)) != 0 )
                break;
              ++v12;
              ++*(_DWORD *)(v13 + 76);
              if ( v12 == 32 )
                break;
              v7 = *(_QWORD *)(a1 + 224);
            }
          }
          if ( ++v11 == 3 )
            break;
          v7 = *(_QWORD *)(a1 + 224);
        }
      }
      ++v4;
      v3 += 120;
    }
    while ( *(_DWORD *)(a1 + 232) > v4 );
  }
  return result;
}

