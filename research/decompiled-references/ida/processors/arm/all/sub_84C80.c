unsigned __int64 __fastcall sub_84C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  bool v7; // zf
  char v8; // dl
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax

  result = a3 + 120;
  if ( !*(_BYTE *)(a3 + 121) )
    result = a3 + 80;
  v7 = *(_WORD *)(a3 + 24) == 13;
  v8 = *(_BYTE *)(result + 33);
  if ( !v7 )
    a1 = a2;
  if ( v8 )
  {
    if ( v8 == 1 && (unsigned __int8)(*(_BYTE *)(a1 + 24) - 10) <= 3u )
    {
      v9 = *(_QWORD *)(result + 8);
      if ( v9 )
      {
        v10 = *(_QWORD **)a1;
        v11 = *(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)a1 != v11 )
        {
          a2 = ((_BYTE)v11 - (_BYTE)v10) & 8;
          if ( (((_BYTE)v11 - (_BYTE)v10) & 8) == 0 || (*v10 >>= v9, v10 += 3, (_QWORD *)v11 != v10) )
          {
            do
            {
              *v10 >>= v9;
              v10[3] >>= v9;
              v10 += 6;
            }
            while ( (_QWORD *)v11 != v10 );
          }
        }
        return sub_83300(a1, a2, v11, v9, a5, a6);
      }
    }
  }
  else if ( (unsigned __int8)(*(_BYTE *)(a1 + 24) - 10) <= 3u )
  {
    v9 = *(_QWORD *)(result + 8);
    if ( v9 )
    {
      v12 = *(_QWORD **)a1;
      v11 = *(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)a1 != v11 )
      {
        a2 = ((_BYTE)v11 - (_BYTE)v12) & 8;
        if ( (((_BYTE)v11 - (_BYTE)v12) & 8) == 0 || (*v12 <<= v9, v12 += 3, (_QWORD *)v11 != v12) )
        {
          do
          {
            *v12 <<= v9;
            v12[3] <<= v9;
            v12 += 6;
          }
          while ( (_QWORD *)v11 != v12 );
        }
      }
      return sub_83300(a1, a2, v11, v9, a5, a6);
    }
  }
  return result;
}
