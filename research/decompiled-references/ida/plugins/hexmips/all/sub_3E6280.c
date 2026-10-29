__int64 __fastcall sub_3E6280(__int64 a1, int a2)
{
  char *v3; // rax
  int v4; // edx
  __int64 result; // rax
  int v6; // r9d
  __int64 v7; // rdx
  int v8; // ecx
  char *v9; // rdx
  _DWORD *v10; // rsi
  char v11; // cl
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
    v6 = 0;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
    v8 = *(_DWORD *)(v7 + 104);
    if ( v8 <= 0 && *(int *)(v7 + 108) > 0 )
      v6 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * -v8 + 8);
    v9 = &v13;
    v10 = dword_4117A0;
    result = 0;
    while ( 1 )
    {
      v11 = *v9;
      if ( *v9 == 3 )
      {
        if ( v9[31] == 1 )
          goto LABEL_13;
        if ( a2 == (*(_DWORD *)(v9 + 23) & 0x1F) || a2 == ((*(_QWORD *)(v9 + 23) >> 5) & 0x1F) )
        {
          v9 += 40;
          result = (unsigned int)result | 2;
          ++v10;
          if ( (char *)v14 + 1 == v9 )
            return result;
        }
        else
        {
LABEL_11:
          v9 += 40;
          ++v10;
          if ( (char *)v14 + 1 == v9 )
            return result;
        }
      }
      else
      {
        if ( v11 != 4 )
        {
          if ( v11 == 1 && *(unsigned __int16 *)(v9 + 5) == a2 )
            result = (((v6 & *v10) == 0) + 1) | (unsigned int)result;
          goto LABEL_11;
        }
LABEL_13:
        if ( *(unsigned __int16 *)(v9 + 5) == a2 )
          result = (unsigned int)result | 2;
        v9 += 40;
        ++v10;
        if ( (char *)v14 + 1 == v9 )
          return result;
      }
    }
  }
  return result;
}

