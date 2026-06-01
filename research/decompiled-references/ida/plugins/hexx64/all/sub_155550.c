__int64 __fastcall sub_155550(__int64 a1, __int64 a2, __int64 a3, int *a4, __m128i a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v9; // r15d
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int8 v15; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v16; // [rsp+Fh] [rbp-39h]

  v5 = *(_QWORD *)(a2 + 24);
  v6 = v5 + 80LL * *(_QWORD *)(a2 + 32);
  if ( v5 == v6 )
  {
    return 0;
  }
  else
  {
    v9 = 0;
    do
    {
      if ( *(_BYTE *)v5 != 10 && (get_tinfo_property() & 0xF) == 0xA && *(_DWORD *)(v5 + 4) == *(_DWORD *)(a1 + 84) )
      {
        v11 = sub_13C7E0(a3, v5, a4, 0, v5, 0xFFFFFFFF, a5);
        if ( (_BYTE)v11 )
        {
          if ( (*(_BYTE *)(v5 + 1) & 1) != 0 )
          {
            *(_DWORD *)(v5 + 4) = *(_DWORD *)(a1 + 84);
          }
          else
          {
            v15 = v11;
            sub_11C950((unsigned __int8 *)v5, a1, v12, v13, *(double *)a5.m128i_i64);
            v11 = v15;
          }
          if ( *(_BYTE *)v5 == 10 )
          {
            v14 = *(_QWORD *)(v5 + 8);
            if ( *(_BYTE *)v14 == 5 )
            {
              v16 = v11;
              sub_18D890(*(_QWORD *)(a3 + 64), *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL));
              v11 = v16;
            }
          }
          v9 = v11;
        }
      }
      v5 += 80;
    }
    while ( v6 != v5 );
  }
  return v9;
}

