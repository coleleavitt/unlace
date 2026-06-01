__int64 __fastcall sub_11BC00(int *a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5, double a6)
{
  int v6; // r13d
  int v7; // r14d
  signed int v8; // ebx
  char v10; // dl
  int v11; // eax
  int v12; // r14d
  __int64 result; // rax

  v6 = (unsigned __int16)a5 >> 3;
  v7 = *(_DWORD *)(a4 + 4);
  if ( v6 > v7 )
    v6 = *(_DWORD *)(a4 + 4);
  v8 = (unsigned int)((unsigned __int16)a5 + HIWORD(a5) + 7) >> 3;
  if ( v8 > v7 )
    v8 = *(_DWORD *)(a4 + 4);
  if ( *(_BYTE *)(a3 + 145) )
  {
    v10 = sub_11BB90((unsigned __int8 *)a4, a3, 0, a6);
    v11 = *(_DWORD *)(a4 + 4);
    if ( v10 )
    {
      v12 = v7 - v8;
      v8 = v11 - v6;
      v6 = v12;
    }
    else
    {
      v8 = v11 + v8 - v7;
    }
  }
  result = 0;
  if ( v6 < v8 )
  {
    *a1 = v6;
    result = 1;
    *a2 = v8 - v6;
  }
  return result;
}

