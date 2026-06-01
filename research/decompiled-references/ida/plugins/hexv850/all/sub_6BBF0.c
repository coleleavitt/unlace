__int64 __fastcall sub_6BBF0(_QWORD *a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int64 v6; // rsi
  int v7; // r13d
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rbx
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  __int64 (__fastcall *v13)(__int64, int); // rax
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, int, int); // rax
  int v16; // eax
  unsigned int v17; // edx
  _DWORD *v18; // rax
  __int64 v19; // rcx

  v6 = a4[1];
  if ( v6 > 1 )
  {
    v7 = -1;
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      v10 = *(int *)(*a4 + 4 * v9);
      v11 = *(_DWORD **)(a2 + 256);
      v12 = &v11[*(_QWORD *)(a2 + 264)];
      if ( v11 != v12 )
      {
        while ( (_DWORD)v10 != *v11 )
        {
          if ( v12 == ++v11 )
            goto LABEL_8;
        }
        if ( v12 != v11 )
          return 0;
      }
LABEL_8:
      v13 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
      if ( v13 == sub_60610 )
      {
        if ( !a1[7] )
          goto LABEL_18;
        v14 = *(_DWORD *)(a1[6] + 24LL * (int)v10 + 8);
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _DWORD *, __int64 (__fastcall *)(__int64, int)))v13)(
                a1,
                (unsigned int)v10,
                v12,
                sub_60610);
      }
      if ( v14 )
      {
        if ( v14 != 1 )
          return 0;
        v15 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
        if ( v15 == sub_60650 )
          v16 = **(_DWORD **)(a1[6] + 24 * v10);
        else
          v16 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64 (__fastcall *)(__int64, int)))v15)(
                  a1,
                  (unsigned int)v10,
                  0,
                  sub_60610);
        if ( v7 == -1 )
        {
          v7 = v16;
        }
        else if ( v16 != v7 )
        {
          return 0;
        }
      }
      v6 = a4[1];
LABEL_18:
      v9 = ++v8;
      if ( v8 >= v6 )
        goto LABEL_19;
    }
  }
  v7 = -1;
LABEL_19:
  v17 = 1;
  if ( a3 != v7 )
  {
    v18 = (_DWORD *)*a4;
    v19 = *a4 + 4 * v6;
    if ( *a4 != v19 )
    {
      do
      {
        if ( v7 == *v18 )
        {
          LOBYTE(v17) = v19 == (_QWORD)v18;
          return v17;
        }
        ++v18;
      }
      while ( (_DWORD *)v19 != v18 );
      return 1;
    }
  }
  return v17;
}

