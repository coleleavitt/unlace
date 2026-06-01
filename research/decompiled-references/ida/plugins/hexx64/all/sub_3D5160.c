__int64 __fastcall sub_3D5160(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // r12d
  int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    return 0;
  v5 = 0;
  if ( (unsigned int)(*(_DWORD *)(v4 + 60) - 1) > 1 )
    return v5;
  v6 = a3;
  v5 = qalloc_or_throw(72, a2, a3, a4);
  *(_QWORD *)v5 = off_4E90B0;
  *(_QWORD *)(v5 + 28) = 0x4900000000LL;
  v7 = (unsigned __int16)a2;
  v8 = a2 >> 16;
  *(_QWORD *)(v5 + 12) = 3;
  *(_QWORD *)(v5 + 20) = 0;
  *(_OWORD *)(v5 + 40) = -1;
  *(_OWORD *)(v5 + 56) = -1;
  if ( (int)(a2 >> 16) <= 0 && !(_WORD)a2 )
  {
    if ( (unsigned int)(*(_DWORD *)(v4 + 60) - 1) <= 1 && *(int *)(*(_QWORD *)(v4 + 64) + 64LL) > 0 )
    {
      *(_DWORD *)(v5 + 8) = 0;
      sub_3D4D30(a1, v5, v4, NAN);
    }
    return v5;
  }
  if ( v6 != 0x7FFFFFFF && (int)v8 < *(_DWORD *)(*(_QWORD *)(v4 + 64) + 64LL) )
  {
    if ( (v8 & 0x80000000) == 0LL )
    {
      v9 = *(_DWORD *)(v4 + 60) - 1;
      if ( (unsigned __int64)(int)v8 >= *(_QWORD *)(v4 + 120) )
      {
        v7 = 0;
        if ( v9 > 1 )
          return v5;
        goto LABEL_11;
      }
      v10 = *(_QWORD *)(*(_QWORD *)(v4 + 112) + 24LL * (int)v8 + 8);
      if ( v10 )
      {
        if ( (int)v10 > (unsigned __int16)a2 )
        {
          if ( v9 > 1 )
            return v5;
        }
        else
        {
          v7 = v10 - 1;
          if ( v9 > 1 )
            return v5;
        }
        goto LABEL_11;
      }
      v7 = 0;
      if ( v9 <= 1 )
      {
LABEL_11:
        *(_DWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v5 + 20) = v8;
        *(_DWORD *)(v5 + 24) = v7;
        sub_3D4D30(a1, v5, v4, NAN);
      }
    }
    return v5;
  }
  sub_3D50E0(a1, (_DWORD *)v5, v4, NAN);
  return v5;
}

