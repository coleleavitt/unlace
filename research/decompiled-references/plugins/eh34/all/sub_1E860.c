void __fastcall sub_1E860(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 i; // r10
  __int64 v9; // rdx
  __int64 j; // rdi
  __int64 v11; // rsi
  __int64 k; // rax

  if ( *(_BYTE *)a1 == 4 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 != a2 )
    {
      v3 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 8) = a2;
      v4 = a2 - v2;
      v5 = *(_QWORD **)(a1 + 64);
      v6 = &v5[2 * v3];
      if ( v5 != v6 )
      {
        if ( (((_BYTE)v6 - (_BYTE)v5) & 0x10) == 0 || (*v5 += v4, v5 += 2, v6 != v5) )
        {
          do
          {
            *v5 += v4;
            v5[2] += v4;
            v5 += 4;
          }
          while ( v6 != v5 );
        }
      }
      v7 = *(_QWORD *)(a1 + 40);
      for ( i = v7 + 40LL * *(_QWORD *)(a1 + 48); i != v7; v7 += 40 )
      {
        v9 = *(_QWORD *)(v7 + 16);
        for ( j = v9 + 72LL * *(_QWORD *)(v7 + 24); v9 != j; v9 += 72 )
        {
          while ( 1 )
          {
            if ( (unsigned __int8)(((*(_BYTE *)(v9 + 64) >> 4) & 3) - 1) <= 1u )
            {
              v11 = *(_QWORD *)(v9 + 40);
              if ( v11 )
                break;
            }
            v9 += 72;
            if ( v9 == j )
              goto LABEL_16;
          }
          for ( k = 0; k != v11; ++k )
            *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * k) += v4;
        }
LABEL_16:
        ;
      }
    }
  }
}
