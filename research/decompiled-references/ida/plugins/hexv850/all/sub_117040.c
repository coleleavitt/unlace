__int64 __fastcall sub_117040(int *a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // r13d
  int v6; // r14d
  signed int v7; // ebx
  char v9; // dl
  int v10; // eax
  int v11; // r14d
  __int64 result; // rax

  v5 = (unsigned __int16)a5 >> 3;
  v6 = *(_DWORD *)(a4 + 4);
  if ( v5 > v6 )
    v5 = *(_DWORD *)(a4 + 4);
  v7 = (unsigned int)((unsigned __int16)a5 + HIWORD(a5) + 7) >> 3;
  if ( v7 > v6 )
    v7 = *(_DWORD *)(a4 + 4);
  if ( *(_BYTE *)(a3 + 145) )
  {
    v9 = sub_116FD0((unsigned __int8 *)a4);
    v10 = *(_DWORD *)(a4 + 4);
    if ( v9 )
    {
      v11 = v6 - v7;
      v7 = v10 - v5;
      v5 = v11;
    }
    else
    {
      v7 = v10 + v7 - v6;
    }
  }
  result = 0;
  if ( v5 < v7 )
  {
    *a1 = v5;
    result = 1;
    *a2 = v7 - v5;
  }
  return result;
}

