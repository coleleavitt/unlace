__int64 __fastcall sub_3E2F80(__int64 a1, int a2)
{
  char *v3; // rax
  int v4; // edx
  __int64 result; // rax
  char *v6; // rdx
  _DWORD *v7; // rsi
  char v8; // cl
  int v9; // r8d
  __int64 v10; // r9
  int v11; // r10d
  char v12; // [rsp+28h] [rbp-160h] BYREF
  char v13; // [rsp+29h] [rbp-15Fh] BYREF
  _QWORD v14[4]; // [rsp+168h] [rbp-20h] BYREF

  v14[0] = __readfsqword(0x28u);
  v3 = &v12;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 40;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *((_QWORD *)v3 - 2) = 0;
  }
  while ( v3 != (char *)v14 );
  v4 = decode_insn();
  result = 0;
  if ( v4 )
  {
    v6 = &v13;
    v7 = dword_404680;
    result = 0;
    while ( 1 )
    {
      v8 = *v6;
      if ( !*v6 )
        return result;
      if ( v8 == 3 )
      {
        if ( *(unsigned __int16 *)(v6 + 5) == a2 || v6[31] == a2 )
          result = (unsigned int)result | 2;
        goto LABEL_7;
      }
      if ( v8 != 4 )
        break;
      if ( *(unsigned __int16 *)(v6 + 5) == a2 )
      {
        result = (unsigned int)result | 2;
        v6 += 40;
        ++v7;
        if ( v6 == (char *)v14 + 1 )
          return result;
      }
      else
      {
LABEL_7:
        v6 += 40;
        ++v7;
        if ( v6 == (char *)v14 + 1 )
          return result;
      }
    }
    if ( v8 == 1 && *(unsigned __int16 *)(v6 + 5) == a2 )
    {
      v9 = 2;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
      v11 = *(_DWORD *)(v10 + 104);
      if ( v11 <= 0 && *(int *)(v10 + 108) > 0 )
        v9 = ((*v7 & *(_DWORD *)(*(_QWORD *)(v10 + 112) + 16LL * -v11 + 8)) == 0) + 1;
      result = v9 | (unsigned int)result;
    }
    goto LABEL_7;
  }
  return result;
}

