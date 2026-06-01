unsigned __int64 __fastcall sub_235C0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 *v2; // r12
  unsigned __int64 *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int v7; // r15d
  __int64 v8; // rax
  unsigned __int64 *v10; // [rsp+8h] [rbp-1B0h]
  char v11; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v12; // [rsp+178h] [rbp-40h] BYREF

  v1 = a1[665];
  v12 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)a1[664];
  v10 = &v2[2 * v1];
  if ( v10 != v2 )
  {
    while ( 1 )
    {
      v3 = (unsigned __int64 *)&v11;
      do
      {
        v4 = 0;
        v5 = 0;
        *(_WORD *)v3 = 0;
        v3 += 5;
        *((_WORD *)v3 - 19) = 0;
        *((_WORD *)v3 - 18) = 0;
        *((_DWORD *)v3 - 2) = 0;
        *((_WORD *)v3 - 17) = 0;
        *((_OWORD *)v3 - 2) = 0;
        *(v3 - 2) = 0;
      }
      while ( &v12 != v3 );
      v6 = *v2;
      if ( *v2 < v2[1] )
        break;
LABEL_11:
      v2 += 2;
      if ( v10 == v2 )
        return v12 - __readfsqword(0x28u);
    }
    while ( !(unsigned __int8)callui(27, v5, v4) )
    {
      v8 = a1[1710] + 1LL;
      a1[1710] = v8;
      if ( v8 == 10000 )
      {
        sub_19440((__int64)"Decoding branch islands (%a)");
        a1[1710] = 0;
      }
      v7 = decode_insn();
      if ( v7 > 0 )
      {
        v5 = v6 + 1;
        auto_mark_range();
        v6 += v7;
        if ( v6 < v2[1] )
          continue;
      }
      goto LABEL_11;
    }
  }
  return v12 - __readfsqword(0x28u);
}

