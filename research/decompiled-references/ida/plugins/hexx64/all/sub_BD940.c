__int64 __fastcall sub_BD940(__int64 a1, int *a2, unsigned __int8 *a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // edx
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // rax

  if ( *(_DWORD *)a3 != *a2 )
  {
    v4 = sub_32E9E0(*a2);
    v5 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 == v4 )
    {
      *(_DWORD *)(a1 + 416) |= 1u;
    }
    else
    {
      if ( (unsigned int)(v5 - 32) > 9 )
        return 0;
      v6 = v5 + 11;
      if ( *a2 != v6 )
      {
        if ( v4 == v6 )
        {
          *(_DWORD *)(a1 + 416) |= 3u;
          goto LABEL_7;
        }
        return 0;
      }
      *(_DWORD *)(a1 + 416) |= 2u;
    }
  }
LABEL_7:
  result = sub_BC1C0((_QWORD *)a1, a3, (__int64)a2, 1);
  if ( !(_BYTE)result )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        ++v8;
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(int *)(*(_QWORD *)(a1 + 88) + 4 * v9)) = 0;
        v9 = v8;
      }
      while ( (unsigned __int64)v8 < *(_QWORD *)(a1 + 96) );
    }
    *(_QWORD *)(a1 + 96) = 0;
    return 0;
  }
  return result;
}

