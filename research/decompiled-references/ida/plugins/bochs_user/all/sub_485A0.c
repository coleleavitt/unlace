__int64 __fastcall sub_485A0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  _QWORD *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  int v11; // r13d
  _QWORD *v12; // rdi
  const char *v13; // rsi
  void *v14; // r12
  int v15; // [rsp+4h] [rbp-54h] BYREF
  void *v16; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 6584);
  v17[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)((char *)a2 + 140) != v3 )
  {
    if ( *(_QWORD *)(a1 + 5536) != -1 )
      return sub_47AA0(a1, a2);
    return (unsigned int)-1;
  }
  v6 = sub_4B840(a1 + 64, *(_QWORD *)((char *)a2 + 12));
  if ( !v6 || *(_DWORD *)(v6 + 32) != 2 )
  {
    v7 = sub_44600(a1, *(_QWORD *)((char *)a2 + 12));
    if ( v7 )
    {
      v8 = *(_DWORD *)(a1 + 316);
      v17[0] = 0;
      v15 = v8;
      v9 = callui(1082, 0xFFFFFFFFLL, &v15, 0x7FFF);
      v10 = ((__int64 (__fastcall *)(_QWORD *, void **, _QWORD *))v7)(a2 + 1, &v16, v17);
      if ( v10 == 1 && v17[0] )
      {
        v11 = 0;
        do
        {
          v12 = *(_QWORD **)(a3 + 48);
          if ( v12 == (_QWORD *)(*(_QWORD *)(a3 + 64) - 72LL) )
          {
            sub_1B9A0(a3);
          }
          else
          {
            *v12 = 0xFFFFFFFFLL;
            v12[1] = -1;
            v12[2] = 0;
            copy_debug_event();
            *(_QWORD *)(a3 + 48) += 72LL;
          }
          ++v11;
        }
        while ( (unsigned __int64)v11 < v17[0] );
        v14 = v16;
        if ( v16 )
        {
          free_debug_event();
          operator delete(v14, 0x48u);
        }
      }
      callui(1082, v9, &v15, 0x7FFF);
      return v10;
    }
    return (unsigned int)-1;
  }
  v13 = s1;
  if ( *(_QWORD *)(v6 + 48) )
    v13 = *(const char **)(v6 + 40);
  return sub_45DC0(a1, v13);
}

