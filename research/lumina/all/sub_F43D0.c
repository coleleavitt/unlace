unsigned __int64 __fastcall sub_F43D0(__int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  _DWORD *v3; // r13
  __int64 v4; // r12
  _DWORD *v5; // rbx
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdx

  result = *(unsigned int *)(a2 + 4);
  if ( (result & 0x80u) == 0LL )
  {
    LOBYTE(result) = result | 0x80;
    v3 = *(_DWORD **)(a2 + 40);
    *(_DWORD *)(a2 + 4) = result;
    v4 = *a1;
    result = (unsigned int)*v3;
    v5 = v3 + 2;
    if ( (int)result > 0 )
    {
      v6 = 0;
      do
      {
        v7 = *((_QWORD *)v5 + 4);
        if ( (*(_BYTE *)(v7 + 49) & 0x40) != 0 )
        {
          v8 = *((_QWORD *)v5 + 5);
          if ( v8 )
          {
            while ( *(_QWORD *)(v8 + 80) )
              v8 = *(_QWORD *)(v8 + 80);
            result = sub_F41F0(v4, v7, v8, 64);
          }
        }
        ++v6;
        v5 += 26;
      }
      while ( *v3 > v6 );
    }
  }
  return result;
}
