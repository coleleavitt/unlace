__int64 __fastcall sub_154D70(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v8; // rsi
  unsigned int v9; // eax
  char v10; // al
  int v11; // eax
  char v12[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v5 = 0;
  if ( *(_BYTE *)a1 == 4 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 > 9u )
      goto LABEL_13;
LABEL_4:
    if ( v9 > 7 )
    {
      if ( v9 != a2 )
        return (unsigned int)v5;
    }
    else
    {
      if ( v9 != 4 )
        return (unsigned int)v5;
      v10 = *(_BYTE *)(v8 + 32);
      if ( v10 != 10 && v10 != 4 && (unsigned int)(a2 - 10) <= 1 )
        return (unsigned int)v5;
    }
    while ( 2 )
    {
      if ( !a3 || *(_DWORD *)(v8 + 36) == *(_DWORD *)(v8 + 68) )
      {
        do
        {
          sub_123A40((__int64)v12, (unsigned __int8 *)(v8 + 32), v5, a4);
          sub_11CA10((char *)a1, v12);
          if ( *(_BYTE *)a1 != 4 )
          {
            sub_11CDA0((__int64)v12);
            LODWORD(v5) = 1;
            return (unsigned int)v5;
          }
          sub_11CDA0((__int64)v12);
          v8 = *(_QWORD *)(a1 + 8);
          v5 = 1;
          v9 = *(_DWORD *)v8;
          if ( *(_DWORD *)v8 <= 9u )
            goto LABEL_4;
LABEL_13:
          if ( v9 != 67 )
            return (unsigned int)v5;
          a4 = *(unsigned int *)(v8 + 36);
          v11 = *(_DWORD *)(v8 + 68);
        }
        while ( (_DWORD)a4 == v11 );
        if ( *(_BYTE *)(v8 + 32) == 13 && (int)a4 < v11 )
        {
          *(_DWORD *)(v8 + 36) = v11;
          v8 = *(_QWORD *)(a1 + 8);
          continue;
        }
      }
      break;
    }
  }
  return (unsigned int)v5;
}

