__int64 __fastcall sub_2A9470(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned int v6; // r14d
  __int64 v7; // rax
  const char *v8; // rsi
  _DWORD v10[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = *(int *)(*a2 + 152);
  if ( v4 >= *(_QWORD *)(*a2 + 136) )
  {
    return (unsigned int)-1;
  }
  else
  {
    v6 = *(_DWORD *)(*a2 + 152);
    while ( 1 )
    {
      v7 = *(_QWORD *)(v3 + 128) + 32 * v4;
      v10[0] = 0;
      v8 = s1;
      if ( *(_QWORD *)(v7 + 8) )
        v8 = *(const char **)v7;
      sub_385890(v3, (_DWORD)v8, 0, 1, 0, (unsigned int)v10, 0);
      if ( *(_DWORD *)(a1 + 8) == (unsigned int)((__int64 (__fastcall *)(_DWORD *, __int64))sub_3888A0)(v10, 1) )
        break;
      v3 = *a2;
      v4 = (int)++v6;
      if ( (unsigned __int64)(int)v6 >= *(_QWORD *)(*a2 + 136) )
        return (unsigned int)-1;
    }
  }
  return v6;
}

