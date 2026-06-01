__int64 __fastcall sub_961F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  _BYTE *v9; // rsi
  int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = *(_QWORD *)(a1 + 288);
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    v5 = -1;
    do
    {
      while ( 1 )
      {
        v6 = v3 + *(_QWORD *)(a1 + 280);
        if ( !*(_DWORD *)(a1 + 248) )
        {
          v7 = (_BYTE *)sub_95C10(v3 + *(_QWORD *)(a1 + 280));
          if ( v7 )
          {
            v8 = *(_QWORD *)(a1 + 272);
            v9 = *(_BYTE **)(a1 + 256);
            if ( *v7 == 47 )
            {
              *(_DWORD *)(a1 + 248) = 2;
              if ( v8 <= 1 )
              {
                v12 = qvector_reserve(a1 + 256, v9, 2, 1);
                *(_QWORD *)(a1 + 256) = v12;
                v9 = (_BYTE *)v12;
              }
              *(_QWORD *)(a1 + 264) = 2;
              *v9 = 47;
              *(_BYTE *)(*(_QWORD *)(a1 + 256) + 1LL) = 0;
            }
            else
            {
              *(_DWORD *)(a1 + 248) = 1;
              if ( v8 <= 1 )
              {
                v13 = qvector_reserve(a1 + 256, v9, 2, 1);
                *(_QWORD *)(a1 + 256) = v13;
                v9 = (_BYTE *)v13;
              }
              *(_QWORD *)(a1 + 264) = 2;
              *v9 = 92;
              *(_BYTE *)(*(_QWORD *)(a1 + 256) + 1LL) = 0;
            }
          }
        }
        if ( v5 == -1 || *(unsigned __int16 *)(*(_QWORD *)(v6 + 216) + 40LL) < v5 )
          break;
        ++v4;
        v3 += 264;
        if ( v2 == v4 )
          goto LABEL_13;
      }
      ++v4;
      v5 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 216) + 40LL);
      v3 += 264;
    }
    while ( v2 != v4 );
LABEL_13:
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 192LL) = v5;
  }
  v10 = 0;
  for ( result = 0; (unsigned __int64)v10 < *(_QWORD *)(a1 + 112); result = v10 )
  {
    ++v10;
    sub_961F0(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * result), a2);
  }
  return result;
}
