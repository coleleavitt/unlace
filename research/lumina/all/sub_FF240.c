unsigned __int64 __fastcall sub_FF240(int a1, const char *a2)
{
  const char *v2; // r13
  bool v4; // bl
  __int64 v5; // rax
  __int64 v6; // r14
  char *v7; // rdx
  unsigned __int8 v9; // bl
  int v10; // r9d
  __int64 v11; // r10
  char v12; // bp
  char v13; // al
  __int64 v14; // rax
  char v15; // si
  __int64 i; // rax
  __int64 v17; // rax
  char v18; // di
  char v19; // r8
  _DWORD v20[66]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v21; // [rsp+108h] [rbp-30h]

  v2 = a2;
  v21 = __readfsqword(0x28u);
  v4 = a1 <= 0 || a2 == nullptr;
  if ( (_BYTE)word_241484 && (v5 = xmmword_2414F0(5), (v6 = v5) != 0) )
  {
    xmmword_241500(v5);
    if ( v4 )
    {
      byte_242380[0] = 0;
LABEL_5:
      xmmword_241510(v6, a2, v7);
      return __readfsqword(0x28u) ^ v21;
    }
  }
  else
  {
    v6 = 0;
    if ( v4 )
    {
      byte_242380[0] = 0;
      return __readfsqword(0x28u) ^ v21;
    }
  }
  v9 = byte_242380[0];
  if ( byte_242380[0] )
  {
    v9 = HIBYTE(word_242381);
    v10 = (unsigned __int8)word_242381;
    v7 = byte_242380;
  }
  else
  {
    v14 = sub_FF150(nullptr, a2);
    word_242381 = 0;
    if ( v14 )
    {
      v15 = dword_241630;
      if ( dword_241630 )
      {
        memset(&v20[1], 0, 252);
        v10 = 0;
        v20[0] = dword_241630;
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64, _DWORD *))(v14 + 104))(v14, 256, v20);
        v9 = HIBYTE(word_242381);
        v10 = (unsigned __int8)word_242381;
        v15 = v20[0];
      }
    }
    else
    {
      v10 = 0;
      v15 = 0;
      memset(v20, 0, 0x100u);
    }
    for ( i = 0; i != 256; ++i )
      byte_242383[i] = i;
    v17 = 0;
    v7 = byte_242380;
    while ( 1 )
    {
      v18 = byte_242383[v17];
      v9 += v15 + v18;
      v19 = byte_242380[v9 + 3];
      byte_242380[v9 + 3] = v18;
      byte_242383[v17++] = v19;
      if ( v17 == 256 )
        break;
      v15 = *((_BYTE *)v20 + v17);
    }
    byte_242380[0] = 1;
  }
  LODWORD(a2) = v10;
  v11 = (__int64)&v2[a1 - 1 + 1];
  v12 = a1 - 1;
  do
  {
    a2 = (const char *)(unsigned int)((_DWORD)a2 + 1);
    ++v2;
    v13 = byte_242380[(unsigned __int8)a2 + 3];
    v9 += v13;
    byte_242380[(unsigned __int8)a2 + 3] = byte_242380[v9 + 3];
    byte_242380[v9 + 3] = v13;
    *((_BYTE *)v2 - 1) = byte_242380[(unsigned __int8)(byte_242380[(unsigned __int8)a2 + 3] + v13) + 3];
  }
  while ( v2 != (const char *)v11 );
  HIBYTE(word_242381) = v9;
  LOBYTE(word_242381) = v10 + v12 + 1;
  if ( v6 )
    goto LABEL_5;
  return __readfsqword(0x28u) ^ v21;
}
