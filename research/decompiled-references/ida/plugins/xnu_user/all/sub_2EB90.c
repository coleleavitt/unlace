__int64 __fastcall sub_2EB90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  char *v8; // rcx
  _BYTE v10[4104]; // [rsp+0h] [rbp-1048h] BYREF
  unsigned __int64 v11; // [rsp+1008h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v4 = a3 - a2;
  if ( a3 != a2 )
  {
    v5 = a2;
    do
    {
      if ( qlseek() != v5 )
        break;
      v6 = 4096;
      if ( v4 <= 0x1000 )
        v6 = v4;
      v7 = qlread();
      if ( v6 != v7 || (v7 & 3) != 0 )
        break;
      if ( v10 < &v10[v7] )
      {
        v8 = v10;
        while ( (unsigned int)(*(_DWORD *)v8 + 17958194) > 1 && (*(_DWORD *)v8 & 0xFEFFFFFF) != 0xCEFAEDFE )
        {
          v8 += 4;
          if ( v8 >= &v10[v7] )
            goto LABEL_14;
        }
        return v8 - v10 + v5;
      }
LABEL_14:
      v5 += v7;
      v4 -= v7;
    }
    while ( v4 );
  }
  return a3;
}

