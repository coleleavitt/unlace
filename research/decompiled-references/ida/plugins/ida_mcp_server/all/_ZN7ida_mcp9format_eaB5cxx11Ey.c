__int64 *__fastcall ida_mcp::format_ea[abi:cxx11](__int64 *a1)
{
  _QWORD *v1; // rbp
  size_t v2; // rax
  unsigned int v3; // ecx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  char *v7; // rbp
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rsi
  unsigned int v12; // [rsp+8h] [rbp-60h]
  size_t v13; // [rsp+18h] [rbp-50h]
  char s[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v1 = a1 + 2;
  v15 = __readfsqword(0x28u);
  qsnprintf();
  *a1 = (__int64)(a1 + 2);
  v2 = strlen(s);
  v13 = v2;
  v3 = v2;
  if ( v2 > 0xF )
  {
    v12 = v2;
    v5 = std::string::_M_create();
    v3 = v12;
    *a1 = v5;
    v1 = (_QWORD *)v5;
    a1[2] = v13;
  }
  else
  {
    if ( v2 == 1 )
    {
      *((_BYTE *)a1 + 16) = s[0];
      goto LABEL_4;
    }
    if ( !v2 )
      goto LABEL_4;
  }
  if ( v3 >= 8 )
  {
    *v1 = *(_QWORD *)s;
    *(_QWORD *)((char *)v1 + v3 - 8) = *(_QWORD *)&s[v3 - 8];
    v6 = (unsigned __int64)(v1 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v7 = (char *)v1 - v6;
    v8 = ((_DWORD)v7 + v3) & 0xFFFFFFF8;
    if ( v8 >= 8 )
    {
      v9 = v8 & 0xFFFFFFF8;
      v10 = 0;
      do
      {
        v11 = v10;
        v10 += 8;
        *(_QWORD *)(v6 + v11) = *(_QWORD *)(s - v7 + v11);
      }
      while ( v10 < v9 );
    }
  }
  else if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)v1 = *(_DWORD *)s;
    *(_DWORD *)((char *)v1 + v3 - 4) = *(_DWORD *)&s[v3 - 4];
  }
  else if ( v3 )
  {
    *(_BYTE *)v1 = s[0];
    if ( (v3 & 2) != 0 )
      *(_WORD *)((char *)v1 + v3 - 2) = *(_WORD *)&s[v3 - 2];
  }
  v2 = v13;
  v1 = (_QWORD *)*a1;
LABEL_4:
  a1[1] = v2;
  *((_BYTE *)v1 + v2) = 0;
  return a1;
}

