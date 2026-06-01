__int64 __fastcall sub_3D56A0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 )
    return 0;
  v4 = 0;
  if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) > 1 )
    return v4;
  v4 = qalloc_or_throw();
  *(_QWORD *)v4 = off_4E3770;
  *(_QWORD *)(v4 + 28) = 0x4900000000LL;
  v6 = (unsigned __int16)a2;
  v7 = a2 >> 16;
  *(_QWORD *)(v4 + 12) = 3;
  *(_QWORD *)(v4 + 20) = 0;
  *(_OWORD *)(v4 + 40) = -1;
  *(_OWORD *)(v4 + 56) = -1;
  if ( (int)(a2 >> 16) <= 0 && !(_WORD)a2 )
  {
    if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) <= 1 && *(int *)(*(_QWORD *)(v3 + 64) + 64LL) > 0 )
    {
      *(_DWORD *)(v4 + 8) = 0;
      sub_3D5270(a1, v4, v3, NAN);
    }
    return v4;
  }
  if ( a3 != 0x7FFFFFFF && (int)v7 < *(_DWORD *)(*(_QWORD *)(v3 + 64) + 64LL) )
  {
    if ( (v7 & 0x80000000) == 0LL )
    {
      v8 = *(_DWORD *)(v3 + 60) - 1;
      if ( (unsigned __int64)(int)v7 >= *(_QWORD *)(v3 + 120) )
      {
        v6 = 0;
        if ( v8 > 1 )
          return v4;
        goto LABEL_11;
      }
      v9 = *(_QWORD *)(*(_QWORD *)(v3 + 112) + 24LL * (int)v7 + 8);
      if ( v9 )
      {
        if ( (int)v9 > (unsigned __int16)a2 )
        {
          if ( v8 > 1 )
            return v4;
        }
        else
        {
          v6 = v9 - 1;
          if ( v8 > 1 )
            return v4;
        }
        goto LABEL_11;
      }
      v6 = 0;
      if ( v8 <= 1 )
      {
LABEL_11:
        *(_DWORD *)(v4 + 8) = 0;
        *(_DWORD *)(v4 + 20) = v7;
        *(_DWORD *)(v4 + 24) = v6;
        sub_3D5270(a1, v4, v3, NAN);
      }
    }
    return v4;
  }
  sub_3D5620(a1, (_DWORD *)v4, v3, NAN);
  return v4;
}

